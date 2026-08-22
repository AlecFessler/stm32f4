#ifndef STARTUP_HPP
#define STARTUP_HPP

#include <array>
#include <cstdint>

// vector | exception | irq
// initial SP value
// Reset 1
// NMI 2 IRQ -14
// Hard Fault 3 -13
// Memory management fault 4 -12
// Bus fault 5 -11
// Usage fault 6 -10
// Reserved 7-10 -9 - -6
// SVCall 11 -5
// Reserved for Debug 12
// Reserved 13
// PendSV 14 -2
// Systick 15 -1
// IRQ0 16 0
// IRQ1 17 1
// ...
// IRQ239 255 239

using Handler = void (*)();
using Constructor = void (*)();

struct VectorTable {
	uintptr_t boot_stack_ptr;
	std::array<Handler, 255> vector_table;
};

static_assert(sizeof(VectorTable) == 256 * 4, "vector table must be 1KiB");

int main();

#endif // STARTUP_HPP
