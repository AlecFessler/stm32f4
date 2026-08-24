#include "board.hpp"
#include "gpio.hpp"
#include "mmio.hpp"
#include "rcc.hpp"
#include "startup.hpp"

int main() {
    rcc_ahb1enr_gpioben.write(rcc::En::enabled);

    gpiob_moder_moder[board::led_green].rmw(gpio::Mode::output);
    gpiob_bsrr_bs[board::led_green].write(gpio::Bs::set);

    gpiob_moder_moder[board::led_blue].rmw(gpio::Mode::output);
    gpiob_bsrr_bs[board::led_blue].write(gpio::Bs::set);

    gpiob_moder_moder[board::led_red].rmw(gpio::Mode::output);
    gpiob_bsrr_bs[board::led_red].write(gpio::Bs::set);

    while (true);
    return 0;
}
