################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Struct/subdir.mk
-include String/subdir.mk
-include Scanf/subdir.mk
-include NumberByte/subdir.mk
-include HelloWorld/subdir.mk
-include File/subdir.mk
-include Caculate/subdir.mk
-include ArrayAndPoint/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: Test-C

# Tool invocations
Test-C: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: GCC C Linker'
	gcc  -o "Test-C" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(OBJS)$(C_DEPS)$(EXECUTABLES) Test-C
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
