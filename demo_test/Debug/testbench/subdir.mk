################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
OBJS += \
./testbench/demo_test_tb.o 

CPP_DEPS += \
./testbench/demo_test_tb.d 


# Each subdirectory must supply rules for building sources it contributes
testbench/demo_test_tb.o: G:/QH_WORK/Demo/hls_prj/demo_test/test_tb/demo_test_tb.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -IG:/QH_WORK/Demo/hls_prj -ID:/Xilinx/Vivado/2018.3/win64/tools/systemc/include -ID:/Xilinx/Vivado/2018.3/include/etc -ID:/Xilinx/Vivado/2018.3/win64/tools/auto_cc/include -ID:/Xilinx/Vivado/2018.3/include/ap_sysc -ID:/Xilinx/Vivado/2018.3/include -O0 -g3 -Wall -Wno-unknown-pragmas -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"testbench/demo_test_tb.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


