#include "board.hpp"
#include "gpio.hpp"
#include "mmio.hpp"
#include "rcc.hpp"
#include "startup.hpp"

int main() {
    rcc_ahb1enr_gpioben.rmw(rcc::en::enabled);

    gpiob_moder_moder[board::led_green].rmw(gpio::mode::output);
    gpiob_bsrr_bs[board::led_green].write(gpio::bs::set);

    gpiob_moder_moder[board::led_blue].rmw(gpio::mode::output);
    gpiob_bsrr_bs[board::led_blue].write(gpio::bs::set);

    gpiob_moder_moder[board::led_red].rmw(gpio::mode::output);
    gpiob_bsrr_bs[board::led_red].write(gpio::bs::set);

    while (true);
    return 0;
}
