// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// SPI field values, shared by every SPI peripheral
#ifndef STM32_SPI_VALUES_HPP
#define STM32_SPI_VALUES_HPP

#include <cstdint>

namespace spi {
enum class Astrten : uint32_t {
    asyncstartdisabled = 0,
    asyncstartenabled = 1,
};
enum class Bidimode : uint32_t {
    unidirectional = 0,
    bidirectional = 1,
};
enum class Bidioe : uint32_t {
    outputdisabled = 0,
    outputenabled = 1,
};
enum class Br : uint32_t {
    div2 = 0,
    div4 = 1,
    div8 = 2,
    div16 = 3,
    div32 = 4,
    div64 = 5,
    div128 = 6,
    div256 = 7,
};
enum class Bsy : uint32_t {
    notbusy = 0,
    busy = 1,
};
enum class Chlen : uint32_t {
    sixteenbit = 0,
    thirtytwobit = 1,
};
enum class Chside : uint32_t {
    left = 0,
    right = 1,
};
enum class Ckpol : uint32_t {
    idlelow = 0,
    idlehigh = 1,
};
enum class Cpha : uint32_t {
    firstedge = 0,
    secondedge = 1,
};
enum class Cpol : uint32_t {
    idlelow = 0,
    idlehigh = 1,
};
enum class Crcen : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Crcerr : uint32_t {
    match = 0,
    nomatch = 1,
};
enum class Crcnext : uint32_t {
    txbuffer = 0,
    crc = 1,
};
enum class Datlen : uint32_t {
    sixteenbit = 0,
    twentyfourbit = 1,
    thirtytwobit = 2,
};
enum class Dff : uint32_t {
    eightbit = 0,
    sixteenbit = 1,
};
enum class Errie : uint32_t {
    masked = 0,
    notmasked = 1,
};
enum class Fre : uint32_t {
    noerror = 0,
    error = 1,
};
enum class Frf : uint32_t {
    motorola = 0,
    ti = 1,
};
enum class I2scfg : uint32_t {
    slavetx = 0,
    slaverx = 1,
    mastertx = 2,
    masterrx = 3,
};
enum class I2se : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class I2smod : uint32_t {
    spimode = 0,
    i2smode = 1,
};
enum class I2sstd : uint32_t {
    philips = 0,
    msb = 1,
    lsb = 2,
    pcm = 3,
};
enum class Lsbfirst : uint32_t {
    msbfirst = 0,
    lsbfirst = 1,
};
enum class Mckoe : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Modf : uint32_t {
    nofault = 0,
    fault = 1,
};
enum class Mstr : uint32_t {
    slave = 0,
    master = 1,
};
enum class Odd : uint32_t {
    even = 0,
    odd = 1,
};
enum class Ovr : uint32_t {
    nooverrun = 0,
    overrun = 1,
};
enum class Pcmsync : uint32_t {
    short_ = 0,
    long_ = 1,
};
enum class Rxdmaen : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Rxne : uint32_t {
    empty = 0,
    notempty = 1,
};
enum class Rxneie : uint32_t {
    masked = 0,
    notmasked = 1,
};
enum class Rxonly : uint32_t {
    fullduplex = 0,
    outputdisabled = 1,
};
enum class Spe : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Ssi : uint32_t {
    slaveselected = 0,
    slavenotselected = 1,
};
enum class Ssm : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Ssoe : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Tifrfe : uint32_t {
    noerror = 0,
    error = 1,
};
enum class Txdmaen : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Txe : uint32_t {
    notempty = 0,
    empty = 1,
};
enum class Txeie : uint32_t {
    masked = 0,
    notmasked = 1,
};
enum class Udr : uint32_t {
    nounderrun = 0,
    underrun = 1,
};
} // namespace spi

#endif // STM32_SPI_VALUES_HPP
