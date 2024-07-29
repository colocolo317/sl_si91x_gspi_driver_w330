################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include wiseconnect3_sdk_3.3.0/components/device/silabs/si91x/mcu/drivers/unified_api/src/subdir.mk
-include wiseconnect3_sdk_3.3.0/components/device/silabs/si91x/mcu/drivers/systemlevel/src/subdir.mk
-include wiseconnect3_sdk_3.3.0/components/device/silabs/si91x/mcu/drivers/service/clock_manager/src/subdir.mk
-include wiseconnect3_sdk_3.3.0/components/device/silabs/si91x/mcu/drivers/peripheral_drivers/src/subdir.mk
-include wiseconnect3_sdk_3.3.0/components/device/silabs/si91x/mcu/drivers/cmsis_driver/subdir.mk
-include wiseconnect3_sdk_3.3.0/components/device/silabs/si91x/mcu/core/config/src/subdir.mk
-include wiseconnect3_sdk_3.3.0/components/device/silabs/si91x/mcu/core/common/src/subdir.mk
-include wiseconnect3_sdk_3.3.0/components/device/silabs/si91x/mcu/core/chip/src/iPMU_prog/iPMU_dotc/subdir.mk
-include wiseconnect3_sdk_3.3.0/components/device/silabs/si91x/mcu/core/chip/src/subdir.mk
-include wiseconnect3_sdk_3.3.0/components/board/silabs/src/subdir.mk
-include simplicity_sdk_2024.6.0/platform/service/system/src/subdir.mk
-include simplicity_sdk_2024.6.0/platform/common/src/subdir.mk
-include autogen/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

OPTIONAL_TOOL_DEPS := \
$(wildcard ../makefile.defs) \
$(wildcard ../makefile.init) \
$(wildcard ../makefile.targets) \


BUILD_ARTIFACT_NAME := sl_si91x_gspi_w330
BUILD_ARTIFACT_EXTENSION := axf
BUILD_ARTIFACT_PREFIX :=
BUILD_ARTIFACT := $(BUILD_ARTIFACT_PREFIX)$(BUILD_ARTIFACT_NAME)$(if $(BUILD_ARTIFACT_EXTENSION),.$(BUILD_ARTIFACT_EXTENSION),)

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all:
	+@$(MAKE) --no-print-directory main-build && $(MAKE) --no-print-directory post-build

# Main-build Target
main-build: sl_si91x_gspi_w330.axf

