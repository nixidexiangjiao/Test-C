################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../HelloWorld/HelloWorld.c 

OBJS += \
./HelloWorld/HelloWorld.o 

C_DEPS += \
./HelloWorld/HelloWorld.d 


# Each subdirectory must supply rules for building sources it contributes
HelloWorld/%.o: ../HelloWorld/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


