#ifndef MMIO_HPP
#define MMIO_HPP

#include <cstdint>

struct RegField {
    uint32_t mask;
    uint32_t shift;
};

constexpr uint32_t bsrr_set(uint32_t bit) {
    return 1u << bit;
}

constexpr uint32_t bsrr_reset(uint32_t bit) {
    return 1u << (bit + 16);
}

inline uint32_t read_reg(volatile uint32_t& reg, RegField field) {
    return (reg & field.mask) >> field.shift;
}

inline void write_reg(volatile uint32_t& reg, uint32_t val) {
    reg = val;
}

inline void modify_reg(volatile uint32_t& reg, RegField field, uint32_t val) {
    reg = (reg & ~field.mask) | ((val << field.shift) & field.mask);
}

#endif // MMIO_HPP
