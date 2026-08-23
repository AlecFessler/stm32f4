// DO NOT EDIT: PROGRAMATICALLY GENERATED CODE

// DMA peripherals
#ifndef STM32_DMA_HPP
#define STM32_DMA_HPP

#include "dma/dma1.hpp"
#include "dma/dma2.hpp"

namespace dma::cdmeif {
    constexpr uint32_t clear = 1;
}
namespace dma::cfeif {
    constexpr uint32_t clear = 1;
}
namespace dma::chtif {
    constexpr uint32_t clear = 1;
}
namespace dma::circ {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace dma::ct {
    constexpr uint32_t memory0 = 0;
    constexpr uint32_t memory1 = 1;
}
namespace dma::ctcif {
    constexpr uint32_t clear = 1;
}
namespace dma::cteif {
    constexpr uint32_t clear = 1;
}
namespace dma::dbm {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace dma::dir {
    constexpr uint32_t peripheraltomemory = 0;
    constexpr uint32_t memorytoperipheral = 1;
    constexpr uint32_t memorytomemory = 2;
}
namespace dma::dmdis {
    constexpr uint32_t enabled = 0;
    constexpr uint32_t disabled = 1;
}
namespace dma::dmeie {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace dma::dmeif {
    constexpr uint32_t noerror = 0;
    constexpr uint32_t error = 1;
}
namespace dma::en {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace dma::feie {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace dma::feif {
    constexpr uint32_t noerror = 0;
    constexpr uint32_t error = 1;
}
namespace dma::fs {
    constexpr uint32_t quarter1 = 0;
    constexpr uint32_t quarter2 = 1;
    constexpr uint32_t quarter3 = 2;
    constexpr uint32_t quarter4 = 3;
    constexpr uint32_t empty = 4;
    constexpr uint32_t full = 5;
}
namespace dma::fth {
    constexpr uint32_t quarter = 0;
    constexpr uint32_t half = 1;
    constexpr uint32_t threequarters = 2;
    constexpr uint32_t full = 3;
}
namespace dma::htie {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace dma::htif {
    constexpr uint32_t nothalf = 0;
    constexpr uint32_t half = 1;
}
namespace dma::mpburst {
    constexpr uint32_t single = 0;
    constexpr uint32_t incr4 = 1;
    constexpr uint32_t incr8 = 2;
    constexpr uint32_t incr16 = 3;
}
namespace dma::mpinc {
    constexpr uint32_t fixed = 0;
    constexpr uint32_t incremented = 1;
}
namespace dma::mpsize {
    constexpr uint32_t bits8 = 0;
    constexpr uint32_t bits16 = 1;
    constexpr uint32_t bits32 = 2;
}
namespace dma::pfctrl {
    constexpr uint32_t dma = 0;
    constexpr uint32_t peripheral = 1;
}
namespace dma::pincos {
    constexpr uint32_t psize = 0;
    constexpr uint32_t fixed4 = 1;
}
namespace dma::pl {
    constexpr uint32_t low = 0;
    constexpr uint32_t medium = 1;
    constexpr uint32_t high = 2;
    constexpr uint32_t veryhigh = 3;
}
namespace dma::tcie {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace dma::tcif {
    constexpr uint32_t notcomplete = 0;
    constexpr uint32_t complete = 1;
}
namespace dma::teie {
    constexpr uint32_t disabled = 0;
    constexpr uint32_t enabled = 1;
}
namespace dma::teif {
    constexpr uint32_t noerror = 0;
    constexpr uint32_t error = 1;
}

#endif // STM32_DMA_HPP
