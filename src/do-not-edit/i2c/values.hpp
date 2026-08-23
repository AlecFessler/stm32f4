// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// I2C field values, shared by every I2C peripheral
#ifndef STM32_I2C_VALUES_HPP
#define STM32_I2C_VALUES_HPP

#include <cstdint>

namespace i2c {
enum class Ack : uint32_t {
    nak = 0,
    ack = 1,
};
enum class Addmode : uint32_t {
    add7 = 0,
    add10 = 1,
};
enum class Addr : uint32_t {
    notmatch = 0,
    match = 1,
};
enum class Af : uint32_t {
    nofailure = 0,
    failure = 1,
};
enum class Alert : uint32_t {
    release = 0,
    drive = 1,
};
enum class Anoff : uint32_t {
    enabled = 0,
    disabled = 1,
};
enum class Arlo : uint32_t {
    nolost = 0,
    lost = 1,
};
enum class Berr : uint32_t {
    noerror = 0,
    error = 1,
};
enum class Btf : uint32_t {
    notfinished = 0,
    finished = 1,
};
enum class Dmaen : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Dnf : uint32_t {
    nofilter = 0,
    filter1 = 1,
    filter2 = 2,
    filter3 = 3,
    filter4 = 4,
    filter5 = 5,
    filter6 = 6,
    filter7 = 7,
    filter8 = 8,
    filter9 = 9,
    filter10 = 10,
    filter11 = 11,
    filter12 = 12,
    filter13 = 13,
    filter14 = 14,
    filter15 = 15,
};
enum class Duty : uint32_t {
    duty2_1 = 0,
    duty16_9 = 1,
};
enum class Enarp : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Endual : uint32_t {
    single = 0,
    dual = 1,
};
enum class Engc : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Enpec : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class F_s : uint32_t {
    standard = 0,
    fast = 1,
};
enum class Itbufen : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Iterren : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Itevten : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Last : uint32_t {
    notlast = 0,
    last = 1,
};
enum class Nostretch : uint32_t {
    enabled = 0,
    disabled = 1,
};
enum class Ovr : uint32_t {
    nooverrun = 0,
    overrun = 1,
};
enum class Pe : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Pec : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Pecerr : uint32_t {
    noerror = 0,
    error = 1,
};
enum class Pos : uint32_t {
    current = 0,
    next = 1,
};
enum class Rxne : uint32_t {
    empty = 0,
    notempty = 1,
};
enum class Sb : uint32_t {
    nostart = 0,
    start = 1,
};
enum class Smbalert : uint32_t {
    noalert = 0,
    alert = 1,
};
enum class Smbtype : uint32_t {
    device = 0,
    host = 1,
};
enum class Smbus : uint32_t {
    i2c = 0,
    smbus = 1,
};
enum class Start : uint32_t {
    nostart = 0,
    start = 1,
};
enum class Stop : uint32_t {
    nostop = 0,
    stop = 1,
};
enum class Stopf : uint32_t {
    nostop = 0,
    stop = 1,
};
enum class Swrst : uint32_t {
    notreset = 0,
    reset = 1,
};
enum class Timeout : uint32_t {
    notimeout = 0,
    timeout = 1,
};
enum class Txe : uint32_t {
    notempty = 0,
    empty = 1,
};
} // namespace i2c

#endif // STM32_I2C_VALUES_HPP
