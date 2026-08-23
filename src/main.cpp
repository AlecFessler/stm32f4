#include <mmio.hpp>
#include <startup.hpp>

#include <gpiob.hpp>
#include <rcc.hpp>

int main() {
    rcc_ahb1enr_gpioben.rmw(1);

    gpiob_moder_moder[0].rmw(0b01);
    gpiob_bsrr_bs[0].write(1);

    gpiob_moder_moder[7].rmw(0b01);
    gpiob_bsrr_bs[7].write(1);

    gpiob_moder_moder[14].rmw(0b01);
    gpiob_bsrr_bs[14].write(1);

    while (true);
    return 0;
}
