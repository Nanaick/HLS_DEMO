# ==============================================================
# File generated on Mon Jun 15 16:54:13 +0800 2020
# Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
# SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
# IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
# Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
# ==============================================================
add_files -tb ../test_tb/demo_test_tb.cpp -cflags { -Wno-unknown-pragmas}
add_files demo_test/src/demo_test.cpp
set_part xc7z030ffg676-2
create_clock -name default -period 10
set_clock_uncertainty 12.5% default
config_compile -no_signed_zeros=0
config_compile -unsafe_math_optimizations=0
config_export -format=ip_catalog
config_export -rtl=verilog
config_export -vivado_phys_opt=place
config_export -vivado_report_level=0
config_sdx -optimization_level=none
config_sdx -target=none
config_schedule -effort=medium
config_schedule -relax_ii_for_timing=0
config_bind -effort=medium
set_directive_loop_flatten demo_test/demo_test_label0 
set_directive_loop_flatten demo_test/demo_test_label1 
set_directive_loop_flatten demo_test/demo_test_label0 
