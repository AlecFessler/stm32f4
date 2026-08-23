#ifndef MMIO_HPP
#define MMIO_HPP

#include <cstdint>

//          read   write   rmw   clear
//  RW        y       y       y      .      ordinary field
//  RO        y       .       .      .
//  WO        .       y       .      .      reads as 0, no state to modify
//  RC_W1     y       .       .      y      write 1 clears, write 0 no effect
//  RC_W0     y       .       .      y      write 0 clears, write 1 no effect
//
// Every . is a static_assert, not a runtime check.
//
// RC_W* bits hold no value, so write and rmw have nothing to store into them.
// A written 1 or 0 is a command meaning "acknowledge", which is what clear()
// issues, and why clear() takes no argument.
enum class Access {RW, RO, WO, RC_W1, RC_W0};
// A 32-bit store is all-or-nothing, so writing one field also writes every
// clear-on-write flag beside it. The last three parameters describe those
// neighbors by how each survives a write-back, and every accessor that stores
// obeys them:
//
//   preserve_w1_mask   rc_w1 bits    survive a written 0
//   preserve_w0_mask   rc_w0 bits    survive a written 1
//   has_rw             rw bits       survive nothing; only a read recovers
//                                    them, so this is a yes or no rather than
//                                    a mask
//
// A register with no such neighbors leaves all three at their defaults, and
// if constexpr then generates exactly what the naive accessor would.
template <Access Acc, class Value = uint32_t, uint32_t preserve_w1_mask = 0,
          uint32_t preserve_w0_mask = 0, bool has_rw = false>
struct Field {
    uintptr_t addr;
    uint32_t mask;
    uint32_t shift;

    volatile uint32_t& reg() const {return *reinterpret_cast<volatile uint32_t*>(addr);}

    __attribute__((always_inline)) Value read() const {
        static_assert(Acc != Access::WO, "read: field is write-only");
        const uint32_t field_bits = reg() & mask;
        const uint32_t encoding = field_bits >> shift;
        return static_cast<Value>(encoding);
    }

    // Every bit outside mask gets a 0 from the store, which is already what
    // preserve_w1_mask wants. Only preserve_w0_mask has to be put back.
    __attribute__((always_inline)) void write(Value val) const {
        static_assert(Acc == Access::RW || Acc == Access::WO,
                      "write: field is read-only or clears on write");
        const uint32_t encoding = static_cast<uint32_t>(val);
        const uint32_t field_bits = (encoding << shift) & mask;
        reg() = field_bits | preserve_w0_mask;
    }

    // rw bits are the one kind a store cannot satisfy, so only they cost a
    // read. The rest of the register needs nothing read back: preserve_w0_mask
    // goes out as 1 and preserve_w1_mask stays at 0.
    __attribute__((always_inline)) void clear() const {
        static_assert(Acc == Access::RC_W1 || Acc == Access::RC_W0,
                      "clear: field does not clear on write");
        const uint32_t kept = has_rw ? (reg() & ~preserve_w1_mask) : 0;
        const uint32_t neighbors = kept | preserve_w0_mask;
        reg() = (Acc == Access::RC_W1) ? (neighbors | mask)
                                       : (neighbors & ~mask);
    }

    // A set preserve_w1_mask bit reads back as 1, and storing that 1 is what
    // clears it, so it goes out as 0 alongside mask. preserve_w0_mask is the
    // mirror: a stored 0 would clear it, so it goes back as a 1.
    __attribute__((always_inline)) void rmw(Value val) const {
        static_assert(Acc == Access::RW,
                      "rmw: field is not read-write");
        const uint32_t encoding = static_cast<uint32_t>(val);
        const uint32_t field_bits = (encoding << shift) & mask;
        const uint32_t force_zero = mask | preserve_w1_mask;
        const uint32_t neighbors = (reg() & ~force_zero) | preserve_w0_mask;
        reg() = neighbors | field_bits;
    }
};

#endif // MMIO_HPP
