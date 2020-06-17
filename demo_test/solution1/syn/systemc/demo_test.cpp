// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "demo_test.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic demo_test::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic demo_test::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<6> demo_test::ap_ST_fsm_state1 = "1";
const sc_lv<6> demo_test::ap_ST_fsm_state2 = "10";
const sc_lv<6> demo_test::ap_ST_fsm_state3 = "100";
const sc_lv<6> demo_test::ap_ST_fsm_state4 = "1000";
const sc_lv<6> demo_test::ap_ST_fsm_state5 = "10000";
const sc_lv<6> demo_test::ap_ST_fsm_state6 = "100000";
const sc_lv<32> demo_test::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<32> demo_test::ap_const_lv32_1 = "1";
const sc_lv<1> demo_test::ap_const_lv1_0 = "0";
const sc_lv<3> demo_test::ap_const_lv3_0 = "000";
const sc_lv<32> demo_test::ap_const_lv32_5 = "101";
const sc_lv<2> demo_test::ap_const_lv2_2 = "10";
const sc_lv<2> demo_test::ap_const_lv2_1 = "1";
const sc_lv<2> demo_test::ap_const_lv2_0 = "00";
const sc_lv<2> demo_test::ap_const_lv2_3 = "11";
const sc_lv<32> demo_test::ap_const_lv32_40200000 = "1000000001000000000000000000000";
const sc_lv<32> demo_test::ap_const_lv32_2 = "10";
const sc_lv<3> demo_test::ap_const_lv3_4 = "100";
const sc_lv<3> demo_test::ap_const_lv3_1 = "1";
const sc_lv<1> demo_test::ap_const_lv1_1 = "1";
const bool demo_test::ap_const_boolean_1 = true;

