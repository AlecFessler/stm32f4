// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// GPIO field values, shared by every GPIO peripheral
#ifndef STM32_GPIO_VALUES_HPP
#define STM32_GPIO_VALUES_HPP

#include <cstdint>

namespace gpio {
enum class Alternatefunction : uint32_t {
    af0 = 0,
    af1 = 1,
    af2 = 2,
    af3 = 3,
    af4 = 4,
    af5 = 5,
    af6 = 6,
    af7 = 7,
    af8 = 8,
    af9 = 9,
    af10 = 10,
    af11 = 11,
    af12 = 12,
    af13 = 13,
    af14 = 14,
    af15 = 15,
};
enum class Br : uint32_t {
    reset = 1,
};
enum class Bs : uint32_t {
    set = 1,
};
enum class Inputdata : uint32_t {
    low = 0,
    high = 1,
};
enum class Lock : uint32_t {
    unlocked = 0,
    locked = 1,
};
enum class Lockkey : uint32_t {
    notactive = 0,
    active = 1,
};
enum class Mode : uint32_t {
    input = 0,
    output = 1,
    alternate = 2,
    analog = 3,
};
enum class Outputdata : uint32_t {
    low = 0,
    high = 1,
};
enum class Outputspeed : uint32_t {
    lowspeed = 0,
    mediumspeed = 1,
    highspeed = 2,
    veryhighspeed = 3,
};
enum class Outputtype : uint32_t {
    pushpull = 0,
    opendrain = 1,
};
enum class Pull : uint32_t {
    floating = 0,
    pullup = 1,
    pulldown = 2,
};
} // namespace gpio

#endif // STM32_GPIO_VALUES_HPP
