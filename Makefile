TARGET := firmware
BUILD := build
SRCDIR := src

CROSS := arm-none-eabi-
CXX := $(CROSS)g++
OBJCOPY := $(CROSS)objcopy
SIZE := $(CROSS)size
GDB := $(CROSS)gdb

CPU := -mcpu=cortex-m4 -mthumb

CXXFLAGS := $(CPU) -std=c++17 -Os -g \
            -ffreestanding -fno-exceptions -fno-rtti \
            -fno-threadsafe-statics -fno-use-cxa-atexit \
            -ffunction-sections -fdata-sections \
            -Wall -Wextra -I$(SRCDIR) -I$(SRCDIR)/do-not-edit -MMD -MP

LDFLAGS := $(CPU) -nostdlib -T linker.ld -Wl,--gc-sections,-Map=$(BUILD)/$(TARGET).map

SRCS := $(wildcard $(SRCDIR)/*.cpp)
OBJS := $(patsubst $(SRCDIR)/%.cpp,$(BUILD)/%.o,$(SRCS))
DEPS := $(OBJS:.o=.d)

ELF := $(BUILD)/$(TARGET).elf
BIN := $(BUILD)/$(TARGET).bin

.PHONY: all clean size disasm flash openocd renode renode-gdb gdb regen regen-check

all: $(BIN) size

$(BUILD):
	mkdir -p $(BUILD)

$(BUILD)/%.o: $(SRCDIR)/%.cpp | $(BUILD)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(ELF): $(OBJS) linker.ld
	$(CXX) $(OBJS) $(LDFLAGS) -o $@

$(BIN): $(ELF)
	$(OBJCOPY) -O binary $< $@

size: $(ELF)
	$(SIZE) $(ELF)

disasm: $(ELF)
	$(CROSS)objdump -d $(ELF) | less

disasm-wsrc: $(ELF)
	$(CROSS)objdump -dS $(ELF) | less

regen:
	python3 tools/svdgen.py

regen-check: regen
	git diff --exit-code -- $(SRCDIR)/do-not-edit

clean:
	rm -rf $(BUILD)

flash: $(BIN)
	st-flash --reset write $(BIN) 0x8000000

openocd:
	openocd -f board/st_nucleo_f4.cfg

renode: $(ELF)
	renode --console renode/blink.resc -e start

renode-gdb: $(ELF)
	renode --console renode/blink.resc -e "machine StartGdbServer 3333"

gdb: $(ELF)
	$(GDB) $(ELF) -ex "target extended-remote :3333"

-include $(DEPS)
