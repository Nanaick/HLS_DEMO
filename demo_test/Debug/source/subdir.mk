################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/demo_test.cpp 

OBJS += \
./source/demo_test.o 

CPP_DEPS += \
./source/demo_test.d 


# Each subdirectory must supply rules for building sources it contributes
source/demo_test.o: G:/QH_WORK/Demo/hls_prj/demo_test/src/demo_test.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -DAESL_TB -D__llvm__ -D__llvm__ -IG:/QH_WORK/Demo/hls_prj -ID:/Xilinx/Vivado/2018.3/win64/tools/systemc/include -ID:/Xilinx/Vivado/2018.3/include/etc -ID:/Xilinx/Vivado/2018.3/win64/tools/auto_cc/include -ID:/Xilinx/Vivado/2018.3/include/ap_sysc -ID:/Xilinx/Vivado/2018.3/include -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


