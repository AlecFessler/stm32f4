#include <mmio.hpp>
#include <startup.hpp>

#include <gpiob.hpp>
#include <rcc.hpp>

int main() {
    modify_reg(rcc().ahb1enr, rcc_ahb1enr_gpioben, 1);
    modify_reg(gpiob().moder, gpiob_moder_moder0, 0b01);
    write_reg(gpiob().bsrr, gpiob_bsrr_bs0.mask);

    modify_reg(gpiob().moder, gpiob_moder_moder7, 0b01);
    write_reg(gpiob().bsrr, gpiob_bsrr_bs7.mask);

    modify_reg(gpiob().moder, gpiob_moder_moder14, 0b01);
    write_reg(gpiob().bsrr, gpiob_bsrr_bs14.mask);

    while (true);
    return 0;
}
