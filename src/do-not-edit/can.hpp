// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// CAN peripherals
#ifndef STM32_CAN_HPP
#define STM32_CAN_HPP

#include "can/can1.hpp"
#include "can/can2.hpp"

namespace can::bofie {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace can::epvie {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace can::errie {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace can::ewgie {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace can::ffie0 {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace can::ffie1 {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace can::fmpie0 {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace can::fmpie1 {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace can::fovie0 {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace can::fovie1 {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace can::fovr {
    constexpr uint32_t nooverrun = 0;
    constexpr uint32_t overrun = 1;
    constexpr uint32_t clear = 1;
}
namespace can::full {
    constexpr uint32_t notfull = 0;
    constexpr uint32_t full = 1;
    constexpr uint32_t clear = 1;
}
namespace can::ide {
    constexpr uint32_t standard = 0;
    constexpr uint32_t extended = 1;
}
namespace can::lbkm {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace can::lec {
    constexpr uint32_t noerror = 0;
    constexpr uint32_t stuff = 1;
    constexpr uint32_t form = 2;
    constexpr uint32_t ack = 3;
    constexpr uint32_t bitrecessive = 4;
    constexpr uint32_t bitdominant = 5;
    constexpr uint32_t crc = 6;
    constexpr uint32_t custom = 7;
}
namespace can::lecie {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace can::rfom {
    constexpr uint32_t release = 1;
}
namespace can::rtr {
    constexpr uint32_t data = 0;
    constexpr uint32_t remote = 1;
}
namespace can::silm {
    constexpr uint32_t normal = 0;
    constexpr uint32_t silent = 1;
}
namespace can::slkie {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace can::tmeie {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace can::wkuie {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}

#endif // STM32_CAN_HPP
