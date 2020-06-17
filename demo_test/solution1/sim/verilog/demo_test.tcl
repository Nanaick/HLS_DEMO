
log_wave -r /
set designtopgroup [add_wave_group "Design Top Signals"]
set coutputgroup [add_wave_group "C Outputs" -into $designtopgroup]
set fdataOutCtrl_group [add_wave_group fdataOutCtrl(wire) -into $coutputgroup]
add_wave /apatb_demo_test_top/AESL_inst_demo_test/fdataOutCtrl_3 -into $fdataOutCtrl_group -radix hex
add_wave /apatb_demo_test_top/AESL_inst_demo_test/fdataOutCtrl_2 -into $fdataOutCtrl_group -radix hex
add_wave /apatb_demo_test_top/AESL_inst_demo_test/fdataOutCtrl_1 -into $fdataOutCtrl_group -radix hex
add_wave /apatb_demo_test_top/AESL_inst_demo_test/fdataOutCtrl_0 -into $fdataOutCtrl_group -radix hex
set idataOutCtrl_group [add_wave_group idataOutCtrl(wire) -into $coutputgroup]
add_wave /apatb_demo_test_top/AESL_inst_demo_test/idataOutCtrl_3 -into $idataOutCtrl_group -radix hex
add_wave /apatb_demo_test_top/AESL_inst_demo_test/idataOutCtrl_2 -into $idataOutCtrl_group -radix hex
add_wave /apatb_demo_test_top/AESL_inst_demo_test/idataOutCtrl_1 -into $idataOutCtrl_group -radix hex
add_wave /apatb_demo_test_top/AESL_inst_demo_test/idataOutCtrl_0 -into $idataOutCtrl_group -radix hex
set cinputgroup [add_wave_group "C Inputs" -into $designtopgroup]
set fdataInCtrl_group [add_wave_group fdataInCtrl(wire) -into $cinputgroup]
add_wave /apatb_demo_test_top/AESL_inst_demo_test/fdataInCtrl_3 -into $fdataInCtrl_group -radix hex
add_wave /apatb_demo_test_top/AESL_inst_demo_test/fdataInCtrl_2 -into $fdataInCtrl_group -radix hex
add_wave /apatb_demo_test_top/AESL_inst_demo_test/fdataInCtrl_1 -into $fdataInCtrl_group -radix hex
add_wave /apatb_demo_test_top/AESL_inst_demo_test/fdataInCtrl_0 -into $fdataInCtrl_group -radix hex
set idataInCtrl_group [add_wave_group idataInCtrl(wire) -into $cinputgroup]
add_wave /apatb_demo_test_top/AESL_inst_demo_test/idataInCtrl_3 -into $idataInCtrl_group -radix hex
add_wave /apatb_demo_test_top/AESL_inst_demo_test/idataInCtrl_2 -into $idataInCtrl_group -radix hex
add_wave /apatb_demo_test_top/AESL_inst_demo_test/idataInCtrl_1 -into $idataInCtrl_group -radix hex
add_wave /apatb_demo_test_top/AESL_inst_demo_test/idataInCtrl_0 -into $idataInCtrl_group -radix hex
set blocksiggroup [add_wave_group "Block-level IO Handshake" -into $designtopgroup]
add_wave /apatb_demo_test_top/AESL_inst_demo_test/ap_start -into $blocksiggroup
add_wave /apatb_demo_test_top/AESL_inst_demo_test/ap_done -into $blocksiggroup
add_wave /apatb_demo_test_top/AESL_inst_demo_test/ap_idle -into $blocksiggroup
add_wave /apatb_demo_test_top/AESL_inst_demo_test/ap_ready -into $blocksiggroup
set resetgroup [add_wave_group "Reset" -into $designtopgroup]
add_wave /apatb_demo_test_top/AESL_inst_demo_test/ap_rst -into $resetgroup
set clockgroup [add_wave_group "Clock" -into $designtopgroup]
add_wave /apatb_demo_test_top/AESL_inst_demo_test/ap_clk -into $clockgroup
set testbenchgroup [add_wave_group "Test Bench Signals"]
set tbinternalsiggroup [add_wave_group "Internal Signals" -into $testbenchgroup]
set tb_simstatus_group [add_wave_group "Simulation Status" -into $tbinternalsiggroup]
set tb_portdepth_group [add_wave_group "Port Depth" -into $tbinternalsiggroup]
add_wave /apatb_demo_test_top/AUTOTB_TRANSACTION_NUM -into $tb_simstatus_group -radix hex
add_wave /apatb_demo_test_top/ready_cnt -into $tb_simstatus_group -radix hex
add_wave /apatb_demo_test_top/done_cnt -into $tb_simstatus_group -radix hex
add_wave /apatb_demo_test_top/LENGTH_idataInCtrl_0 -into $tb_portdepth_group -radix hex
add_wave /apatb_demo_test_top/LENGTH_idataInCtrl_1 -into $tb_portdepth_group -radix hex
add_wave /apatb_demo_test_top/LENGTH_idataInCtrl_2 -into $tb_portdepth_group -radix hex
add_wave /apatb_demo_test_top/LENGTH_idataInCtrl_3 -into $tb_portdepth_group -radix hex
add_wave /apatb_demo_test_top/LENGTH_fdataInCtrl_0 -into $tb_portdepth_group -radix hex
add_wave /apatb_demo_test_top/LENGTH_fdataInCtrl_1 -into $tb_portdepth_group -radix hex
add_wave /apatb_demo_test_top/LENGTH_fdataInCtrl_2 -into $tb_portdepth_group -radix hex
add_wave /apatb_demo_test_top/LENGTH_fdataInCtrl_3 -into $tb_portdepth_group -radix hex
add_wave /apatb_demo_test_top/LENGTH_idataOutCtrl_0 -into $tb_portdepth_group -radix hex
add_wave /apatb_demo_test_top/LENGTH_idataOutCtrl_1 -into $tb_portdepth_group -radix hex
add_wave /apatb_demo_test_top/LENGTH_idataOutCtrl_2 -into $tb_portdepth_group -radix hex
add_wave /apatb_demo_test_top/LENGTH_idataOutCtrl_3 -into $tb_portdepth_group -radix hex
add_wave /apatb_demo_test_top/LENGTH_fdataOutCtrl_0 -into $tb_portdepth_group -radix hex
add_wave /apatb_demo_test_top/LENGTH_fdataOutCtrl_1 -into $tb_portdepth_group -radix hex
add_wave /apatb_demo_test_top/LENGTH_fdataOutCtrl_2 -into $tb_portdepth_group -radix hex
add_wave /apatb_demo_test_top/LENGTH_fdataOutCtrl_3 -into $tb_portdepth_group -radix hex
set tbcoutputgroup [add_wave_group "C Outputs" -into $testbenchgroup]
set tb_fdataOutCtrl_group [add_wave_group fdataOutCtrl(wire) -into $tbcoutputgroup]
add_wave /apatb_demo_test_top/fdataOutCtrl_3 -into $tb_fdataOutCtrl_group -radix hex
add_wave /apatb_demo_test_top/fdataOutCtrl_2 -into $tb_fdataOutCtrl_group -radix hex
add_wave /apatb_demo_test_top/fdataOutCtrl_1 -into $tb_fdataOutCtrl_group -radix hex
add_wave /apatb_demo_test_top/fdataOutCtrl_0 -into $tb_fdataOutCtrl_group -radix hex
set tb_idataOutCtrl_group [add_wave_group idataOutCtrl(wire) -into $tbcoutputgroup]
add_wave /apatb_demo_test_top/idataOutCtrl_3 -into $tb_idataOutCtrl_group -radix hex
add_wave /apatb_demo_test_top/idataOutCtrl_2 -into $tb_idataOutCtrl_group -radix hex
add_wave /apatb_demo_test_top/idataOutCtrl_1 -into $tb_idataOutCtrl_group -radix hex
add_wave /apatb_demo_test_top/idataOutCtrl_0 -into $tb_idataOutCtrl_group -radix hex
set tbcinputgroup [add_wave_group "C Inputs" -into $testbenchgroup]
set tb_fdataInCtrl_group [add_wave_group fdataInCtrl(wire) -into $tbcinputgroup]
add_wave /apatb_demo_test_top/fdataInCtrl_3 -into $tb_fdataInCtrl_group -radix hex
add_wave /apatb_demo_test_top/fdataInCtrl_2 -into $tb_fdataInCtrl_group -radix hex
add_wave /apatb_demo_test_top/fdataInCtrl_1 -into $tb_fdataInCtrl_group -radix hex
add_wave /apatb_demo_test_top/fdataInCtrl_0 -into $tb_fdataInCtrl_group -radix hex
set tb_idataInCtrl_group [add_wave_group idataInCtrl(wire) -into $tbcinputgroup]
add_wave /apatb_demo_test_top/idataInCtrl_3 -into $tb_idataInCtrl_group -radix hex
add_wave /apatb_demo_test_top/idataInCtrl_2 -into $tb_idataInCtrl_group -radix hex
add_wave /apatb_demo_test_top/idataInCtrl_1 -into $tb_idataInCtrl_group -radix hex
add_wave /apatb_demo_test_top/idataInCtrl_0 -into $tb_idataInCtrl_group -radix hex
save_wave_config demo_test.wcfg
run all
quit

