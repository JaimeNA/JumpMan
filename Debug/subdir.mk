################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Cuadrado.cpp \
../Figura.cpp \
../Fondo.cpp \
../Juego.cpp \
../Personaje.cpp \
../main.cpp 

OBJS += \
./Cuadrado.o \
./Figura.o \
./Fondo.o \
./Juego.o \
./Personaje.o \
./main.o 

CPP_DEPS += \
./Cuadrado.d \
./Figura.d \
./Fondo.d \
./Juego.d \
./Personaje.d \
./main.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -I/usr/include -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


