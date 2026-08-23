// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// CAN field values, shared by every CAN peripheral
#ifndef STM32_CAN_VALUES_HPP
#define STM32_CAN_VALUES_HPP

#include <cstdint>

namespace can {
enum class Bofie : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Epvie : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Errie : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Ewgie : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Ffie0 : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Ffie1 : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Fmpie0 : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Fmpie1 : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Fovie0 : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Fovie1 : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Fovr : uint32_t {
    nooverrun = 0,
    overrun = 1,
    clear = 1,
};
enum class Full : uint32_t {
    notfull = 0,
    full = 1,
    clear = 1,
};
enum class Ide : uint32_t {
    standard = 0,
    extended = 1,
};
enum class Lbkm : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Lec : uint32_t {
    noerror = 0,
    stuff = 1,
    form = 2,
    ack = 3,
    bitrecessive = 4,
    bitdominant = 5,
    crc = 6,
    custom = 7,
};
enum class Lecie : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Rfom : uint32_t {
    release = 1,
};
enum class Rtr : uint32_t {
    data = 0,
    remote = 1,
};
enum class Silm : uint32_t {
    normal = 0,
    silent = 1,
};
enum class Slkie : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Tmeie : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Wkuie : uint32_t {
    disabled = 0,
    enabled = 1,
};
} // namespace can

#endif // STM32_CAN_VALUES_HPP
