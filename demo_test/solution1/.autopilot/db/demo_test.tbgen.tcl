set moduleName demo_test
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {demo_test}
set C_modelType { void 0 }
set C_modelArgList {
	{ idataInCtrl_0 int 32 regular {pointer 0}  }
	{ idataInCtrl_1 int 32 regular {pointer 0}  }
	{ idataInCtrl_2 int 32 regular {pointer 0}  }
	{ idataInCtrl_3 int 32 regular {pointer 0}  }
	{ fdataInCtrl_0 float 32 regular {pointer 0}  }
	{ fdataInCtrl_1 float 32 regular {pointer 0}  }
	{ fdataInCtrl_2 float 32 regular {pointer 0}  }
	{ fdataInCtrl_3 float 32 regular {pointer 0}  }
	{ idataOutCtrl_0 int 32 regular {pointer 1}  }
	{ idataOutCtrl_1 int 32 regular {pointer 1}  }
	{ idataOutCtrl_2 int 32 regular {pointer 1}  }
	{ idataOutCtrl_3 int 32 regular {pointer 1}  }
	{ fdataOutCtrl_0 float 32 regular {pointer 1}  }
	{ fdataOutCtrl_1 float 32 regular {pointer 1}  }
	{ fdataOutCtrl_2 float 32 regular {pointer 1}  }
	{ fdataOutCtrl_3 float 32 regular {pointer 1}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "idataInCtrl_0", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "idataInCtrl","cData": "unsigned int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 2}]}]}]} , 
 	{ "Name" : "idataInCtrl_1", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "idataInCtrl","cData": "unsigned int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 1,"up" : 1,"step" : 2}]}]}]} , 
 	{ "Name" : "idataInCtrl_2", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "idataInCtrl","cData": "unsigned int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 2,"up" : 2,"step" : 2}]}]}]} , 
 	{ "Name" : "idataInCtrl_3", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "idataInCtrl","cData": "unsigned int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 3,"up" : 3,"step" : 2}]}]}]} , 
 	{ "Name" : "fdataInCtrl_0", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "fdataInCtrl","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 2}]}]}]} , 
 	{ "Name" : "fdataInCtrl_1", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "fdataInCtrl","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 1,"up" : 1,"step" : 2}]}]}]} , 
 	{ "Name" : "fdataInCtrl_2", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "fdataInCtrl","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 2,"up" : 2,"step" : 2}]}]}]} , 
 	{ "Name" : "fdataInCtrl_3", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "fdataInCtrl","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 3,"up" : 3,"step" : 2}]}]}]} , 
 	{ "Name" : "idataOutCtrl_0", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "idataOutCtrl","cData": "unsigned int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 2}]}]}]} , 
 	{ "Name" : "idataOutCtrl_1", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "idataOutCtrl","cData": "unsigned int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 1,"up" : 1,"step" : 2}]}]}]} , 
 	{ "Name" : "idataOutCtrl_2", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "idataOutCtrl","cData": "unsigned int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 2,"up" : 2,"step" : 2}]}]}]} , 
 	{ "Name" : "idataOutCtrl_3", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "idataOutCtrl","cData": "unsigned int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 3,"up" : 3,"step" : 2}]}]}]} , 
 	{ "Name" : "fdataOutCtrl_0", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "fdataOutCtrl","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 2}]}]}]} , 
 	{ "Name" : "fdataOutCtrl_1", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "fdataOutCtrl","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 1,"up" : 1,"step" : 2}]}]}]} , 
 	{ "Name" : "fdataOutCtrl_2", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "fdataOutCtrl","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 2,"up" : 2,"step" : 2}]}]}]} , 
 	{ "Name" : "fdataOutCtrl_3", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "fdataOutCtrl","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 3,"up" : 3,"step" : 2}]}]}]} ]}
# RTL Port declarations: 
set portNum 22
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ idataInCtrl_0 sc_in sc_lv 32 signal 0 } 
	{ idataInCtrl_1 sc_in sc_lv 32 signal 1 } 
	{ idataInCtrl_2 sc_in sc_lv 32 signal 2 } 
	{ idataInCtrl_3 sc_in sc_lv 32 signal 3 } 
	{ fdataInCtrl_0 sc_in sc_lv 32 signal 4 } 
	{ fdataInCtrl_1 sc_in sc_lv 32 signal 5 } 
	{ fdataInCtrl_2 sc_in sc_lv 32 signal 6 } 
	{ fdataInCtrl_3 sc_in sc_lv 32 signal 7 } 
	{ idataOutCtrl_0 sc_out sc_lv 32 signal 8 } 
	{ idataOutCtrl_1 sc_out sc_lv 32 signal 9 } 
	{ idataOutCtrl_2 sc_out sc_lv 32 signal 10 } 
	{ idataOutCtrl_3 sc_out sc_lv 32 signal 11 } 
	{ fdataOutCtrl_0 sc_out sc_lv 32 signal 12 } 
	{ fdataOutCtrl_1 sc_out sc_lv 32 signal 13 } 
	{ fdataOutCtrl_2 sc_out sc_lv 32 signal 14 } 
	{ fdataOutCtrl_3 sc_out sc_lv 32 signal 15 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "idataInCtrl_0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "idataInCtrl_0", "role": "default" }} , 
 	{ "name": "idataInCtrl_1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "idataInCtrl_1", "role": "default" }} , 
 	{ "name": "idataInCtrl_2", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "idataInCtrl_2", "role": "default" }} , 
 	{ "name": "idataInCtrl_3", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "idataInCtrl_3", "role": "default" }} , 
 	{ "name": "fdataInCtrl_0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "fdataInCtrl_0", "role": "default" }} , 
 	{ "name": "fdataInCtrl_1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "fdataInCtrl_1", "role": "default" }} , 
 	{ "name": "fdataInCtrl_2", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "fdataInCtrl_2", "role": "default" }} , 
 	{ "name": "fdataInCtrl_3", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "fdataInCtrl_3", "role": "default" }} , 
 	{ "name": "idataOutCtrl_0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "idataOutCtrl_0", "role": "default" }} , 
 	{ "name": "idataOutCtrl_1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "idataOutCtrl_1", "role": "default" }} , 
 	{ "name": "idataOutCtrl_2", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "idataOutCtrl_2", "role": "default" }} , 
 	{ "name": "idataOutCtrl_3", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "idataOutCtrl_3", "role": "default" }} , 
 	{ "name": "fdataOutCtrl_0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "fdataOutCtrl_0", "role": "default" }} , 
 	{ "name": "fdataOutCtrl_1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "fdataOutCtrl_1", "role": "default" }} , 
 	{ "name": "fdataOutCtrl_2", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "fdataOutCtrl_2", "role": "default" }} , 
 	{ "name": "fdataOutCtrl_3", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "fdataOutCtrl_3", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3"],
		"CDFG" : "demo_test",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "21", "EstimateLatencyMax" : "21",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "idataInCtrl_0", "Type" : "None", "Direction" : "I"},
			{"Name" : "idataInCtrl_1", "Type" : "None", "Direction" : "I"},
			{"Name" : "idataInCtrl_2", "Type" : "None", "Direction" : "I"},
			{"Name" : "idataInCtrl_3", "Type" : "None", "Direction" : "I"},
			{"Name" : "fdataInCtrl_0", "Type" : "None", "Direction" : "I"},
			{"Name" : "fdataInCtrl_1", "Type" : "None", "Direction" : "I"},
			{"Name" : "fdataInCtrl_2", "Type" : "None", "Direction" : "I"},
			{"Name" : "fdataInCtrl_3", "Type" : "None", "Direction" : "I"},
			{"Name" : "idataOutCtrl_0", "Type" : "None", "Direction" : "O"},
			{"Name" : "idataOutCtrl_1", "Type" : "None", "Direction" : "O"},
			{"Name" : "idataOutCtrl_2", "Type" : "None", "Direction" : "O"},
			{"Name" : "idataOutCtrl_3", "Type" : "None", "Direction" : "O"},
			{"Name" : "fdataOutCtrl_0", "Type" : "None", "Direction" : "O"},
			{"Name" : "fdataOutCtrl_1", "Type" : "None", "Direction" : "O"},
			{"Name" : "fdataOutCtrl_2", "Type" : "None", "Direction" : "O"},
			{"Name" : "fdataOutCtrl_3", "Type" : "None", "Direction" : "O"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.demo_test_fadd_32bkb_U1", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.demo_test_mux_42_cud_U2", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.demo_test_mux_42_cud_U3", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	demo_test {
		idataInCtrl_0 {Type I LastRead 5 FirstWrite -1}
		idataInCtrl_1 {Type I LastRead 5 FirstWrite -1}
		idataInCtrl_2 {Type I LastRead 5 FirstWrite -1}
		idataInCtrl_3 {Type I LastRead 5 FirstWrite -1}
		fdataInCtrl_0 {Type I LastRead 1 FirstWrite -1}
		fdataInCtrl_1 {Type I LastRead 1 FirstWrite -1}
		fdataInCtrl_2 {Type I LastRead 1 FirstWrite -1}
		fdataInCtrl_3 {Type I LastRead 1 FirstWrite -1}
		idataOutCtrl_0 {Type O LastRead -1 FirstWrite 5}
		idataOutCtrl_1 {Type O LastRead -1 FirstWrite 5}
		idataOutCtrl_2 {Type O LastRead -1 FirstWrite 5}
		idataOutCtrl_3 {Type O LastRead -1 FirstWrite 5}
		fdataOutCtrl_0 {Type O LastRead -1 FirstWrite 5}
		fdataOutCtrl_1 {Type O LastRead -1 FirstWrite 5}
		fdataOutCtrl_2 {Type O LastRead -1 FirstWrite 5}
		fdataOutCtrl_3 {Type O LastRead -1 FirstWrite 5}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "21", "Max" : "21"}
	, {"Name" : "Interval", "Min" : "22", "Max" : "22"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	idataInCtrl_0 { ap_none {  { idataInCtrl_0 in_data 0 32 } } }
	idataInCtrl_1 { ap_none {  { idataInCtrl_1 in_data 0 32 } } }
	idataInCtrl_2 { ap_none {  { idataInCtrl_2 in_data 0 32 } } }
	idataInCtrl_3 { ap_none {  { idataInCtrl_3 in_data 0 32 } } }
	fdataInCtrl_0 { ap_none {  { fdataInCtrl_0 in_data 0 32 } } }
	fdataInCtrl_1 { ap_none {  { fdataInCtrl_1 in_data 0 32 } } }
	fdataInCtrl_2 { ap_none {  { fdataInCtrl_2 in_data 0 32 } } }
	fdataInCtrl_3 { ap_none {  { fdataInCtrl_3 in_data 0 32 } } }
	idataOutCtrl_0 { ap_none {  { idataOutCtrl_0 out_data 1 32 } } }
	idataOutCtrl_1 { ap_none {  { idataOutCtrl_1 out_data 1 32 } } }
	idataOutCtrl_2 { ap_none {  { idataOutCtrl_2 out_data 1 32 } } }
	idataOutCtrl_3 { ap_none {  { idataOutCtrl_3 out_data 1 32 } } }
	fdataOutCtrl_0 { ap_none {  { fdataOutCtrl_0 out_data 1 32 } } }
	fdataOutCtrl_1 { ap_none {  { fdataOutCtrl_1 out_data 1 32 } } }
	fdataOutCtrl_2 { ap_none {  { fdataOutCtrl_2 out_data 1 32 } } }
	fdataOutCtrl_3 { ap_none {  { fdataOutCtrl_3 out_data 1 32 } } }
}

set busDeadlockParameterList { 
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
