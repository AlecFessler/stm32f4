// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// SPI peripherals
#ifndef STM32_SPI_HPP
#define STM32_SPI_HPP

#include "spi/i2s2ext.hpp"
#include "spi/i2s3ext.hpp"
#include "spi/spi1.hpp"
#include "spi/spi2.hpp"
#include "spi/spi3.hpp"
#include "spi/spi4.hpp"
#include "spi/spi5.hpp"
#include "spi/spi6.hpp"

namespace spi::astrten {
    constexpr uint32_t asyncstartdisabled = 0;
    constexpr uint32_t asyncstartenabled = 1;
}
namespace spi::bidimode {
    constexpr uint32_t unidirectional = 0;
    constexpr uint32_t bidirectional = 1;
}
namespace spi::bidioe {
    constexpr uint32_t outputdisabled = 0;
    constexpr uint32_t outputenabled = 1;
}
namespace spi::br {
    constexpr uint32_t div2 = 0;
    constexpr uint32_t div4 = 1;
    constexpr uint32_t div8 = 2;
    constexpr uint32_t div16 = 3;
    constexpr uint32_t div32 = 4;
    constexpr uint32_t div64 = 5;
    constexpr uint32_t div128 = 6;
    constexpr uint32_t div256 = 7;
}
namespace spi::bsy {
    constexpr uint32_t notbusy = 0;
    constexpr uint32_t busy = 1;
}
namespace spi::chlen {
    constexpr uint32_t sixteenbit = 0;
    constexpr uint32_t thirtytwobit = 1;
}
namespace spi::chside {
    constexpr uint32_t left = 0;
    constexpr uint32_t right = 1;
}
namespace spi::ckpol {
    constexpr uint32_t idlelow = 0;
    constexpr uint32_t idlehigh = 1;
}
namespace spi::cpha {
    constexpr uint32_t firstedge = 0;
    constexpr uint32_t secondedge = 1;
}
namespace spi::cpol {
    constexpr uint32_t idlelow = 0;
    constexpr uint32_t idlehigh = 1;
}
namespace spi::crcen {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace spi::crcerr {
    constexpr uint32_t match = 0;
    constexpr uint32_t nomatch = 1;
}
namespace spi::crcnext {
    constexpr uint32_t txbuffer = 0;
    constexpr uint32_t crc = 1;
}
namespace spi::datlen {
    constexpr uint32_t sixteenbit = 0;
    constexpr uint32_t twentyfourbit = 1;
    constexpr uint32_t thirtytwobit = 2;
}
namespace spi::dff {
    constexpr uint32_t eightbit = 0;
    constexpr uint32_t sixteenbit = 1;
}
namespace spi::errie {
    constexpr uint32_t masked = 0;
    constexpr uint32_t notmasked = 1;
}
namespace spi::fre {
    constexpr uint32_t noerror = 0;
    constexpr uint32_t error = 1;
}
namespace spi::frf {
    constexpr uint32_t motorola = 0;
    constexpr uint32_t ti = 1;
}
namespace spi::i2scfg {
    constexpr uint32_t slavetx = 0;
    constexpr uint32_t slaverx = 1;
    constexpr uint32_t mastertx = 2;
    constexpr uint32_t masterrx = 3;
}
namespace spi::i2se {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace spi::i2smod {
    constexpr uint32_t spimode = 0;
    constexpr uint32_t i2smode = 1;
}
namespace spi::i2sstd {
    constexpr uint32_t philips = 0;
    constexpr uint32_t msb = 1;
    constexpr uint32_t lsb = 2;
    constexpr uint32_t pcm = 3;
}
namespace spi::lsbfirst {
    constexpr uint32_t msbfirst = 0;
    constexpr uint32_t lsbfirst = 1;
}
namespace spi::mckoe {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace spi::modf {
    constexpr uint32_t nofault = 0;
    constexpr uint32_t fault = 1;
}
namespace spi::mstr {
    constexpr uint32_t slave = 0;
    constexpr uint32_t master = 1;
}
namespace spi::odd {
    constexpr uint32_t even = 0;
    constexpr uint32_t odd = 1;
}
namespace spi::ovr {
    constexpr uint32_t nooverrun = 0;
    constexpr uint32_t overrun = 1;
}
namespace spi::pcmsync {
    constexpr uint32_t short_ = 0;
    constexpr uint32_t long_ = 1;
}
namespace spi::rxdmaen {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace spi::rxne {
    constexpr uint32_t empty = 0;
    constexpr uint32_t notempty = 1;
}
namespace spi::rxneie {
    constexpr uint32_t masked = 0;
    constexpr uint32_t notmasked = 1;
}
namespace spi::rxonly {
    constexpr uint32_t fullduplex = 0;
    constexpr uint32_t outputdisabled = 1;
}
namespace spi::spe {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace spi::ssi {
    constexpr uint32_t slaveselected = 0;
    constexpr uint32_t slavenotselected = 1;
}
namespace spi::ssm {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace spi::ssoe {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace spi::tifrfe {
    constexpr uint32_t noerror = 0;
    constexpr uint32_t error = 1;
}
namespace spi::txdmaen {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace spi::txe {
    constexpr uint32_t notempty = 0;
    constexpr uint32_t empty = 1;
}
namespace spi::txeie {
    constexpr uint32_t masked = 0;
    constexpr uint32_t notmasked = 1;
}
namespace spi::udr {
    constexpr uint32_t nounderrun = 0;
    constexpr uint32_t underrun = 1;
}

#endif // STM32_SPI_HPP
