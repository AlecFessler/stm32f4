#ifndef MMIO_HPP
#define MMIO_HPP

#include <cstdint>

enum class Access {RW, RO, WO};
template <Access Acc> struct Field {
    uintptr_t addr;
    uint32_t mask;
    uint32_t shift;

    volatile uint32_t& reg() const {return *reinterpret_cast<volatile uint32_t*>(addr);}

    __attribute__((always_inline)) uint32_t read() const {
        static_assert(Acc != Access::WO, "read: register is write-only");
        return (reg() & mask) >> shift;
    }

    __attribute__((always_inline)) void write(uint32_t val) const {
        static_assert(Acc != Access::RO, "write: register is read-only");
        reg() = (val << shift) & mask;
    }

    __attribute__((always_inline)) void rmw(uint32_t val) const {
        static_assert(Acc == Access::RW, "rmw: register is not read-write");
        reg() = (reg() & ~mask) | ((val << shift) & mask);
    }
};

#endif // MMIO_HPP
