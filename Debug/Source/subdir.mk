################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Source/Fondo.cpp \
../Source/Juego.cpp \
../Source/Personaje.cpp \
../Source/main.cpp 

OBJS += \
./Source/Fondo.o \
./Source/Juego.o \
./Source/Personaje.o \
./Source/main.o 

CPP_DEPS += \
./Source/Fondo.d \
./Source/Juego.d \
./Source/Personaje.d \
./Source/main.d 


# Each subdirectory must supply rules for building sources it contributes
Source/%.o: ../Source/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -I/usr/include -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