# Tool invocations
sl_si91x_gspi_w330.axf: $(OBJS) $(USER_OBJS) makefile objects.mk $(OPTIONAL_TOOL_DEPS)
	@echo 'Building target: $@'
	@echo 'Invoking: GNU ARM C Linker'
	arm-none-eabi-gcc -g -gdwarf-2 -mcpu=cortex-m4 -mthumb -T "C:\Users\ch.wang\SimplicityStudio\v5_workspace\sl_si91x_gspi_w330\autogen\linkerfile_SoC.ld" -u _printf_float -Wl,--no-warn-rwx-segments -Xlinker --gc-sections -Xlinker -Map="sl_si91x_gspi_w330.map" -mfpu=fpv4-sp-d16 -mfloat-abi=softfp --specs=nano.specs -o sl_si91x_gspi_w330.axf -Wl,--start-group "./ampak_gspi_util.o" "./app.o" "./main.o" "./autogen/sl_event_handler.o" "./autogen/sl_ulp_timer_init.o" "./simplicity_sdk_2024.6.0/platform/common/src/sl_assert.o" "./simplicity_sdk_2024.6.0/platform/service/system/src/sl_system_init.o" "./simplicity_sdk_2024.6.0/platform/service/system/src/sl_system_process_action.o" "./wiseconnect3_sdk_3.3.0/components/board/silabs/src/rsi_board.o" "./wiseconnect3_sdk_3.3.0/components/device/silabs/si91x/mcu/core/chip/src/iPMU_prog/iPMU_dotc/ipmu_apis.o" "./wiseconnect3_sdk_3.3.0/components/device/silabs/si91x/mcu/core/chip/src/iPMU_prog/iPMU_dotc/rsi_system_config_917.o" "./wiseconnect3_sdk_3.3.0/components/device/silabs/si91x/mcu/core/chip/src/rsi_deepsleep_soc.o" "./wiseconnect3_sdk_3.3.0/components/device/silabs/si91x/mcu/core/chip/src/rsi_ps_ram_func.o" "./wiseconnect3_sdk_3.3.0/components/device/silabs/si91x/mcu/core/chip/src/startup_si91x.o" "./wiseconnect3_sdk_3.3.0/components/device/silabs/si91x/mcu/core/chip/src/system_si91x.o" "./wiseconnect3_sdk_3.3.0/components/device/silabs/si91x/mcu/core/common/src/rsi_debug.o" "./wiseconnect3_sdk_3.3.0/components/device/silabs/si91x/mcu/core/common/src/sl_si91x_stack_object_declare.o" "./wiseconnect3_sdk_3.3.0/components/device/silabs/si91x/mcu/core/common/src/syscalls.o" "./wiseconnect3_sdk_3.3.0/components/device/silabs/si91x/mcu/core/config/src/rsi_nvic_priorities_config.o" "./wiseconnect3_sdk_3.3.0/components/device/silabs/si91x/mcu/drivers/cmsis_driver/GSPI.o" "./wiseconnect3_sdk_3.3.0/components/device/silabs/si91x/mcu/drivers/cmsis_driver/UDMA.o" "./wiseconnect3_sdk_3.3.0/components/device/silabs/si91x/mcu/drivers/cmsis_driver/USART.o" "./wiseconnect3_sdk_3.3.0/components/device/silabs/si91x/mcu/drivers/peripheral_drivers/src/clock_update.o" "./wiseconnect3_sdk_3.3.0/components/device/silabs/si91x/mcu/drivers/peripheral_drivers/src/rsi_crc.o" "./wiseconnect3_sdk_3.3.0/components/device/silabs/si91x/mcu/drivers/peripheral_drivers/src/rsi_egpio.o" "./wiseconnect3_sdk_3.3.0/components/device/silabs/si91x/mcu/drivers/peripheral_drivers/src/rsi_gspi.o" "./wiseconnect3_sdk_3.3.0/components/device/silabs/si91x/mcu/drivers/peripheral_drivers/src/rsi_timers.o" "./wiseconnect3_sdk_3.3.0/components/device/silabs/si91x/mcu/drivers/peripheral_drivers/src/rsi_udma.o" "./wiseconnect3_sdk_3.3.0/components/device/silabs/si91x/mcu/drivers/peripheral_drivers/src/rsi_udma_wrapper.o" "./wiseconnect3_sdk_3.3.0/components/device/silabs/si91x/mcu/drivers/peripheral_drivers/src/rsi_usart.o" "./wiseconnect3_sdk_3.3.0/components/device/silabs/si91x/mcu/drivers/service/clock_manager/src/sl_si91x_clock_manager.o" "./wiseconnect3_sdk_3.3.0/components/device/silabs/si91x/mcu/drivers/systemlevel/src/rsi_ipmu.o" "./wiseconnect3_sdk_3.3.0/components/device/silabs/si91x/mcu/drivers/systemlevel/src/rsi_pll.o" "./wiseconnect3_sdk_3.3.0/components/device/silabs/si91x/mcu/drivers/systemlevel/src/rsi_temp_sensor.o" "./wiseconnect3_sdk_3.3.0/components/device/silabs/si91x/mcu/drivers/systemlevel/src/rsi_ulpss_clk.o" "./wiseconnect3_sdk_3.3.0/components/device/silabs/si91x/mcu/drivers/unified_api/src/sl_si91x_dma.o" "./wiseconnect3_sdk_3.3.0/components/device/silabs/si91x/mcu/drivers/unified_api/src/sl_si91x_gspi.o" "./wiseconnect3_sdk_3.3.0/components/device/silabs/si91x/mcu/drivers/unified_api/src/sl_si91x_ulp_timer.o" -lgcc -lnosys -lc -lm -Wl,--end-group -Wl,--start-group -lgcc -lc -lnosys -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

	@echo 'Building out file: sl_si91x_gspi_w330.out'
	arm-none-eabi-objcopy "sl_si91x_gspi_w330.axf" "sl_si91x_gspi_w330.out"
	@echo ' '

	@echo 'Building hex file: sl_si91x_gspi_w330.hex'
	arm-none-eabi-objcopy -O ihex "sl_si91x_gspi_w330.axf" "sl_si91x_gspi_w330.hex"
	@echo ' '

	@echo 'Building bin file: sl_si91x_gspi_w330.bin'
	arm-none-eabi-objcopy -O binary "sl_si91x_gspi_w330.axf" "sl_si91x_gspi_w330.bin"
	@echo ' '

	@echo 'Building s37 file: sl_si91x_gspi_w330.s37'
	arm-none-eabi-objcopy -O srec "sl_si91x_gspi_w330.axf" "sl_si91x_gspi_w330.s37"
	@echo ' '

	@echo 'Running size tool'
	arm-none-eabi-size "sl_si91x_gspi_w330.axf" -A
	@echo ' '

# Other Targets
clean:
	-@$(foreach FILE, $(EXECUTABLES), $(shell $(RM) $(FILE)) )
	-@$(foreach FILE, $(OBJS), $(shell $(RM) $(FILE)) )
	-@$(foreach FILE, $(C_DEPS), $(shell $(RM) $(FILE)) )
	-$(RM) sl_si91x_gspi_w330.axf
	-@echo ' '

post-build:
	-"C:\SiliconLabs\SimplicityStudio\v5\developer\adapter_packs\commander\commander.exe" postbuild "C:\Users\ch.wang\SimplicityStudio\v5_workspace\sl_si91x_gspi_w330/sl_si91x_gspi_w330.slpb" --parameter build_dir:"C:\Users\ch.wang\SimplicityStudio\v5_workspace\sl_si91x_gspi_w330\GNU ARM v12.2.1 - Default"
	-@echo ' '

.PHONY: all clean dependents main-build post-build

-include ../makefile.targets
