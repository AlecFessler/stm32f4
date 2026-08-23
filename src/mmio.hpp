#ifndef MMIO_HPP
#define MMIO_HPP

#include <cstdint>

enum class Access {RW, RO, WO};
template <Access Acc, class Value = uint32_t> struct Field {
    uintptr_t addr;
    uint32_t mask;
    uint32_t shift;

    volatile uint32_t& reg() const {return *reinterpret_cast<volatile uint32_t*>(addr);}

    __attribute__((always_inline)) Value read() const {
        static_assert(Acc != Access::WO, "read: register is write-only");
        return static_cast<Value>((reg() & mask) >> shift);
    }

    __attribute__((always_inline)) void write(Value val) const {
        static_assert(Acc != Access::RO, "write: register is read-only");
        reg() = (static_cast<uint32_t>(val) << shift) & mask;
    }

    __attribute__((always_inline)) void rmw(Value val) const {
        static_assert(Acc == Access::RW, "rmw: register is not read-write");
        reg() = (reg() & ~mask) | ((static_cast<uint32_t>(val) << shift) & mask);
    }
};

#endif // MMIO_HPP
