#ifndef MMIO_HPP
#define MMIO_HPP

#include <cstdint>

//          read   write   set   clear   rmw
//  RW        y       y      .      .      y      ordinary field
//  RO        y       .      .      .      .
//  WO        .       y      .      .      .      reads as 0, no state to modify
//  RS        y       .      y      .      .      write 1 sets, write 0 no effect
//  RC_W1     y       .      .      y      .      write 1 clears, write 0 no effect
//  RC_W0     y       .      .      y      .      write 0 clears, write 1 no effect
//
// Every . is a static_assert, not a runtime check.
//
// RS, RC_W1 and RC_W0 bits hold no value, so write and rmw have nothing to
// store into them. A written 1 or 0 is a command, which is what set() and
// clear() issue, and why neither takes an argument.
enum class Access {RW, RO, WO, RS, RC_W1, RC_W0};

// A 32-bit store is all-or-nothing, so writing one field also writes every
// other bit of the register. Two masks name the bits a store has to state
// explicitly rather than leave at 0:
//
//   force_zero_mask   rc_w1 flags, where a stored 1 would acknowledge them.
//                     A bare store already gives them 0; only a write-back
//                     after a read has to put it there.
//   force_one_mask    rc_w0 flags, where a stored 0 would acknowledge them,
//                     and reserved bits whose reset value is 1, which RM0090
//                     asks be kept. Both need a 1 in every store.
//
// rw_neighbors covers what neither mask can: rw bits elsewhere in the
// register, whose value no store can reconstruct. It decides whether set() and
// clear() have to read, and whether write() is allowed at all. It defaults to
// true because most fields have neighbors, and because a hand-written Field is
// then guarded rather than trusted. It is a template parameter rather than a
// member because it gates a volatile read, and a member would leave that read
// in the binary at -O0.
template <Access acc, class Value = uint32_t, bool rw_neighbors = true>
struct Field {
    uintptr_t addr;
    uint32_t field_mask;
    uint32_t shift;
    uint32_t force_zero_mask = 0;
    uint32_t force_one_mask = 0;

    volatile uint32_t& reg() const {return *reinterpret_cast<volatile uint32_t*>(addr);}

    __attribute__((always_inline)) Value read() const {
        static_assert(acc != Access::WO, "read: field is write-only");
        const uint32_t field_bits = reg() & field_mask;
        const uint32_t encoding = field_bits >> shift;
        return static_cast<Value>(encoding);
    }

    // Every bit outside field_mask gets a 0 from the store, which is already
    // what force_zero_mask wants. Only force_one_mask has to be put back.
    __attribute__((always_inline)) void write(Value val) const {
        static_assert(acc == Access::RW || acc == Access::WO,
                      "write: field is read-only, or sets or clears on write");
        static_assert(acc == Access::WO || !rw_neighbors,
                      "write: would zero the rw bits beside this field; rmw");
        const uint32_t encoding = static_cast<uint32_t>(val);
        const uint32_t field_bits = (encoding << shift) & field_mask;
        reg() = field_bits | force_one_mask;
    }

    // rw bits are the one kind a store cannot satisfy, so without them the
    // stored word is a constant.
    __attribute__((always_inline)) void set() const {
        static_assert(acc == Access::RS, "set: field does not set on write");
        const uint32_t kept = rw_neighbors ? (reg() & ~force_zero_mask) : 0;
        reg() = kept | force_one_mask | field_mask;
    }

    __attribute__((always_inline)) void clear() const {
        static_assert(acc == Access::RC_W1 || acc == Access::RC_W0,
                      "clear: field does not clear on write");
        const uint32_t kept = rw_neighbors ? (reg() & ~force_zero_mask) : 0;
        const uint32_t neighbors = kept | force_one_mask;
        reg() = (acc == Access::RC_W1) ? (neighbors | field_mask)
                                       : (neighbors & ~field_mask);
    }

    // A set force_zero_mask bit reads back as 1, and storing that 1 is what
    // clears it, so it goes out as 0 alongside field_mask. force_one_mask is
    // the mirror: a stored 0 would clear it, so it goes back as a 1.
    __attribute__((always_inline)) void rmw(Value val) const {
        static_assert(acc == Access::RW, "rmw: field is not read-write");
        const uint32_t encoding = static_cast<uint32_t>(val);
        const uint32_t field_bits = (encoding << shift) & field_mask;
        const uint32_t zeroed = field_mask | force_zero_mask;
        const uint32_t neighbors = (reg() & ~zeroed) | force_one_mask;
        reg() = neighbors | field_bits;
    }
};

#endif // MMIO_HPP
