################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../ArrayAndPoint/ArrayAndPoint.c 

OBJS += \
./ArrayAndPoint/ArrayAndPoint.o 

C_DEPS += \
./ArrayAndPoint/ArrayAndPoint.d 


# Each subdirectory must supply rules for building sources it contributes
ArrayAndPoint/%.o: ../ArrayAndPoint/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


