// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// GPIO peripherals
#ifndef STM32_GPIO_HPP
#define STM32_GPIO_HPP

#include "gpio/gpioa.hpp"
#include "gpio/gpiob.hpp"
#include "gpio/gpioc.hpp"
#include "gpio/gpiod.hpp"
#include "gpio/gpioe.hpp"
#include "gpio/gpiof.hpp"
#include "gpio/gpiog.hpp"
#include "gpio/gpioh.hpp"
#include "gpio/gpioi.hpp"
#include "gpio/gpioj.hpp"
#include "gpio/gpiok.hpp"

namespace gpio::alternatefunction {
    constexpr uint32_t af0 = 0;
    constexpr uint32_t af1 = 1;
    constexpr uint32_t af2 = 2;
    constexpr uint32_t af3 = 3;
    constexpr uint32_t af4 = 4;
    constexpr uint32_t af5 = 5;
    constexpr uint32_t af6 = 6;
    constexpr uint32_t af7 = 7;
    constexpr uint32_t af8 = 8;
    constexpr uint32_t af9 = 9;
    constexpr uint32_t af10 = 10;
    constexpr uint32_t af11 = 11;
    constexpr uint32_t af12 = 12;
    constexpr uint32_t af13 = 13;
    constexpr uint32_t af14 = 14;
    constexpr uint32_t af15 = 15;
}
namespace gpio::br {
    constexpr uint32_t reset = 1;
}
namespace gpio::bs {
    constexpr uint32_t set = 1;
}
namespace gpio::inputdata {
    constexpr uint32_t low = 0;
    constexpr uint32_t high = 1;
}
namespace gpio::lock {
    constexpr uint32_t unlocked = 0;
    constexpr uint32_t locked = 1;
}
namespace gpio::lockkey {
    constexpr uint32_t notactive = 0;
    constexpr uint32_t active = 1;
}
namespace gpio::mode {
    constexpr uint32_t input = 0;
    constexpr uint32_t output = 1;
    constexpr uint32_t alternate = 2;
    constexpr uint32_t analog = 3;
}
namespace gpio::outputdata {
    constexpr uint32_t low = 0;
    constexpr uint32_t high = 1;
}
namespace gpio::outputspeed {
    constexpr uint32_t lowspeed = 0;
    constexpr uint32_t mediumspeed = 1;
    constexpr uint32_t highspeed = 2;
    constexpr uint32_t veryhighspeed = 3;
}
namespace gpio::outputtype {
    constexpr uint32_t pushpull = 0;
    constexpr uint32_t opendrain = 1;
}
namespace gpio::pull {
    constexpr uint32_t floating = 0;
    constexpr uint32_t pullup = 1;
    constexpr uint32_t pulldown = 2;
}

#endif // STM32_GPIO_HPP
