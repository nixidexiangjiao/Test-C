################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Scanf/Scanf.c 

OBJS += \
./Scanf/Scanf.o 

C_DEPS += \
./Scanf/Scanf.d 


# Each subdirectory must supply rules for building sources it contributes
Scanf/%.o: ../Scanf/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


