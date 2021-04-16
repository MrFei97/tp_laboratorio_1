################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../TP\ 1.c \
../calculos.c 

OBJS += \
./TP\ 1.o \
./calculos.o 

C_DEPS += \
./TP\ 1.d \
./calculos.d 


# Each subdirectory must supply rules for building sources it contributes
TP\ 1.o: ../TP\ 1.c subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"TP 1.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

%.o: ../%.c subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


