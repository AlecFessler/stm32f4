#include <startup.hpp>

// User LD1: a green user LED is connected to the STM32 I/O PB0 (SB120 ON and SB119 OFF) or PA5 (SB119 ON and SB120 OFF) corresponding to the ST Zia D13
// User LD2: a blue user LED is connected to PB7
// User LD3: a red user LED is connected to PB14

// RCC AHB1 perhipheral clock register (RCC_AHB1ENR) RM0090 p180

// GPIO port mode register (GPIOx_MODER) RM0090 p281
// GPIO output data register (GPIOx_ODR) RM0090 p283
// GPIO bit set/reset register (GPIOx_BSSR) RM0090 p284

int main() {
	return 0;
}
