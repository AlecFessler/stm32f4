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
//
// bit_band says this field has a peripheral bit-band alias: a whole word that
// maps to this one bit, where the hardware does the read-modify-write and no
// interrupt can land inside it. The generator sets it only where the alias is
// safe, which needs the field to be one bit, the register to live below
// 0x40100000, and no other rc_w1 flag to share the register, since the
// hardware writes back what it read and a 1 there would acknowledge it.
template <Access acc, class Value = uint32_t, bool bit_band = false,
          bool rw_neighbors = true>
struct Field {
    uintptr_t addr;
    uint32_t field_mask;
    uint32_t shift;
    uint32_t force_zero_mask = 0;
    uint32_t force_one_mask = 0;

    volatile uint32_t& reg() const {return *reinterpret_cast<volatile uint32_t*>(addr);}

    // The alias word for this field's bit, where a store reaches that bit and
    // nothing else.
    //
    // PM0214 2.2.5: bit_word_addr = alias_base + byte_offset * 32 + bit * 4.
    // Both operands are constants of a constexpr Field, so this folds to an
    // immediate the same way the masks do.
    volatile uint32_t& alias() const {
        return *reinterpret_cast<volatile uint32_t*>(
            0x42000000u + (addr - 0x40000000u) * 32u + shift * 4u);
    }

    // The field's current value.
    __attribute__((always_inline)) Value read() const {
        static_assert(acc != Access::WO, "read: field is write-only");
        if constexpr (bit_band) {
            return static_cast<Value>(alias());
        } else {
            const uint32_t field_bits = reg() & field_mask;
            const uint32_t encoding = field_bits >> shift;
            return static_cast<Value>(encoding);
        }
    }

    // Assign the field and disturb nothing else in the register.
    //
    // One store, so no interrupt can land between a read and a write. Three
    // cases allow that: a write-only register, whose neighbors ignore a 0; a
    // field sharing its register with nothing writable; or a field with a
    // bit-band alias, which reaches one bit. Anything else has to read first,
    // which is rmw.
    //
    // Outside the alias, every bit beyond field_mask gets a 0 from the store,
    // which is already what force_zero_mask wants. Only force_one_mask has to
    // be put back.
    __attribute__((always_inline)) void write(Value val) const {
        static_assert(acc == Access::RW || acc == Access::WO,
                      "write: field is read-only, or sets or clears on write");
        static_assert(acc == Access::WO || !rw_neighbors || bit_band,
                      "write: would zero the rw bits beside this field; rmw");
        const uint32_t encoding = static_cast<uint32_t>(val);
        if constexpr (bit_band) {
            alias() = encoding;
        } else {
            const uint32_t field_bits = (encoding << shift) & field_mask;
            reg() = field_bits | force_one_mask;
        }
    }

    // Set the bit. There is no unset to pair with it: rs hardware ignores a
    // written 0, so only the hardware clears it again.
    //
    // rw bits are the one kind a store cannot satisfy, so without them the
    // stored word is a constant. clear() below has the same shape.
    __attribute__((always_inline)) void set() const {
        static_assert(acc == Access::RS, "set: field does not set on write");
        if constexpr (bit_band) {
            alias() = 1;
        } else {
            const uint32_t kept = rw_neighbors ? (reg() & ~force_zero_mask) : 0;
            reg() = kept | force_one_mask | field_mask;
        }
    }

    // Acknowledge this flag and leave every other one standing. Which write
    // does the acknowledging is the only difference between the two
    // clear-on-write accesses: rc_w1 takes a 1, rc_w0 takes a 0.
    __attribute__((always_inline)) void clear() const {
        static_assert(acc == Access::RC_W1 || acc == Access::RC_W0,
                      "clear: field does not clear on write");
        if constexpr (bit_band) {
            alias() = (acc == Access::RC_W1) ? 1 : 0;
        } else {
            const uint32_t kept = rw_neighbors ? (reg() & ~force_zero_mask) : 0;
            const uint32_t neighbors = kept | force_one_mask;
            reg() = (acc == Access::RC_W1) ? (neighbors | field_mask)
                                           : (neighbors & ~field_mask);
        }
    }

    // Assign the field, reading the register first so the rest of it survives.
    // Not atomic: an interrupt landing between the read and the write loses
    // whatever that interrupt changed.
    //
    // A set force_zero_mask bit reads back as 1, and storing that 1 is what
    // clears it, so it goes out as 0 alongside field_mask. force_one_mask is
    // the mirror: a stored 0 would clear it, so it goes back as a 1.
    __attribute__((always_inline)) void rmw(Value val) const {
        static_assert(acc == Access::RW, "rmw: field is not read-write");
        static_assert(!bit_band,
                      "rmw: field has a bit-band alias; write() is one store");
        const uint32_t encoding = static_cast<uint32_t>(val);
        const uint32_t field_bits = (encoding << shift) & field_mask;
        const uint32_t zeroed = field_mask | force_zero_mask;
        const uint32_t neighbors = (reg() & ~zeroed) | force_one_mask;
        reg() = neighbors | field_bits;
    }
};

#endif // MMIO_HPP