demo_test::demo_test(sc_module_name name) : sc_module(name), mVcdFile(0) {
    demo_test_fadd_32bkb_U1 = new demo_test_fadd_32bkb<1,4,32,32,32>("demo_test_fadd_32bkb_U1");
    demo_test_fadd_32bkb_U1->clk(ap_clk);
    demo_test_fadd_32bkb_U1->reset(ap_rst);
    demo_test_fadd_32bkb_U1->din0(tmp_3_reg_272);
    demo_test_fadd_32bkb_U1->din1(ap_var_for_const0);
    demo_test_fadd_32bkb_U1->ce(ap_var_for_const1);
    demo_test_fadd_32bkb_U1->dout(grp_fu_197_p2);
    demo_test_mux_42_cud_U2 = new demo_test_mux_42_cud<1,1,32,32,32,32,2,32>("demo_test_mux_42_cud_U2");
    demo_test_mux_42_cud_U2->din0(fdataInCtrl_0);
    demo_test_mux_42_cud_U2->din1(fdataInCtrl_1);
    demo_test_mux_42_cud_U2->din2(fdataInCtrl_2);
    demo_test_mux_42_cud_U2->din3(fdataInCtrl_3);
    demo_test_mux_42_cud_U2->din4(tmp_3_fu_222_p5);
    demo_test_mux_42_cud_U2->dout(tmp_3_fu_222_p6);
    demo_test_mux_42_cud_U3 = new demo_test_mux_42_cud<1,1,32,32,32,32,2,32>("demo_test_mux_42_cud_U3");
    demo_test_mux_42_cud_U3->din0(idataInCtrl_0);
    demo_test_mux_42_cud_U3->din1(idataInCtrl_1);
    demo_test_mux_42_cud_U3->din2(idataInCtrl_2);
    demo_test_mux_42_cud_U3->din3(idataInCtrl_3);
    demo_test_mux_42_cud_U3->din4(tmp_4_reg_267);
    demo_test_mux_42_cud_U3->dout(tmp_fu_236_p6);

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state2);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state3);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state6);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( exitcond_fu_206_p2 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( exitcond_fu_206_p2 );

    SC_METHOD(thread_exitcond_fu_206_p2);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( i_reg_186 );

    SC_METHOD(thread_fdataOutCtrl_0);
    sensitive << ( tmp_4_reg_267 );
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( grp_fu_197_p2 );
    sensitive << ( fdataOutCtrl_0_preg );

    SC_METHOD(thread_fdataOutCtrl_1);
    sensitive << ( tmp_4_reg_267 );
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( grp_fu_197_p2 );
    sensitive << ( fdataOutCtrl_1_preg );

    SC_METHOD(thread_fdataOutCtrl_2);
    sensitive << ( tmp_4_reg_267 );
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( grp_fu_197_p2 );
    sensitive << ( fdataOutCtrl_2_preg );

    SC_METHOD(thread_fdataOutCtrl_3);
    sensitive << ( tmp_4_reg_267 );
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( grp_fu_197_p2 );
    sensitive << ( fdataOutCtrl_3_preg );

    SC_METHOD(thread_i_1_fu_212_p2);
    sensitive << ( i_reg_186 );

    SC_METHOD(thread_idataOutCtrl_0);
    sensitive << ( tmp_4_reg_267 );
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( tmp_1_fu_249_p2 );
    sensitive << ( idataOutCtrl_0_preg );

    SC_METHOD(thread_idataOutCtrl_1);
    sensitive << ( tmp_4_reg_267 );
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( tmp_1_fu_249_p2 );
    sensitive << ( idataOutCtrl_1_preg );

    SC_METHOD(thread_idataOutCtrl_2);
    sensitive << ( tmp_4_reg_267 );
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( tmp_1_fu_249_p2 );
    sensitive << ( idataOutCtrl_2_preg );

    SC_METHOD(thread_idataOutCtrl_3);
    sensitive << ( tmp_4_reg_267 );
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( tmp_1_fu_249_p2 );
    sensitive << ( idataOutCtrl_3_preg );

    SC_METHOD(thread_tmp_1_fu_249_p2);
    sensitive << ( tmp_fu_236_p6 );

    SC_METHOD(thread_tmp_3_fu_222_p5);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( i_reg_186 );

    SC_METHOD(thread_tmp_4_fu_218_p1);
    sensitive << ( i_reg_186 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( exitcond_fu_206_p2 );

    SC_THREAD(thread_hdltv_gen);
    sensitive << ( ap_clk.pos() );

    SC_THREAD(thread_ap_var_for_const1);

    SC_THREAD(thread_ap_var_for_const0);

    ap_CS_fsm = "000001";
    idataOutCtrl_2_preg = "00000000000000000000000000000000";
    fdataOutCtrl_2_preg = "00000000000000000000000000000000";
    idataOutCtrl_1_preg = "00000000000000000000000000000000";
    fdataOutCtrl_1_preg = "00000000000000000000000000000000";
    idataOutCtrl_0_preg = "00000000000000000000000000000000";
    fdataOutCtrl_0_preg = "00000000000000000000000000000000";
    idataOutCtrl_3_preg = "00000000000000000000000000000000";
    fdataOutCtrl_3_preg = "00000000000000000000000000000000";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "demo_test_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, idataInCtrl_0, "(port)idataInCtrl_0");
    sc_trace(mVcdFile, idataInCtrl_1, "(port)idataInCtrl_1");
    sc_trace(mVcdFile, idataInCtrl_2, "(port)idataInCtrl_2");
    sc_trace(mVcdFile, idataInCtrl_3, "(port)idataInCtrl_3");
    sc_trace(mVcdFile, fdataInCtrl_0, "(port)fdataInCtrl_0");
    sc_trace(mVcdFile, fdataInCtrl_1, "(port)fdataInCtrl_1");
    sc_trace(mVcdFile, fdataInCtrl_2, "(port)fdataInCtrl_2");
    sc_trace(mVcdFile, fdataInCtrl_3, "(port)fdataInCtrl_3");
    sc_trace(mVcdFile, idataOutCtrl_0, "(port)idataOutCtrl_0");
    sc_trace(mVcdFile, idataOutCtrl_1, "(port)idataOutCtrl_1");
    sc_trace(mVcdFile, idataOutCtrl_2, "(port)idataOutCtrl_2");
    sc_trace(mVcdFile, idataOutCtrl_3, "(port)idataOutCtrl_3");
    sc_trace(mVcdFile, fdataOutCtrl_0, "(port)fdataOutCtrl_0");
    sc_trace(mVcdFile, fdataOutCtrl_1, "(port)fdataOutCtrl_1");
    sc_trace(mVcdFile, fdataOutCtrl_2, "(port)fdataOutCtrl_2");
    sc_trace(mVcdFile, fdataOutCtrl_3, "(port)fdataOutCtrl_3");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, i_1_fu_212_p2, "i_1_fu_212_p2");
    sc_trace(mVcdFile, i_1_reg_262, "i_1_reg_262");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, tmp_4_fu_218_p1, "tmp_4_fu_218_p1");
    sc_trace(mVcdFile, tmp_4_reg_267, "tmp_4_reg_267");
    sc_trace(mVcdFile, exitcond_fu_206_p2, "exitcond_fu_206_p2");
    sc_trace(mVcdFile, tmp_3_fu_222_p6, "tmp_3_fu_222_p6");
    sc_trace(mVcdFile, tmp_3_reg_272, "tmp_3_reg_272");
    sc_trace(mVcdFile, i_reg_186, "i_reg_186");
    sc_trace(mVcdFile, ap_CS_fsm_state6, "ap_CS_fsm_state6");
    sc_trace(mVcdFile, tmp_1_fu_249_p2, "tmp_1_fu_249_p2");
    sc_trace(mVcdFile, idataOutCtrl_2_preg, "idataOutCtrl_2_preg");
    sc_trace(mVcdFile, grp_fu_197_p2, "grp_fu_197_p2");
    sc_trace(mVcdFile, fdataOutCtrl_2_preg, "fdataOutCtrl_2_preg");
    sc_trace(mVcdFile, idataOutCtrl_1_preg, "idataOutCtrl_1_preg");
    sc_trace(mVcdFile, fdataOutCtrl_1_preg, "fdataOutCtrl_1_preg");
    sc_trace(mVcdFile, idataOutCtrl_0_preg, "idataOutCtrl_0_preg");
    sc_trace(mVcdFile, fdataOutCtrl_0_preg, "fdataOutCtrl_0_preg");
    sc_trace(mVcdFile, idataOutCtrl_3_preg, "idataOutCtrl_3_preg");
    sc_trace(mVcdFile, fdataOutCtrl_3_preg, "fdataOutCtrl_3_preg");
    sc_trace(mVcdFile, ap_CS_fsm_state3, "ap_CS_fsm_state3");
    sc_trace(mVcdFile, tmp_3_fu_222_p5, "tmp_3_fu_222_p5");
    sc_trace(mVcdFile, tmp_fu_236_p6, "tmp_fu_236_p6");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
    mHdltvinHandle.open("demo_test.hdltvin.dat");
    mHdltvoutHandle.open("demo_test.hdltvout.dat");
}

