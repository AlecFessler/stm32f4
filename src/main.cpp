#include <mmio.hpp>
#include <startup.hpp>

#include <gpiob.hpp>
#include <rcc.hpp>

int main() {
    rcc_ahb1enr_gpioben.rmw(1);

    gpiob_moder_moder0.rmw(0b01);
    gpiob_bsrr_bs0.write(1);

    gpiob_moder_moder7.rmw(0b01);
    gpiob_bsrr_bs7.write(1);

    gpiob_moder_moder14.rmw(0b01);
    gpiob_bsrr_bs14.write(1);

    while (true);
    return 0;
}
