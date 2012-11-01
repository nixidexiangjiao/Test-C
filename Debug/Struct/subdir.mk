################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Struct/TestStruct.c 

OBJS += \
./Struct/TestStruct.o 

C_DEPS += \
./Struct/TestStruct.d 


# Each subdirectory must supply rules for building sources it contributes
Struct/%.o: ../Struct/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


