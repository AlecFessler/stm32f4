#include "board.hpp"
#include "gpio.hpp"
#include "mmio.hpp"
#include "rcc.hpp"
#include "startup.hpp"

int main() {
    rcc_ahb1enr_gpioben.rmw(1);

    gpiob_moder_moder[board::led_green].rmw(0b01);
    gpiob_bsrr_bs[board::led_green].write(1);

    gpiob_moder_moder[board::led_blue].rmw(0b01);
    gpiob_bsrr_bs[board::led_blue].write(1);

    gpiob_moder_moder[board::led_red].rmw(0b01);
    gpiob_bsrr_bs[board::led_red].write(1);

    while (true);
    return 0;
}
