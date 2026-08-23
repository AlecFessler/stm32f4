#ifndef BOARD_HPP
#define BOARD_HPP

#include <cstdint>

namespace board {

// Pin assignments from UM1974 Rev 7 6.5 (NUCLEO-F439ZI)
constexpr uint32_t led_green = 0; // LD1, PB0 (SB120 ON/ SB119 OFF; PA5 if swapped)
constexpr uint32_t led_blue = 7; // LD2, PB7
constexpr uint32_t led_red = 14; // LD3, PB14

}

#endif // BOARD_HPP
