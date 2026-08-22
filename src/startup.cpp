#include <startup.hpp>

extern "C" {
	extern uint32_t __rom_start__;
	extern uint32_t __rom_end__;
	extern uint32_t __ram_start__;
	extern uint32_t __ram_end__;
	extern uint32_t __stack_end__;
	extern uint32_t __stack_start__;
	extern uint32_t __heap_start__;
	extern uint32_t __heap_end__;
	extern uint32_t __data_start__;
	extern uint32_t __data_end__;
	extern uint32_t __data_load_addr__;
	extern uint32_t __bss_start__;
	extern uint32_t __bss_end__;
	extern Constructor __constructors_start__[];
	extern Constructor __constructors_end__[];

	void Reset_Handler(void);
	void Default_Handler(void);

	void NMI_Handler(void) __attribute__((weak, alias("Default_Handler")));
	void HardFault_Handler(void) __attribute__((weak, alias("Default_Handler")));
	void MemManage_Handler(void) __attribute__((weak, alias("Default_Handler")));
	void BusFault_Handler(void) __attribute__((weak, alias("Default_Handler")));
	void UsageFault_Handler(void) __attribute__((weak, alias("Default_Handler")));
	void SVC_Handler(void) __attribute__((weak, alias("Default_Handler")));
	void Debug_Handler(void) __attribute__((weak, alias("Default_Handler")));
	void PendSV_Handler(void) __attribute__((weak, alias("Default_Handler")));
	void SysTick_Handler(void) __attribute__((weak, alias("Default_Handler")));
}

extern "C" void Reset_Handler(void) {
	// copy .data from flash to sram
	uint32_t *src = &__data_load_addr__;
	uint32_t *dst = &__data_start__;
	uint32_t *end = &__data_end__;
	while (dst < end) {
		*dst = *src;
		dst += 1;
		src += 1;
	}
	
	// zero .bss
	dst = &__bss_start__;
	end = &__bss_end__;
	while (dst < end) {
		*dst = 0;
		dst += 1;
	}

	// iterate from __constructors_start__..__constructors_end__ calling each fn ptr
	for (Constructor *cons = __constructors_start__; cons != __constructors_end__; cons += 1) {
		(*cons)();
	}

	main();

	// trap if main ever exits
	while (true);
}

extern "C" void Default_Handler(void) {
	while (true);
}

static constexpr std::array<Handler, 255> build_vector_table() {
	std::array<Handler, 255> table{};
	for (auto& handler : table) {
		handler = Default_Handler;
	}
	table[0] = Reset_Handler;
	table[1] = NMI_Handler;
	table[2] = HardFault_Handler;
	table[3] = MemManage_Handler;
	table[4] = BusFault_Handler;
	table[5] = UsageFault_Handler;
	table[6] = nullptr;
	table[7] = nullptr;
	table[8] = nullptr;
	table[9] = nullptr;
	table[10] = SVC_Handler;
	table[11] = Debug_Handler;
	table[12] = nullptr;
	table[13] = PendSV_Handler;
	table[14] = SysTick_Handler;
	return table;
}

__attribute__((section(".startup"), used, aligned(1024)))
const VectorTable g_vector_table{
	.boot_stack_ptr = reinterpret_cast<uintptr_t>(&__stack_end__),
	.vector_table = build_vector_table(),
};
