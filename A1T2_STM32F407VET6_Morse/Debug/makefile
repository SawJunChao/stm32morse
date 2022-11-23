################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Drivers/STM32F4xx_HAL_Driver/Src/subdir.mk
-include Core/Startup/subdir.mk
-include Core/Src/subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

OPTIONAL_TOOL_DEPS := \
$(wildcard ../makefile.defs) \
$(wildcard ../makefile.init) \
$(wildcard ../makefile.targets) \


BUILD_ARTIFACT_NAME := A1T2_STM32F407VET6_Morse
BUILD_ARTIFACT_EXTENSION := elf
BUILD_ARTIFACT_PREFIX :=
BUILD_ARTIFACT := $(BUILD_ARTIFACT_PREFIX)$(BUILD_ARTIFACT_NAME)$(if $(BUILD_ARTIFACT_EXTENSION),.$(BUILD_ARTIFACT_EXTENSION),)

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
A1T2_STM32F407VET6_Morse.elf \

MAP_FILES += \
A1T2_STM32F407VET6_Morse.map \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
A1T2_STM32F407VET6_Morse.list \

OBJCOPY_HEX += \
A1T2_STM32F407VET6_Morse.hex \

OBJCOPY_BIN += \
A1T2_STM32F407VET6_Morse.bin \


# All Target
all: main-build

# Main-build Target
main-build: A1T2_STM32F407VET6_Morse.elf secondary-outputs

# Tool invocations
A1T2_STM32F407VET6_Morse.elf A1T2_STM32F407VET6_Morse.map: $(OBJS) $(USER_OBJS) D:\UTM\Sem1\MKEL1123-05\ ADVANCED\ MICROPROCESSOR\ SYSTEM\STM32\A1T2_STM32F407VET6_Morse\STM32F407VETX_FLASH.ld makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-gcc -o "A1T2_STM32F407VET6_Morse.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m4 -T"D:\UTM\Sem1\MKEL1123-05 ADVANCED MICROPROCESSOR SYSTEM\STM32\A1T2_STM32F407VET6_Morse\STM32F407VETX_FLASH.ld" --specs=nosys.specs -Wl,-Map="A1T2_STM32F407VET6_Morse.map" -Wl,--gc-sections -static --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

A1T2_STM32F407VET6_Morse.list: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "A1T2_STM32F407VET6_Morse.list"
	@echo 'Finished building: $@'
	@echo ' '

A1T2_STM32F407VET6_Morse.hex: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objcopy  -O ihex $(EXECUTABLES) "A1T2_STM32F407VET6_Morse.hex"
	@echo 'Finished building: $@'
	@echo ' '

A1T2_STM32F407VET6_Morse.bin: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "A1T2_STM32F407VET6_Morse.bin"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) A1T2_STM32F407VET6_Morse.bin A1T2_STM32F407VET6_Morse.elf A1T2_STM32F407VET6_Morse.hex A1T2_STM32F407VET6_Morse.list A1T2_STM32F407VET6_Morse.map default.size.stdout
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_HEX) $(OBJCOPY_BIN)

fail-specified-linker-script-missing:
	@echo 'Error: Cannot find the specified linker script. Check the linker settings in the build configuration.'
	@exit 2

warn-no-linker-script-specified:
	@echo 'Warning: No linker script specified. Check the linker settings in the build configuration.'

.PHONY: all clean dependents main-build fail-specified-linker-script-missing warn-no-linker-script-specified

-include ../makefile.targets