demo_test::~demo_test() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    mHdltvinHandle << "] " << endl;
    mHdltvoutHandle << "] " << endl;
    mHdltvinHandle.close();
    mHdltvoutHandle.close();
    delete demo_test_fadd_32bkb_U1;
    delete demo_test_mux_42_cud_U2;
    delete demo_test_mux_42_cud_U3;
}

void demo_test::thread_ap_var_for_const1() {
    ap_var_for_const1 = ap_const_logic_1;
}

void demo_test::thread_ap_var_for_const0() {
    ap_var_for_const0 = ap_const_lv32_40200000;
}

void demo_test::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        fdataOutCtrl_0_preg = ap_const_lv32_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
             esl_seteq<1,2,2>(tmp_4_reg_267.read(), ap_const_lv2_0))) {
            fdataOutCtrl_0_preg = grp_fu_197_p2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        fdataOutCtrl_1_preg = ap_const_lv32_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
             esl_seteq<1,2,2>(tmp_4_reg_267.read(), ap_const_lv2_1))) {
            fdataOutCtrl_1_preg = grp_fu_197_p2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        fdataOutCtrl_2_preg = ap_const_lv32_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
             esl_seteq<1,2,2>(tmp_4_reg_267.read(), ap_const_lv2_2))) {
            fdataOutCtrl_2_preg = grp_fu_197_p2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        fdataOutCtrl_3_preg = ap_const_lv32_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
             esl_seteq<1,2,2>(tmp_4_reg_267.read(), ap_const_lv2_3))) {
            fdataOutCtrl_3_preg = grp_fu_197_p2.read();
        }
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        i_reg_186 = i_1_reg_262.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        i_reg_186 = ap_const_lv3_0;
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        idataOutCtrl_0_preg = ap_const_lv32_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
             esl_seteq<1,2,2>(tmp_4_reg_267.read(), ap_const_lv2_0))) {
            idataOutCtrl_0_preg = tmp_1_fu_249_p2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        idataOutCtrl_1_preg = ap_const_lv32_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
             esl_seteq<1,2,2>(tmp_4_reg_267.read(), ap_const_lv2_1))) {
            idataOutCtrl_1_preg = tmp_1_fu_249_p2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        idataOutCtrl_2_preg = ap_const_lv32_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
             esl_seteq<1,2,2>(tmp_4_reg_267.read(), ap_const_lv2_2))) {
            idataOutCtrl_2_preg = tmp_1_fu_249_p2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        idataOutCtrl_3_preg = ap_const_lv32_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
             esl_seteq<1,2,2>(tmp_4_reg_267.read(), ap_const_lv2_3))) {
            idataOutCtrl_3_preg = tmp_1_fu_249_p2.read();
        }
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        i_1_reg_262 = i_1_fu_212_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(exitcond_fu_206_p2.read(), ap_const_lv1_0))) {
        tmp_3_reg_272 = tmp_3_fu_222_p6.read();
        tmp_4_reg_267 = tmp_4_fu_218_p1.read();
    }
}

