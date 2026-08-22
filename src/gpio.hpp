#ifndef GPIO_HPP
#define GPIO_HPP

#include <cstddef>
#include <cstdint>

constexpr uintptr_t rcc_base = 0x40023800;

constexpr uintptr_t gpioa_base = 0x40020000;
constexpr uintptr_t gpiob_base = 0x40020400;
constexpr uintptr_t gpioc_base = 0x40020800;
constexpr uintptr_t gpiod_base = 0x40020C00;
constexpr uintptr_t gpioe_base = 0x40021000;
constexpr uintptr_t gpiof_base = 0x40021400;
constexpr uintptr_t gpiog_base = 0x40021800;
constexpr uintptr_t gpioh_base = 0x40021C00;
constexpr uintptr_t gpioi_base = 0x40022000;
constexpr uintptr_t gpioj_base = 0x40022400;
constexpr uintptr_t gpiok_base = 0x40022800;

struct RccRegs {
    volatile uint32_t cr;
    volatile uint32_t pllcfgr;
    volatile uint32_t cfgr;
    volatile uint32_t cir;
    volatile uint32_t ahb1rstr;
    volatile uint32_t ahb2rstr;
    volatile uint32_t ahb3rstr;
    volatile uint32_t _reserved0;
    volatile uint32_t apb1rstr;
    volatile uint32_t apb2rstr;
    volatile uint32_t _reserved1;
    volatile uint32_t _reserved2;
    volatile uint32_t ahb1enr;
    volatile uint32_t ahb2enr;
    volatile uint32_t ahb3enr;
    volatile uint32_t _reserved3;
};
static_assert(offsetof(RccRegs, ahb1enr) == 0x30);

constexpr uint32_t AHB1ENR_GPIOA_ENABLE = 0;
constexpr uint32_t AHB1ENR_GPIOB_ENABLE = 1;
constexpr uint32_t AHB1ENR_GPIOC_ENABLE = 2;
constexpr uint32_t AHB1ENR_GPIOD_ENABLE = 3;
constexpr uint32_t AHB1ENR_GPIOE_ENABLE = 4;
constexpr uint32_t AHB1ENR_GPIOF_ENABLE = 5;
constexpr uint32_t AHB1ENR_GPIOG_ENABLE = 6;
constexpr uint32_t AHB1ENR_GPIOH_ENABLE = 7;
constexpr uint32_t AHB1ENR_GPIOI_ENABLE = 8;
constexpr uint32_t AHB1ENR_GPIOJ_ENABLE = 9;
constexpr uint32_t AHB1ENR_GPIOK_ENABLE = 10;

struct GpioRegs {
    volatile uint32_t moder;
    volatile uint32_t otyper;
    volatile uint32_t ospeedr;
    volatile uint32_t pupdr;
    volatile uint32_t idr;
    volatile uint32_t odr;
    volatile uint32_t bsrr;
    volatile uint32_t lckr;
    volatile uint32_t afrl;
    volatile uint32_t afrh;
};
static_assert(offsetof(GpioRegs, bsrr) == 0x18);
static_assert(sizeof(GpioRegs) == 0x28);

inline RccRegs& rcc() {return *reinterpret_cast<RccRegs*>(rcc_base);}

inline GpioRegs& gpioa() {return *reinterpret_cast<GpioRegs*>(gpioa_base);}
inline GpioRegs& gpiob() {return *reinterpret_cast<GpioRegs*>(gpiob_base);}
inline GpioRegs& gpioc() {return *reinterpret_cast<GpioRegs*>(gpioc_base);}
inline GpioRegs& gpiod() {return *reinterpret_cast<GpioRegs*>(gpiod_base);}
inline GpioRegs& gpioe() {return *reinterpret_cast<GpioRegs*>(gpioe_base);}
inline GpioRegs& gpiof() {return *reinterpret_cast<GpioRegs*>(gpiof_base);}
inline GpioRegs& gpiog() {return *reinterpret_cast<GpioRegs*>(gpiog_base);}
inline GpioRegs& gpioh() {return *reinterpret_cast<GpioRegs*>(gpioh_base);}
inline GpioRegs& gpioi() {return *reinterpret_cast<GpioRegs*>(gpioi_base);}
inline GpioRegs& gpioj() {return *reinterpret_cast<GpioRegs*>(gpioj_base);}
inline GpioRegs& gpiok() {return *reinterpret_cast<GpioRegs*>(gpiok_base);}

struct RegField {
    uint32_t mask;
    uint32_t shift;
};

constexpr RegField fieldw1(uint32_t bit) {
    return RegField{
        .mask = 1u << bit,
        .shift = bit,
    };
}

constexpr RegField fieldw2(uint32_t bits) {
    const uint32_t shift = 2 * bits;
    return RegField{
        .mask = 0b11u << shift,
        .shift = shift,
    };
}

constexpr RegField fieldw4(uint32_t bits) {
    const uint32_t shift = 4 * (bits % 8);
    return RegField{
        .mask = 0b1111u << shift,
        .shift = shift,
    };
}

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

#endif // GPIO_HPP
