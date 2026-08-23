// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// DMA field values, shared by every DMA peripheral
#ifndef STM32_DMA_VALUES_HPP
#define STM32_DMA_VALUES_HPP

#include <cstdint>

namespace dma {
enum class Cdmeif : uint32_t {
    clear = 1,
};
enum class Cfeif : uint32_t {
    clear = 1,
};
enum class Chtif : uint32_t {
    clear = 1,
};
enum class Circ : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Ct : uint32_t {
    memory0 = 0,
    memory1 = 1,
};
enum class Ctcif : uint32_t {
    clear = 1,
};
enum class Cteif : uint32_t {
    clear = 1,
};
enum class Dbm : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Dir : uint32_t {
    peripheraltomemory = 0,
    memorytoperipheral = 1,
    memorytomemory = 2,
};
enum class Dmdis : uint32_t {
    enabled = 0,
    disabled = 1,
};
enum class Dmeie : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Dmeif : uint32_t {
    noerror = 0,
    error = 1,
};
enum class En : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Feie : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Feif : uint32_t {
    noerror = 0,
    error = 1,
};
enum class Fs : uint32_t {
    quarter1 = 0,
    quarter2 = 1,
    quarter3 = 2,
    quarter4 = 3,
    empty = 4,
    full = 5,
};
enum class Fth : uint32_t {
    quarter = 0,
    half = 1,
    threequarters = 2,
    full = 3,
};
enum class Htie : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Htif : uint32_t {
    nothalf = 0,
    half = 1,
};
enum class Mpburst : uint32_t {
    single = 0,
    incr4 = 1,
    incr8 = 2,
    incr16 = 3,
};
enum class Mpinc : uint32_t {
    fixed = 0,
    incremented = 1,
};
enum class Mpsize : uint32_t {
    bits8 = 0,
    bits16 = 1,
    bits32 = 2,
};
enum class Pfctrl : uint32_t {
    dma = 0,
    peripheral = 1,
};
enum class Pincos : uint32_t {
    psize = 0,
    fixed4 = 1,
};
enum class Pl : uint32_t {
    low = 0,
    medium = 1,
    high = 2,
    veryhigh = 3,
};
enum class Tcie : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Tcif : uint32_t {
    notcomplete = 0,
    complete = 1,
};
enum class Teie : uint32_t {
    disabled = 0,
    enabled = 1,
};
enum class Teif : uint32_t {
    noerror = 0,
    error = 1,
};
} // namespace dma

#endif // STM32_DMA_VALUES_HPP