void demo_test::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void demo_test::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void demo_test::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void demo_test::thread_ap_CS_fsm_state6() {
    ap_CS_fsm_state6 = ap_CS_fsm.read()[5];
}

void demo_test::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_fu_206_p2.read(), ap_const_lv1_1))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void demo_test::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void demo_test::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_fu_206_p2.read(), ap_const_lv1_1))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void demo_test::thread_exitcond_fu_206_p2() {
    exitcond_fu_206_p2 = (!i_reg_186.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i_reg_186.read() == ap_const_lv3_4);
}

void demo_test::thread_fdataOutCtrl_0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         esl_seteq<1,2,2>(tmp_4_reg_267.read(), ap_const_lv2_0))) {
        fdataOutCtrl_0 = grp_fu_197_p2.read();
    } else {
        fdataOutCtrl_0 = fdataOutCtrl_0_preg.read();
    }
}

void demo_test::thread_fdataOutCtrl_1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         esl_seteq<1,2,2>(tmp_4_reg_267.read(), ap_const_lv2_1))) {
        fdataOutCtrl_1 = grp_fu_197_p2.read();
    } else {
        fdataOutCtrl_1 = fdataOutCtrl_1_preg.read();
    }
}

void demo_test::thread_fdataOutCtrl_2() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         esl_seteq<1,2,2>(tmp_4_reg_267.read(), ap_const_lv2_2))) {
        fdataOutCtrl_2 = grp_fu_197_p2.read();
    } else {
        fdataOutCtrl_2 = fdataOutCtrl_2_preg.read();
    }
}

void demo_test::thread_fdataOutCtrl_3() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         esl_seteq<1,2,2>(tmp_4_reg_267.read(), ap_const_lv2_3))) {
        fdataOutCtrl_3 = grp_fu_197_p2.read();
    } else {
        fdataOutCtrl_3 = fdataOutCtrl_3_preg.read();
    }
}

