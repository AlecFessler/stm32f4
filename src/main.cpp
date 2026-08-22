#include <gpio.hpp>
#include <startup.hpp>

constexpr uint32_t LED1_GREEN = 0; // PB0
constexpr uint32_t LED2_BLUE = 7; // PB7
constexpr uint32_t LED3_RED = 14; // PB14

int main() {
    modify_reg(rcc().ahb1enr, fieldw1(AHB1ENR_GPIOB_ENABLE), 1);
    modify_reg(gpiob().moder, fieldw2(LED1_GREEN), 0b01);
    write_reg(gpiob().bsrr, bsrr_set(LED1_GREEN));

    modify_reg(gpiob().moder, fieldw2(LED2_BLUE), 0b01);
    write_reg(gpiob().bsrr, bsrr_set(LED2_BLUE));

    modify_reg(gpiob().moder, fieldw2(LED3_RED), 0b01);
    write_reg(gpiob().bsrr, bsrr_set(LED3_RED));

    while (true);
    return 0;
}
