// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// I2C peripherals
#ifndef STM32_I2C_HPP
#define STM32_I2C_HPP

#include "i2c/i2c1.hpp"
#include "i2c/i2c2.hpp"
#include "i2c/i2c3.hpp"

namespace i2c::ack {
    constexpr uint32_t nak = 0;
    constexpr uint32_t ack = 1;
}
namespace i2c::addmode {
    constexpr uint32_t add7 = 0;
    constexpr uint32_t add10 = 1;
}
namespace i2c::addr {
    constexpr uint32_t notmatch = 0;
    constexpr uint32_t match = 1;
}
namespace i2c::af {
    constexpr uint32_t nofailure = 0;
    constexpr uint32_t failure = 1;
}
namespace i2c::alert {
    constexpr uint32_t release = 0;
    constexpr uint32_t drive = 1;
}
namespace i2c::anoff {
    constexpr uint32_t enabled = 0;
    constexpr uint32_t disabled = 1;
}
namespace i2c::arlo {
    constexpr uint32_t nolost = 0;
    constexpr uint32_t lost = 1;
}
namespace i2c::berr {
    constexpr uint32_t noerror = 0;
    constexpr uint32_t error = 1;
}
namespace i2c::btf {
    constexpr uint32_t notfinished = 0;
    constexpr uint32_t finished = 1;
}
namespace i2c::dmaen {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace i2c::dnf {
    constexpr uint32_t nofilter = 0;
    constexpr uint32_t filter1 = 1;
    constexpr uint32_t filter2 = 2;
    constexpr uint32_t filter3 = 3;
    constexpr uint32_t filter4 = 4;
    constexpr uint32_t filter5 = 5;
    constexpr uint32_t filter6 = 6;
    constexpr uint32_t filter7 = 7;
    constexpr uint32_t filter8 = 8;
    constexpr uint32_t filter9 = 9;
    constexpr uint32_t filter10 = 10;
    constexpr uint32_t filter11 = 11;
    constexpr uint32_t filter12 = 12;
    constexpr uint32_t filter13 = 13;
    constexpr uint32_t filter14 = 14;
    constexpr uint32_t filter15 = 15;
}
namespace i2c::duty {
    constexpr uint32_t duty2_1 = 0;
    constexpr uint32_t duty16_9 = 1;
}
namespace i2c::enarp {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace i2c::endual {
    constexpr uint32_t single = 0;
    constexpr uint32_t dual = 1;
}
namespace i2c::engc {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace i2c::enpec {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace i2c::f_s {
    constexpr uint32_t standard = 0;
    constexpr uint32_t fast = 1;
}
namespace i2c::itbufen {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace i2c::iterren {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace i2c::itevten {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace i2c::last {
    constexpr uint32_t notlast = 0;
    constexpr uint32_t last = 1;
}
namespace i2c::nostretch {
    constexpr uint32_t enabled = 0;
    constexpr uint32_t disabled = 1;
}
namespace i2c::ovr {
    constexpr uint32_t nooverrun = 0;
    constexpr uint32_t overrun = 1;
}
namespace i2c::pe {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace i2c::pec {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace i2c::pecerr {
    constexpr uint32_t noerror = 0;
    constexpr uint32_t error = 1;
}
namespace i2c::pos {
    constexpr uint32_t current = 0;
    constexpr uint32_t next = 1;
}
namespace i2c::rxne {
    constexpr uint32_t empty = 0;
    constexpr uint32_t notempty = 1;
}
namespace i2c::sb {
    constexpr uint32_t nostart = 0;
    constexpr uint32_t start = 1;
}
namespace i2c::smbalert {
    constexpr uint32_t noalert = 0;
    constexpr uint32_t alert = 1;
}
namespace i2c::smbtype {
    constexpr uint32_t device = 0;
    constexpr uint32_t host = 1;
}
namespace i2c::smbus {
    constexpr uint32_t i2c = 0;
    constexpr uint32_t smbus = 1;
}
namespace i2c::start {
    constexpr uint32_t nostart = 0;
    constexpr uint32_t start = 1;
}
namespace i2c::stop {
    constexpr uint32_t nostop = 0;
    constexpr uint32_t stop = 1;
}
namespace i2c::stopf {
    constexpr uint32_t nostop = 0;
    constexpr uint32_t stop = 1;
}
namespace i2c::swrst {
    constexpr uint32_t notreset = 0;
    constexpr uint32_t reset = 1;
}
namespace i2c::timeout {
    constexpr uint32_t notimeout = 0;
    constexpr uint32_t timeout = 1;
}
namespace i2c::txe {
    constexpr uint32_t notempty = 0;
    constexpr uint32_t empty = 1;
}

#endif // STM32_I2C_HPP
