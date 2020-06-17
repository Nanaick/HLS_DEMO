#include "demo_test.h"
#include <ap_int.h>

typedef unsigned int uint32;

void demo_test(uint32 idataInCtrl[4], float fdataInCtrl[4],
               uint32 idataOutCtrl[4], float fdataOutCtrl[4]) {
#pragma HLS ARRAY_PARTITION variable=fdataOutCtrl complete dim=1
#pragma HLS ARRAY_PARTITION variable=idataOutCtrl complete dim=1
#pragma HLS ARRAY_PARTITION variable=fdataInCtrl complete dim=1
#pragma HLS ARRAY_PARTITION variable=idataInCtrl complete dim=1

#pragma HLS INTERFACE ap_none port=idataInCtrlr
#pragma HLS INTERFACE ap_none port=idataOutCtrlr
#pragma HLS INTERFACE ap_none port=fdataInCtrlr
#pragma HLS INTERFACE ap_none port=fdataOutCtrlr

//#pragma HLS INTERFACE ap_ctrl_none port=return
  int i;
demo_test_label0:
  for (i = 0; i < 4; i++) {
    idataOutCtrl[i] = idataInCtrl[i] + 2;
    fdataOutCtrl[i] = fdataInCtrl[i] + 2.5;
  }
}