void demo_test::thread_i_1_fu_212_p2() {
    i_1_fu_212_p2 = (!i_reg_186.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i_reg_186.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void demo_test::thread_idataOutCtrl_0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         esl_seteq<1,2,2>(tmp_4_reg_267.read(), ap_const_lv2_0))) {
        idataOutCtrl_0 = tmp_1_fu_249_p2.read();
    } else {
        idataOutCtrl_0 = idataOutCtrl_0_preg.read();
    }
}

void demo_test::thread_idataOutCtrl_1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         esl_seteq<1,2,2>(tmp_4_reg_267.read(), ap_const_lv2_1))) {
        idataOutCtrl_1 = tmp_1_fu_249_p2.read();
    } else {
        idataOutCtrl_1 = idataOutCtrl_1_preg.read();
    }
}

void demo_test::thread_idataOutCtrl_2() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         esl_seteq<1,2,2>(tmp_4_reg_267.read(), ap_const_lv2_2))) {
        idataOutCtrl_2 = tmp_1_fu_249_p2.read();
    } else {
        idataOutCtrl_2 = idataOutCtrl_2_preg.read();
    }
}

void demo_test::thread_idataOutCtrl_3() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         esl_seteq<1,2,2>(tmp_4_reg_267.read(), ap_const_lv2_3))) {
        idataOutCtrl_3 = tmp_1_fu_249_p2.read();
    } else {
        idataOutCtrl_3 = idataOutCtrl_3_preg.read();
    }
}

void demo_test::thread_tmp_1_fu_249_p2() {
    tmp_1_fu_249_p2 = (!ap_const_lv32_2.is_01() || !tmp_fu_236_p6.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_2) + sc_biguint<32>(tmp_fu_236_p6.read()));
}

void demo_test::thread_tmp_3_fu_222_p5() {
    tmp_3_fu_222_p5 = i_reg_186.read().range(2-1, 0);
}

void demo_test::thread_tmp_4_fu_218_p1() {
    tmp_4_fu_218_p1 = i_reg_186.read().range(2-1, 0);
}

void demo_test::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(exitcond_fu_206_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state3;
            }
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_fsm_state4;
            break;
        case 8 : 
            ap_NS_fsm = ap_ST_fsm_state5;
            break;
        case 16 : 
            ap_NS_fsm = ap_ST_fsm_state6;
            break;
        case 32 : 
            ap_NS_fsm = ap_ST_fsm_state2;
            break;
        default : 
            ap_NS_fsm = "XXXXXX";
            break;
    }
}

void demo_test::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"ap_rst\" :  \"" << ap_rst.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ap_start\" :  \"" << ap_start.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"ap_done\" :  \"" << ap_done.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_idle\" :  \"" << ap_idle.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_ready\" :  \"" << ap_ready.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"idataInCtrl_0\" :  \"" << idataInCtrl_0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"idataInCtrl_1\" :  \"" << idataInCtrl_1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"idataInCtrl_2\" :  \"" << idataInCtrl_2.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"idataInCtrl_3\" :  \"" << idataInCtrl_3.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"fdataInCtrl_0\" :  \"" << fdataInCtrl_0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"fdataInCtrl_1\" :  \"" << fdataInCtrl_1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"fdataInCtrl_2\" :  \"" << fdataInCtrl_2.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"fdataInCtrl_3\" :  \"" << fdataInCtrl_3.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"idataOutCtrl_0\" :  \"" << idataOutCtrl_0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"idataOutCtrl_1\" :  \"" << idataOutCtrl_1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"idataOutCtrl_2\" :  \"" << idataOutCtrl_2.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"idataOutCtrl_3\" :  \"" << idataOutCtrl_3.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"fdataOutCtrl_0\" :  \"" << fdataOutCtrl_0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"fdataOutCtrl_1\" :  \"" << fdataOutCtrl_1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"fdataOutCtrl_2\" :  \"" << fdataOutCtrl_2.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"fdataOutCtrl_3\" :  \"" << fdataOutCtrl_3.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

