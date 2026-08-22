MEMORY
{
  flash (rx): ORIGIN = 0x08000000, LENGTH = 2M
  ram (rwx) : ORIGIN = 0x20000000, LENGTH = 192K
  ccm (rw) : ORIGIN = 0x10000000, LENGTH = 64K
}

__rom_start__   = ORIGIN(flash);
__rom_size__    = LENGTH(flash);
__rom_end__    = __rom_start__ + __rom_size__;
__ram_start__   = ORIGIN(ram);
__ram_size__    = LENGTH(ram);
__ram_end__     = __ram_start__ + __ram_size__;
__stack_end__   = __ram_end__;
__stack_size__  = 16K;
__stack_start__ = __stack_end__ - __stack_size__;
__heap_start__  = __bss_end__;
__heap_end__    = __stack_start__;
__ccm_start__   = ORIGIN(ccm);
__ccm_size__    = LENGTH(ccm);
__ccm_end__ = __ccm_start__ + __ccm_size__;
end             = __heap_start__;

ASSERT(__bss_end__ <= __stack_start__, "bss overruns stack")

SECTIONS
{
  .text : {
    KEEP(*(.startup))
    *(.text*)
    *(.rodata*)
    . = ALIGN(4);
    __constructors_start__ = .;
    KEEP(*(SORT_BY_INIT_PRIORITY(.init_array.*)))
    KEEP(*(.init_array))
    __constructors_end__ = .;
  } >flash

  .data : ALIGN(16) {
    __data_start__ = .;
    *(.data*)
    . = ALIGN(4);
    __data_end__ = .;
  } >ram AT > flash

  __data_load_addr__ = LOADADDR(.data);

  .bss (NOLOAD) : ALIGN(16) {
    __bss_start__ = .;
    *(.bss*)
    *(COMMON)
    . = ALIGN(4);
    __bss_end__ = .;
  } >ram
}
