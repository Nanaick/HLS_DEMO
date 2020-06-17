// ==============================================================
// File generated on Mon Jun 15 17:05:58 +0800 2020
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================

#include <systemc>
#include <iostream>
#include <cstdlib>
#include <cstddef>
#include <stdint.h>
#include "SysCFileHandler.h"
#include "ap_int.h"
#include "ap_fixed.h"
#include <complex>
#include <stdbool.h>
#include "autopilot_cbe.h"
#include "hls_stream.h"
#include "hls_half.h"
#include "hls_signal_handler.h"

using namespace std;
using namespace sc_core;
using namespace sc_dt;


// [dump_struct_tree [build_nameSpaceTree] dumpedStructList] ---------->


// [dump_enumeration [get_enumeration_list]] ---------->


// wrapc file define: "idataInCtrl_0"
#define AUTOTB_TVIN_idataInCtrl_0  "../tv/cdatafile/c.demo_test.autotvin_idataInCtrl_0.dat"
// wrapc file define: "idataInCtrl_1"
#define AUTOTB_TVIN_idataInCtrl_1  "../tv/cdatafile/c.demo_test.autotvin_idataInCtrl_1.dat"
// wrapc file define: "idataInCtrl_2"
#define AUTOTB_TVIN_idataInCtrl_2  "../tv/cdatafile/c.demo_test.autotvin_idataInCtrl_2.dat"
// wrapc file define: "idataInCtrl_3"
#define AUTOTB_TVIN_idataInCtrl_3  "../tv/cdatafile/c.demo_test.autotvin_idataInCtrl_3.dat"
// wrapc file define: "fdataInCtrl_0"
#define AUTOTB_TVIN_fdataInCtrl_0  "../tv/cdatafile/c.demo_test.autotvin_fdataInCtrl_0.dat"
// wrapc file define: "fdataInCtrl_1"
#define AUTOTB_TVIN_fdataInCtrl_1  "../tv/cdatafile/c.demo_test.autotvin_fdataInCtrl_1.dat"
// wrapc file define: "fdataInCtrl_2"
#define AUTOTB_TVIN_fdataInCtrl_2  "../tv/cdatafile/c.demo_test.autotvin_fdataInCtrl_2.dat"
// wrapc file define: "fdataInCtrl_3"
#define AUTOTB_TVIN_fdataInCtrl_3  "../tv/cdatafile/c.demo_test.autotvin_fdataInCtrl_3.dat"
// wrapc file define: "idataOutCtrl_0"
#define AUTOTB_TVOUT_idataOutCtrl_0  "../tv/cdatafile/c.demo_test.autotvout_idataOutCtrl_0.dat"
// wrapc file define: "idataOutCtrl_1"
#define AUTOTB_TVOUT_idataOutCtrl_1  "../tv/cdatafile/c.demo_test.autotvout_idataOutCtrl_1.dat"
// wrapc file define: "idataOutCtrl_2"
#define AUTOTB_TVOUT_idataOutCtrl_2  "../tv/cdatafile/c.demo_test.autotvout_idataOutCtrl_2.dat"
// wrapc file define: "idataOutCtrl_3"
#define AUTOTB_TVOUT_idataOutCtrl_3  "../tv/cdatafile/c.demo_test.autotvout_idataOutCtrl_3.dat"
// wrapc file define: "fdataOutCtrl_0"
#define AUTOTB_TVOUT_fdataOutCtrl_0  "../tv/cdatafile/c.demo_test.autotvout_fdataOutCtrl_0.dat"
// wrapc file define: "fdataOutCtrl_1"
#define AUTOTB_TVOUT_fdataOutCtrl_1  "../tv/cdatafile/c.demo_test.autotvout_fdataOutCtrl_1.dat"
// wrapc file define: "fdataOutCtrl_2"
#define AUTOTB_TVOUT_fdataOutCtrl_2  "../tv/cdatafile/c.demo_test.autotvout_fdataOutCtrl_2.dat"
// wrapc file define: "fdataOutCtrl_3"
#define AUTOTB_TVOUT_fdataOutCtrl_3  "../tv/cdatafile/c.demo_test.autotvout_fdataOutCtrl_3.dat"

#define INTER_TCL  "../tv/cdatafile/ref.tcl"

// tvout file define: "idataOutCtrl_0"
#define AUTOTB_TVOUT_PC_idataOutCtrl_0  "../tv/rtldatafile/rtl.demo_test.autotvout_idataOutCtrl_0.dat"
// tvout file define: "idataOutCtrl_1"
#define AUTOTB_TVOUT_PC_idataOutCtrl_1  "../tv/rtldatafile/rtl.demo_test.autotvout_idataOutCtrl_1.dat"
// tvout file define: "idataOutCtrl_2"
#define AUTOTB_TVOUT_PC_idataOutCtrl_2  "../tv/rtldatafile/rtl.demo_test.autotvout_idataOutCtrl_2.dat"
// tvout file define: "idataOutCtrl_3"
#define AUTOTB_TVOUT_PC_idataOutCtrl_3  "../tv/rtldatafile/rtl.demo_test.autotvout_idataOutCtrl_3.dat"
// tvout file define: "fdataOutCtrl_0"
#define AUTOTB_TVOUT_PC_fdataOutCtrl_0  "../tv/rtldatafile/rtl.demo_test.autotvout_fdataOutCtrl_0.dat"
// tvout file define: "fdataOutCtrl_1"
#define AUTOTB_TVOUT_PC_fdataOutCtrl_1  "../tv/rtldatafile/rtl.demo_test.autotvout_fdataOutCtrl_1.dat"
// tvout file define: "fdataOutCtrl_2"
#define AUTOTB_TVOUT_PC_fdataOutCtrl_2  "../tv/rtldatafile/rtl.demo_test.autotvout_fdataOutCtrl_2.dat"
// tvout file define: "fdataOutCtrl_3"
#define AUTOTB_TVOUT_PC_fdataOutCtrl_3  "../tv/rtldatafile/rtl.demo_test.autotvout_fdataOutCtrl_3.dat"

class INTER_TCL_FILE {
	public:
		INTER_TCL_FILE(const char* name) {
			mName = name;
			idataInCtrl_0_depth = 0;
			idataInCtrl_1_depth = 0;
			idataInCtrl_2_depth = 0;
			idataInCtrl_3_depth = 0;
			fdataInCtrl_0_depth = 0;
			fdataInCtrl_1_depth = 0;
			fdataInCtrl_2_depth = 0;
			fdataInCtrl_3_depth = 0;
			idataOutCtrl_0_depth = 0;
			idataOutCtrl_1_depth = 0;
			idataOutCtrl_2_depth = 0;
			idataOutCtrl_3_depth = 0;
			fdataOutCtrl_0_depth = 0;
			fdataOutCtrl_1_depth = 0;
			fdataOutCtrl_2_depth = 0;
			fdataOutCtrl_3_depth = 0;
			trans_num =0;
		}

		~INTER_TCL_FILE() {
			mFile.open(mName);
			if (!mFile.good()) {
				cout << "Failed to open file ref.tcl" << endl;
				exit (1);
			}
			string total_list = get_depth_list();
			mFile << "set depth_list {\n";
			mFile << total_list;
			mFile << "}\n";
			mFile << "set trans_num "<<trans_num<<endl;
			mFile.close();
		}

		string get_depth_list () {
			stringstream total_list;
			total_list << "{idataInCtrl_0 " << idataInCtrl_0_depth << "}\n";
			total_list << "{idataInCtrl_1 " << idataInCtrl_1_depth << "}\n";
			total_list << "{idataInCtrl_2 " << idataInCtrl_2_depth << "}\n";
			total_list << "{idataInCtrl_3 " << idataInCtrl_3_depth << "}\n";
			total_list << "{fdataInCtrl_0 " << fdataInCtrl_0_depth << "}\n";
			total_list << "{fdataInCtrl_1 " << fdataInCtrl_1_depth << "}\n";
			total_list << "{fdataInCtrl_2 " << fdataInCtrl_2_depth << "}\n";
			total_list << "{fdataInCtrl_3 " << fdataInCtrl_3_depth << "}\n";
			total_list << "{idataOutCtrl_0 " << idataOutCtrl_0_depth << "}\n";
			total_list << "{idataOutCtrl_1 " << idataOutCtrl_1_depth << "}\n";
			total_list << "{idataOutCtrl_2 " << idataOutCtrl_2_depth << "}\n";
			total_list << "{idataOutCtrl_3 " << idataOutCtrl_3_depth << "}\n";
			total_list << "{fdataOutCtrl_0 " << fdataOutCtrl_0_depth << "}\n";
			total_list << "{fdataOutCtrl_1 " << fdataOutCtrl_1_depth << "}\n";
			total_list << "{fdataOutCtrl_2 " << fdataOutCtrl_2_depth << "}\n";
			total_list << "{fdataOutCtrl_3 " << fdataOutCtrl_3_depth << "}\n";
			return total_list.str();
		}

		void set_num (int num , int* class_num) {
			(*class_num) = (*class_num) > num ? (*class_num) : num;
		}
	public:
		int idataInCtrl_0_depth;
		int idataInCtrl_1_depth;
		int idataInCtrl_2_depth;
		int idataInCtrl_3_depth;
		int fdataInCtrl_0_depth;
		int fdataInCtrl_1_depth;
		int fdataInCtrl_2_depth;
		int fdataInCtrl_3_depth;
		int idataOutCtrl_0_depth;
		int idataOutCtrl_1_depth;
		int idataOutCtrl_2_depth;
		int idataOutCtrl_3_depth;
		int fdataOutCtrl_0_depth;
		int fdataOutCtrl_1_depth;
		int fdataOutCtrl_2_depth;
		int fdataOutCtrl_3_depth;
		int trans_num;

	private:
		ofstream mFile;
		const char* mName;
};

extern void demo_test (
unsigned int idataInCtrl[4],
float fdataInCtrl[4],
unsigned int idataOutCtrl[4],
float fdataOutCtrl[4]);

void AESL_WRAP_demo_test (
unsigned int idataInCtrl[4],
float fdataInCtrl[4],
unsigned int idataOutCtrl[4],
float fdataOutCtrl[4])
{
	refine_signal_handler();
	fstream wrapc_switch_file_token;
	wrapc_switch_file_token.open(".hls_cosim_wrapc_switch.log");
	int AESL_i;
	if (wrapc_switch_file_token.good())
	{
		CodeState = ENTER_WRAPC_PC;
		static unsigned AESL_transaction_pc = 0;
		string AESL_token;
		string AESL_num;
		static AESL_FILE_HANDLER aesl_fh;


		// output port post check: "idataOutCtrl_0"
		aesl_fh.read(AUTOTB_TVOUT_PC_idataOutCtrl_0, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_idataOutCtrl_0, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_idataOutCtrl_0, AESL_token); // data

			sc_bv<32> *idataOutCtrl_0_pc_buffer = new sc_bv<32>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'idataOutCtrl_0', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'idataOutCtrl_0', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					idataOutCtrl_0_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_idataOutCtrl_0, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_idataOutCtrl_0))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: idataOutCtrl_0
				{
					// bitslice(31, 0)
					// {
						// celement: idataOutCtrl(31, 0)
						// {
							sc_lv<32>* idataOutCtrl_lv0_0_0_2 = new sc_lv<32>[1];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: idataOutCtrl(31, 0)
						{
							// carray: (0) => (0) @ (2)
							for (int i_0 = 0; i_0 <= 0; i_0 += 2)
							{
								if (&(idataOutCtrl[0]) != NULL) // check the null address if the c port is array or others
								{
									idataOutCtrl_lv0_0_0_2[hls_map_index].range(31, 0) = sc_bv<32>(idataOutCtrl_0_pc_buffer[hls_map_index].range(31, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: idataOutCtrl(31, 0)
						{
							// carray: (0) => (0) @ (2)
							for (int i_0 = 0; i_0 <= 0; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : idataOutCtrl[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : idataOutCtrl[0]
								// output_left_conversion : idataOutCtrl[i_0]
								// output_type_conversion : (idataOutCtrl_lv0_0_0_2[hls_map_index]).to_uint64()
								if (&(idataOutCtrl[0]) != NULL) // check the null address if the c port is array or others
								{
									idataOutCtrl[i_0] = (idataOutCtrl_lv0_0_0_2[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] idataOutCtrl_0_pc_buffer;
		}

		// output port post check: "idataOutCtrl_1"
		aesl_fh.read(AUTOTB_TVOUT_PC_idataOutCtrl_1, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_idataOutCtrl_1, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_idataOutCtrl_1, AESL_token); // data

			sc_bv<32> *idataOutCtrl_1_pc_buffer = new sc_bv<32>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'idataOutCtrl_1', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'idataOutCtrl_1', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					idataOutCtrl_1_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_idataOutCtrl_1, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_idataOutCtrl_1))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: idataOutCtrl_1
				{
					// bitslice(31, 0)
					// {
						// celement: idataOutCtrl(31, 0)
						// {
							sc_lv<32>* idataOutCtrl_lv0_1_1_2 = new sc_lv<32>[1];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: idataOutCtrl(31, 0)
						{
							// carray: (1) => (1) @ (2)
							for (int i_0 = 1; i_0 <= 1; i_0 += 2)
							{
								if (&(idataOutCtrl[0]) != NULL) // check the null address if the c port is array or others
								{
									idataOutCtrl_lv0_1_1_2[hls_map_index].range(31, 0) = sc_bv<32>(idataOutCtrl_1_pc_buffer[hls_map_index].range(31, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: idataOutCtrl(31, 0)
						{
							// carray: (1) => (1) @ (2)
							for (int i_0 = 1; i_0 <= 1; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : idataOutCtrl[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : idataOutCtrl[0]
								// output_left_conversion : idataOutCtrl[i_0]
								// output_type_conversion : (idataOutCtrl_lv0_1_1_2[hls_map_index]).to_uint64()
								if (&(idataOutCtrl[0]) != NULL) // check the null address if the c port is array or others
								{
									idataOutCtrl[i_0] = (idataOutCtrl_lv0_1_1_2[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] idataOutCtrl_1_pc_buffer;
		}

		// output port post check: "idataOutCtrl_2"
		aesl_fh.read(AUTOTB_TVOUT_PC_idataOutCtrl_2, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_idataOutCtrl_2, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_idataOutCtrl_2, AESL_token); // data

			sc_bv<32> *idataOutCtrl_2_pc_buffer = new sc_bv<32>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'idataOutCtrl_2', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'idataOutCtrl_2', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					idataOutCtrl_2_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_idataOutCtrl_2, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_idataOutCtrl_2))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: idataOutCtrl_2
				{
					// bitslice(31, 0)
					// {
						// celement: idataOutCtrl(31, 0)
						// {
							sc_lv<32>* idataOutCtrl_lv0_2_2_2 = new sc_lv<32>[1];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: idataOutCtrl(31, 0)
						{
							// carray: (2) => (2) @ (2)
							for (int i_0 = 2; i_0 <= 2; i_0 += 2)
							{
								if (&(idataOutCtrl[0]) != NULL) // check the null address if the c port is array or others
								{
									idataOutCtrl_lv0_2_2_2[hls_map_index].range(31, 0) = sc_bv<32>(idataOutCtrl_2_pc_buffer[hls_map_index].range(31, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: idataOutCtrl(31, 0)
						{
							// carray: (2) => (2) @ (2)
							for (int i_0 = 2; i_0 <= 2; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : idataOutCtrl[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : idataOutCtrl[0]
								// output_left_conversion : idataOutCtrl[i_0]
								// output_type_conversion : (idataOutCtrl_lv0_2_2_2[hls_map_index]).to_uint64()
								if (&(idataOutCtrl[0]) != NULL) // check the null address if the c port is array or others
								{
									idataOutCtrl[i_0] = (idataOutCtrl_lv0_2_2_2[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] idataOutCtrl_2_pc_buffer;
		}

		// output port post check: "idataOutCtrl_3"
		aesl_fh.read(AUTOTB_TVOUT_PC_idataOutCtrl_3, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_idataOutCtrl_3, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_idataOutCtrl_3, AESL_token); // data

			sc_bv<32> *idataOutCtrl_3_pc_buffer = new sc_bv<32>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'idataOutCtrl_3', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'idataOutCtrl_3', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					idataOutCtrl_3_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_idataOutCtrl_3, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_idataOutCtrl_3))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: idataOutCtrl_3
				{
					// bitslice(31, 0)
					// {
						// celement: idataOutCtrl(31, 0)
						// {
							sc_lv<32>* idataOutCtrl_lv0_3_3_2 = new sc_lv<32>[1];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: idataOutCtrl(31, 0)
						{
							// carray: (3) => (3) @ (2)
							for (int i_0 = 3; i_0 <= 3; i_0 += 2)
							{
								if (&(idataOutCtrl[0]) != NULL) // check the null address if the c port is array or others
								{
									idataOutCtrl_lv0_3_3_2[hls_map_index].range(31, 0) = sc_bv<32>(idataOutCtrl_3_pc_buffer[hls_map_index].range(31, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: idataOutCtrl(31, 0)
						{
							// carray: (3) => (3) @ (2)
							for (int i_0 = 3; i_0 <= 3; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : idataOutCtrl[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : idataOutCtrl[0]
								// output_left_conversion : idataOutCtrl[i_0]
								// output_type_conversion : (idataOutCtrl_lv0_3_3_2[hls_map_index]).to_uint64()
								if (&(idataOutCtrl[0]) != NULL) // check the null address if the c port is array or others
								{
									idataOutCtrl[i_0] = (idataOutCtrl_lv0_3_3_2[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] idataOutCtrl_3_pc_buffer;
		}

		// output port post check: "fdataOutCtrl_0"
		aesl_fh.read(AUTOTB_TVOUT_PC_fdataOutCtrl_0, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_fdataOutCtrl_0, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_fdataOutCtrl_0, AESL_token); // data

			sc_bv<32> *fdataOutCtrl_0_pc_buffer = new sc_bv<32>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'fdataOutCtrl_0', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'fdataOutCtrl_0', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					fdataOutCtrl_0_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_fdataOutCtrl_0, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_fdataOutCtrl_0))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: fdataOutCtrl_0
				{
					// bitslice(31, 0)
					// {
						// celement: fdataOutCtrl(31, 0)
						// {
							sc_lv<32>* fdataOutCtrl_lv0_0_0_2 = new sc_lv<32>[1];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: fdataOutCtrl(31, 0)
						{
							// carray: (0) => (0) @ (2)
							for (int i_0 = 0; i_0 <= 0; i_0 += 2)
							{
								if (&(fdataOutCtrl[0]) != NULL) // check the null address if the c port is array or others
								{
									fdataOutCtrl_lv0_0_0_2[hls_map_index].range(31, 0) = sc_bv<32>(fdataOutCtrl_0_pc_buffer[hls_map_index].range(31, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: fdataOutCtrl(31, 0)
						{
							// carray: (0) => (0) @ (2)
							for (int i_0 = 0; i_0 <= 0; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : fdataOutCtrl[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : fdataOutCtrl[0]
								// output_left_conversion : *(int*)&fdataOutCtrl[i_0]
								// output_type_conversion : (fdataOutCtrl_lv0_0_0_2[hls_map_index]).to_uint64()
								if (&(fdataOutCtrl[0]) != NULL) // check the null address if the c port is array or others
								{
									*(int*)&fdataOutCtrl[i_0] = (fdataOutCtrl_lv0_0_0_2[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] fdataOutCtrl_0_pc_buffer;
		}

		// output port post check: "fdataOutCtrl_1"
		aesl_fh.read(AUTOTB_TVOUT_PC_fdataOutCtrl_1, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_fdataOutCtrl_1, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_fdataOutCtrl_1, AESL_token); // data

			sc_bv<32> *fdataOutCtrl_1_pc_buffer = new sc_bv<32>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'fdataOutCtrl_1', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'fdataOutCtrl_1', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					fdataOutCtrl_1_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_fdataOutCtrl_1, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_fdataOutCtrl_1))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: fdataOutCtrl_1
				{
					// bitslice(31, 0)
					// {
						// celement: fdataOutCtrl(31, 0)
						// {
							sc_lv<32>* fdataOutCtrl_lv0_1_1_2 = new sc_lv<32>[1];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: fdataOutCtrl(31, 0)
						{
							// carray: (1) => (1) @ (2)
							for (int i_0 = 1; i_0 <= 1; i_0 += 2)
							{
								if (&(fdataOutCtrl[0]) != NULL) // check the null address if the c port is array or others
								{
									fdataOutCtrl_lv0_1_1_2[hls_map_index].range(31, 0) = sc_bv<32>(fdataOutCtrl_1_pc_buffer[hls_map_index].range(31, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: fdataOutCtrl(31, 0)
						{
							// carray: (1) => (1) @ (2)
							for (int i_0 = 1; i_0 <= 1; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : fdataOutCtrl[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : fdataOutCtrl[0]
								// output_left_conversion : *(int*)&fdataOutCtrl[i_0]
								// output_type_conversion : (fdataOutCtrl_lv0_1_1_2[hls_map_index]).to_uint64()
								if (&(fdataOutCtrl[0]) != NULL) // check the null address if the c port is array or others
								{
									*(int*)&fdataOutCtrl[i_0] = (fdataOutCtrl_lv0_1_1_2[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] fdataOutCtrl_1_pc_buffer;
		}

		// output port post check: "fdataOutCtrl_2"
		aesl_fh.read(AUTOTB_TVOUT_PC_fdataOutCtrl_2, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_fdataOutCtrl_2, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_fdataOutCtrl_2, AESL_token); // data

			sc_bv<32> *fdataOutCtrl_2_pc_buffer = new sc_bv<32>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'fdataOutCtrl_2', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'fdataOutCtrl_2', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					fdataOutCtrl_2_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_fdataOutCtrl_2, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_fdataOutCtrl_2))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: fdataOutCtrl_2
				{
					// bitslice(31, 0)
					// {
						// celement: fdataOutCtrl(31, 0)
						// {
							sc_lv<32>* fdataOutCtrl_lv0_2_2_2 = new sc_lv<32>[1];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: fdataOutCtrl(31, 0)
						{
							// carray: (2) => (2) @ (2)
							for (int i_0 = 2; i_0 <= 2; i_0 += 2)
							{
								if (&(fdataOutCtrl[0]) != NULL) // check the null address if the c port is array or others
								{
									fdataOutCtrl_lv0_2_2_2[hls_map_index].range(31, 0) = sc_bv<32>(fdataOutCtrl_2_pc_buffer[hls_map_index].range(31, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: fdataOutCtrl(31, 0)
						{
							// carray: (2) => (2) @ (2)
							for (int i_0 = 2; i_0 <= 2; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : fdataOutCtrl[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : fdataOutCtrl[0]
								// output_left_conversion : *(int*)&fdataOutCtrl[i_0]
								// output_type_conversion : (fdataOutCtrl_lv0_2_2_2[hls_map_index]).to_uint64()
								if (&(fdataOutCtrl[0]) != NULL) // check the null address if the c port is array or others
								{
									*(int*)&fdataOutCtrl[i_0] = (fdataOutCtrl_lv0_2_2_2[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] fdataOutCtrl_2_pc_buffer;
		}

		// output port post check: "fdataOutCtrl_3"
		aesl_fh.read(AUTOTB_TVOUT_PC_fdataOutCtrl_3, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_fdataOutCtrl_3, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_fdataOutCtrl_3, AESL_token); // data

			sc_bv<32> *fdataOutCtrl_3_pc_buffer = new sc_bv<32>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'fdataOutCtrl_3', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'fdataOutCtrl_3', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					fdataOutCtrl_3_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_fdataOutCtrl_3, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_fdataOutCtrl_3))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: fdataOutCtrl_3
				{
					// bitslice(31, 0)
					// {
						// celement: fdataOutCtrl(31, 0)
						// {
							sc_lv<32>* fdataOutCtrl_lv0_3_3_2 = new sc_lv<32>[1];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: fdataOutCtrl(31, 0)
						{
							// carray: (3) => (3) @ (2)
							for (int i_0 = 3; i_0 <= 3; i_0 += 2)
							{
								if (&(fdataOutCtrl[0]) != NULL) // check the null address if the c port is array or others
								{
									fdataOutCtrl_lv0_3_3_2[hls_map_index].range(31, 0) = sc_bv<32>(fdataOutCtrl_3_pc_buffer[hls_map_index].range(31, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: fdataOutCtrl(31, 0)
						{
							// carray: (3) => (3) @ (2)
							for (int i_0 = 3; i_0 <= 3; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : fdataOutCtrl[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : fdataOutCtrl[0]
								// output_left_conversion : *(int*)&fdataOutCtrl[i_0]
								// output_type_conversion : (fdataOutCtrl_lv0_3_3_2[hls_map_index]).to_uint64()
								if (&(fdataOutCtrl[0]) != NULL) // check the null address if the c port is array or others
								{
									*(int*)&fdataOutCtrl[i_0] = (fdataOutCtrl_lv0_3_3_2[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] fdataOutCtrl_3_pc_buffer;
		}

		AESL_transaction_pc++;
	}
	else
	{
		CodeState = ENTER_WRAPC;
		static unsigned AESL_transaction;

		static AESL_FILE_HANDLER aesl_fh;

		// "idataInCtrl_0"
		char* tvin_idataInCtrl_0 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_idataInCtrl_0);

		// "idataInCtrl_1"
		char* tvin_idataInCtrl_1 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_idataInCtrl_1);

		// "idataInCtrl_2"
		char* tvin_idataInCtrl_2 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_idataInCtrl_2);

		// "idataInCtrl_3"
		char* tvin_idataInCtrl_3 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_idataInCtrl_3);

		// "fdataInCtrl_0"
		char* tvin_fdataInCtrl_0 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_fdataInCtrl_0);

		// "fdataInCtrl_1"
		char* tvin_fdataInCtrl_1 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_fdataInCtrl_1);

		// "fdataInCtrl_2"
		char* tvin_fdataInCtrl_2 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_fdataInCtrl_2);

		// "fdataInCtrl_3"
		char* tvin_fdataInCtrl_3 = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_fdataInCtrl_3);

		// "idataOutCtrl_0"
		char* tvout_idataOutCtrl_0 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_idataOutCtrl_0);

		// "idataOutCtrl_1"
		char* tvout_idataOutCtrl_1 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_idataOutCtrl_1);

		// "idataOutCtrl_2"
		char* tvout_idataOutCtrl_2 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_idataOutCtrl_2);

		// "idataOutCtrl_3"
		char* tvout_idataOutCtrl_3 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_idataOutCtrl_3);

		// "fdataOutCtrl_0"
		char* tvout_fdataOutCtrl_0 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_fdataOutCtrl_0);

		// "fdataOutCtrl_1"
		char* tvout_fdataOutCtrl_1 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_fdataOutCtrl_1);

		// "fdataOutCtrl_2"
		char* tvout_fdataOutCtrl_2 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_fdataOutCtrl_2);

		// "fdataOutCtrl_3"
		char* tvout_fdataOutCtrl_3 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_fdataOutCtrl_3);

		CodeState = DUMP_INPUTS;
		static INTER_TCL_FILE tcl_file(INTER_TCL);
		int leading_zero;

		// [[transaction]]
		sprintf(tvin_idataInCtrl_0, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_idataInCtrl_0, tvin_idataInCtrl_0);

		sc_bv<32>* idataInCtrl_0_tvin_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: idataInCtrl_0
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: idataInCtrl(31, 0)
				{
					// carray: (0) => (0) @ (2)
					for (int i_0 = 0; i_0 <= 0; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : idataInCtrl[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : idataInCtrl[0]
						// regulate_c_name       : idataInCtrl
						// input_type_conversion : idataInCtrl[i_0]
						if (&(idataInCtrl[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> idataInCtrl_tmp_mem;
							idataInCtrl_tmp_mem = idataInCtrl[i_0];
							idataInCtrl_0_tvin_wrapc_buffer[hls_map_index].range(31, 0) = idataInCtrl_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_idataInCtrl_0, "%s\n", (idataInCtrl_0_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_idataInCtrl_0, tvin_idataInCtrl_0);
		}

		tcl_file.set_num(1, &tcl_file.idataInCtrl_0_depth);
		sprintf(tvin_idataInCtrl_0, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_idataInCtrl_0, tvin_idataInCtrl_0);

		// release memory allocation
		delete [] idataInCtrl_0_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_idataInCtrl_1, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_idataInCtrl_1, tvin_idataInCtrl_1);

		sc_bv<32>* idataInCtrl_1_tvin_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: idataInCtrl_1
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: idataInCtrl(31, 0)
				{
					// carray: (1) => (1) @ (2)
					for (int i_0 = 1; i_0 <= 1; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : idataInCtrl[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : idataInCtrl[0]
						// regulate_c_name       : idataInCtrl
						// input_type_conversion : idataInCtrl[i_0]
						if (&(idataInCtrl[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> idataInCtrl_tmp_mem;
							idataInCtrl_tmp_mem = idataInCtrl[i_0];
							idataInCtrl_1_tvin_wrapc_buffer[hls_map_index].range(31, 0) = idataInCtrl_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_idataInCtrl_1, "%s\n", (idataInCtrl_1_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_idataInCtrl_1, tvin_idataInCtrl_1);
		}

		tcl_file.set_num(1, &tcl_file.idataInCtrl_1_depth);
		sprintf(tvin_idataInCtrl_1, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_idataInCtrl_1, tvin_idataInCtrl_1);

		// release memory allocation
		delete [] idataInCtrl_1_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_idataInCtrl_2, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_idataInCtrl_2, tvin_idataInCtrl_2);

		sc_bv<32>* idataInCtrl_2_tvin_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: idataInCtrl_2
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: idataInCtrl(31, 0)
				{
					// carray: (2) => (2) @ (2)
					for (int i_0 = 2; i_0 <= 2; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : idataInCtrl[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : idataInCtrl[0]
						// regulate_c_name       : idataInCtrl
						// input_type_conversion : idataInCtrl[i_0]
						if (&(idataInCtrl[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> idataInCtrl_tmp_mem;
							idataInCtrl_tmp_mem = idataInCtrl[i_0];
							idataInCtrl_2_tvin_wrapc_buffer[hls_map_index].range(31, 0) = idataInCtrl_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_idataInCtrl_2, "%s\n", (idataInCtrl_2_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_idataInCtrl_2, tvin_idataInCtrl_2);
		}

		tcl_file.set_num(1, &tcl_file.idataInCtrl_2_depth);
		sprintf(tvin_idataInCtrl_2, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_idataInCtrl_2, tvin_idataInCtrl_2);

		// release memory allocation
		delete [] idataInCtrl_2_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_idataInCtrl_3, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_idataInCtrl_3, tvin_idataInCtrl_3);

		sc_bv<32>* idataInCtrl_3_tvin_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: idataInCtrl_3
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: idataInCtrl(31, 0)
				{
					// carray: (3) => (3) @ (2)
					for (int i_0 = 3; i_0 <= 3; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : idataInCtrl[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : idataInCtrl[0]
						// regulate_c_name       : idataInCtrl
						// input_type_conversion : idataInCtrl[i_0]
						if (&(idataInCtrl[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> idataInCtrl_tmp_mem;
							idataInCtrl_tmp_mem = idataInCtrl[i_0];
							idataInCtrl_3_tvin_wrapc_buffer[hls_map_index].range(31, 0) = idataInCtrl_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_idataInCtrl_3, "%s\n", (idataInCtrl_3_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_idataInCtrl_3, tvin_idataInCtrl_3);
		}

		tcl_file.set_num(1, &tcl_file.idataInCtrl_3_depth);
		sprintf(tvin_idataInCtrl_3, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_idataInCtrl_3, tvin_idataInCtrl_3);

		// release memory allocation
		delete [] idataInCtrl_3_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_fdataInCtrl_0, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_fdataInCtrl_0, tvin_fdataInCtrl_0);

		sc_bv<32>* fdataInCtrl_0_tvin_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: fdataInCtrl_0
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: fdataInCtrl(31, 0)
				{
					// carray: (0) => (0) @ (2)
					for (int i_0 = 0; i_0 <= 0; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : fdataInCtrl[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : fdataInCtrl[0]
						// regulate_c_name       : fdataInCtrl
						// input_type_conversion : *(int*)&fdataInCtrl[i_0]
						if (&(fdataInCtrl[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> fdataInCtrl_tmp_mem;
							fdataInCtrl_tmp_mem = *(int*)&fdataInCtrl[i_0];
							fdataInCtrl_0_tvin_wrapc_buffer[hls_map_index].range(31, 0) = fdataInCtrl_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_fdataInCtrl_0, "%s\n", (fdataInCtrl_0_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_fdataInCtrl_0, tvin_fdataInCtrl_0);
		}

		tcl_file.set_num(1, &tcl_file.fdataInCtrl_0_depth);
		sprintf(tvin_fdataInCtrl_0, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_fdataInCtrl_0, tvin_fdataInCtrl_0);

		// release memory allocation
		delete [] fdataInCtrl_0_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_fdataInCtrl_1, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_fdataInCtrl_1, tvin_fdataInCtrl_1);

		sc_bv<32>* fdataInCtrl_1_tvin_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: fdataInCtrl_1
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: fdataInCtrl(31, 0)
				{
					// carray: (1) => (1) @ (2)
					for (int i_0 = 1; i_0 <= 1; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : fdataInCtrl[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : fdataInCtrl[0]
						// regulate_c_name       : fdataInCtrl
						// input_type_conversion : *(int*)&fdataInCtrl[i_0]
						if (&(fdataInCtrl[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> fdataInCtrl_tmp_mem;
							fdataInCtrl_tmp_mem = *(int*)&fdataInCtrl[i_0];
							fdataInCtrl_1_tvin_wrapc_buffer[hls_map_index].range(31, 0) = fdataInCtrl_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_fdataInCtrl_1, "%s\n", (fdataInCtrl_1_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_fdataInCtrl_1, tvin_fdataInCtrl_1);
		}

		tcl_file.set_num(1, &tcl_file.fdataInCtrl_1_depth);
		sprintf(tvin_fdataInCtrl_1, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_fdataInCtrl_1, tvin_fdataInCtrl_1);

		// release memory allocation
		delete [] fdataInCtrl_1_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_fdataInCtrl_2, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_fdataInCtrl_2, tvin_fdataInCtrl_2);

		sc_bv<32>* fdataInCtrl_2_tvin_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: fdataInCtrl_2
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: fdataInCtrl(31, 0)
				{
					// carray: (2) => (2) @ (2)
					for (int i_0 = 2; i_0 <= 2; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : fdataInCtrl[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : fdataInCtrl[0]
						// regulate_c_name       : fdataInCtrl
						// input_type_conversion : *(int*)&fdataInCtrl[i_0]
						if (&(fdataInCtrl[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> fdataInCtrl_tmp_mem;
							fdataInCtrl_tmp_mem = *(int*)&fdataInCtrl[i_0];
							fdataInCtrl_2_tvin_wrapc_buffer[hls_map_index].range(31, 0) = fdataInCtrl_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_fdataInCtrl_2, "%s\n", (fdataInCtrl_2_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_fdataInCtrl_2, tvin_fdataInCtrl_2);
		}

		tcl_file.set_num(1, &tcl_file.fdataInCtrl_2_depth);
		sprintf(tvin_fdataInCtrl_2, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_fdataInCtrl_2, tvin_fdataInCtrl_2);

		// release memory allocation
		delete [] fdataInCtrl_2_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_fdataInCtrl_3, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_fdataInCtrl_3, tvin_fdataInCtrl_3);

		sc_bv<32>* fdataInCtrl_3_tvin_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: fdataInCtrl_3
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: fdataInCtrl(31, 0)
				{
					// carray: (3) => (3) @ (2)
					for (int i_0 = 3; i_0 <= 3; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : fdataInCtrl[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : fdataInCtrl[0]
						// regulate_c_name       : fdataInCtrl
						// input_type_conversion : *(int*)&fdataInCtrl[i_0]
						if (&(fdataInCtrl[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> fdataInCtrl_tmp_mem;
							fdataInCtrl_tmp_mem = *(int*)&fdataInCtrl[i_0];
							fdataInCtrl_3_tvin_wrapc_buffer[hls_map_index].range(31, 0) = fdataInCtrl_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_fdataInCtrl_3, "%s\n", (fdataInCtrl_3_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_fdataInCtrl_3, tvin_fdataInCtrl_3);
		}

		tcl_file.set_num(1, &tcl_file.fdataInCtrl_3_depth);
		sprintf(tvin_fdataInCtrl_3, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_fdataInCtrl_3, tvin_fdataInCtrl_3);

		// release memory allocation
		delete [] fdataInCtrl_3_tvin_wrapc_buffer;

// [call_c_dut] ---------->

		CodeState = CALL_C_DUT;
		demo_test(idataInCtrl, fdataInCtrl, idataOutCtrl, fdataOutCtrl);

		CodeState = DUMP_OUTPUTS;

		// [[transaction]]
		sprintf(tvout_idataOutCtrl_0, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_idataOutCtrl_0, tvout_idataOutCtrl_0);

		sc_bv<32>* idataOutCtrl_0_tvout_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: idataOutCtrl_0
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: idataOutCtrl(31, 0)
				{
					// carray: (0) => (0) @ (2)
					for (int i_0 = 0; i_0 <= 0; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : idataOutCtrl[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : idataOutCtrl[0]
						// regulate_c_name       : idataOutCtrl
						// input_type_conversion : idataOutCtrl[i_0]
						if (&(idataOutCtrl[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> idataOutCtrl_tmp_mem;
							idataOutCtrl_tmp_mem = idataOutCtrl[i_0];
							idataOutCtrl_0_tvout_wrapc_buffer[hls_map_index].range(31, 0) = idataOutCtrl_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_idataOutCtrl_0, "%s\n", (idataOutCtrl_0_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_idataOutCtrl_0, tvout_idataOutCtrl_0);
		}

		tcl_file.set_num(1, &tcl_file.idataOutCtrl_0_depth);
		sprintf(tvout_idataOutCtrl_0, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_idataOutCtrl_0, tvout_idataOutCtrl_0);

		// release memory allocation
		delete [] idataOutCtrl_0_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_idataOutCtrl_1, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_idataOutCtrl_1, tvout_idataOutCtrl_1);

		sc_bv<32>* idataOutCtrl_1_tvout_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: idataOutCtrl_1
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: idataOutCtrl(31, 0)
				{
					// carray: (1) => (1) @ (2)
					for (int i_0 = 1; i_0 <= 1; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : idataOutCtrl[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : idataOutCtrl[0]
						// regulate_c_name       : idataOutCtrl
						// input_type_conversion : idataOutCtrl[i_0]
						if (&(idataOutCtrl[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> idataOutCtrl_tmp_mem;
							idataOutCtrl_tmp_mem = idataOutCtrl[i_0];
							idataOutCtrl_1_tvout_wrapc_buffer[hls_map_index].range(31, 0) = idataOutCtrl_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_idataOutCtrl_1, "%s\n", (idataOutCtrl_1_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_idataOutCtrl_1, tvout_idataOutCtrl_1);
		}

		tcl_file.set_num(1, &tcl_file.idataOutCtrl_1_depth);
		sprintf(tvout_idataOutCtrl_1, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_idataOutCtrl_1, tvout_idataOutCtrl_1);

		// release memory allocation
		delete [] idataOutCtrl_1_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_idataOutCtrl_2, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_idataOutCtrl_2, tvout_idataOutCtrl_2);

		sc_bv<32>* idataOutCtrl_2_tvout_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: idataOutCtrl_2
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: idataOutCtrl(31, 0)
				{
					// carray: (2) => (2) @ (2)
					for (int i_0 = 2; i_0 <= 2; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : idataOutCtrl[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : idataOutCtrl[0]
						// regulate_c_name       : idataOutCtrl
						// input_type_conversion : idataOutCtrl[i_0]
						if (&(idataOutCtrl[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> idataOutCtrl_tmp_mem;
							idataOutCtrl_tmp_mem = idataOutCtrl[i_0];
							idataOutCtrl_2_tvout_wrapc_buffer[hls_map_index].range(31, 0) = idataOutCtrl_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_idataOutCtrl_2, "%s\n", (idataOutCtrl_2_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_idataOutCtrl_2, tvout_idataOutCtrl_2);
		}

		tcl_file.set_num(1, &tcl_file.idataOutCtrl_2_depth);
		sprintf(tvout_idataOutCtrl_2, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_idataOutCtrl_2, tvout_idataOutCtrl_2);

		// release memory allocation
		delete [] idataOutCtrl_2_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_idataOutCtrl_3, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_idataOutCtrl_3, tvout_idataOutCtrl_3);

		sc_bv<32>* idataOutCtrl_3_tvout_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: idataOutCtrl_3
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: idataOutCtrl(31, 0)
				{
					// carray: (3) => (3) @ (2)
					for (int i_0 = 3; i_0 <= 3; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : idataOutCtrl[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : idataOutCtrl[0]
						// regulate_c_name       : idataOutCtrl
						// input_type_conversion : idataOutCtrl[i_0]
						if (&(idataOutCtrl[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> idataOutCtrl_tmp_mem;
							idataOutCtrl_tmp_mem = idataOutCtrl[i_0];
							idataOutCtrl_3_tvout_wrapc_buffer[hls_map_index].range(31, 0) = idataOutCtrl_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_idataOutCtrl_3, "%s\n", (idataOutCtrl_3_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_idataOutCtrl_3, tvout_idataOutCtrl_3);
		}

		tcl_file.set_num(1, &tcl_file.idataOutCtrl_3_depth);
		sprintf(tvout_idataOutCtrl_3, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_idataOutCtrl_3, tvout_idataOutCtrl_3);

		// release memory allocation
		delete [] idataOutCtrl_3_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_fdataOutCtrl_0, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_fdataOutCtrl_0, tvout_fdataOutCtrl_0);

		sc_bv<32>* fdataOutCtrl_0_tvout_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: fdataOutCtrl_0
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: fdataOutCtrl(31, 0)
				{
					// carray: (0) => (0) @ (2)
					for (int i_0 = 0; i_0 <= 0; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : fdataOutCtrl[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : fdataOutCtrl[0]
						// regulate_c_name       : fdataOutCtrl
						// input_type_conversion : *(int*)&fdataOutCtrl[i_0]
						if (&(fdataOutCtrl[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> fdataOutCtrl_tmp_mem;
							fdataOutCtrl_tmp_mem = *(int*)&fdataOutCtrl[i_0];
							fdataOutCtrl_0_tvout_wrapc_buffer[hls_map_index].range(31, 0) = fdataOutCtrl_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_fdataOutCtrl_0, "%s\n", (fdataOutCtrl_0_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_fdataOutCtrl_0, tvout_fdataOutCtrl_0);
		}

		tcl_file.set_num(1, &tcl_file.fdataOutCtrl_0_depth);
		sprintf(tvout_fdataOutCtrl_0, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_fdataOutCtrl_0, tvout_fdataOutCtrl_0);

		// release memory allocation
		delete [] fdataOutCtrl_0_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_fdataOutCtrl_1, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_fdataOutCtrl_1, tvout_fdataOutCtrl_1);

		sc_bv<32>* fdataOutCtrl_1_tvout_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: fdataOutCtrl_1
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: fdataOutCtrl(31, 0)
				{
					// carray: (1) => (1) @ (2)
					for (int i_0 = 1; i_0 <= 1; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : fdataOutCtrl[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : fdataOutCtrl[0]
						// regulate_c_name       : fdataOutCtrl
						// input_type_conversion : *(int*)&fdataOutCtrl[i_0]
						if (&(fdataOutCtrl[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> fdataOutCtrl_tmp_mem;
							fdataOutCtrl_tmp_mem = *(int*)&fdataOutCtrl[i_0];
							fdataOutCtrl_1_tvout_wrapc_buffer[hls_map_index].range(31, 0) = fdataOutCtrl_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_fdataOutCtrl_1, "%s\n", (fdataOutCtrl_1_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_fdataOutCtrl_1, tvout_fdataOutCtrl_1);
		}

		tcl_file.set_num(1, &tcl_file.fdataOutCtrl_1_depth);
		sprintf(tvout_fdataOutCtrl_1, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_fdataOutCtrl_1, tvout_fdataOutCtrl_1);

		// release memory allocation
		delete [] fdataOutCtrl_1_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_fdataOutCtrl_2, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_fdataOutCtrl_2, tvout_fdataOutCtrl_2);

		sc_bv<32>* fdataOutCtrl_2_tvout_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: fdataOutCtrl_2
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: fdataOutCtrl(31, 0)
				{
					// carray: (2) => (2) @ (2)
					for (int i_0 = 2; i_0 <= 2; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : fdataOutCtrl[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : fdataOutCtrl[0]
						// regulate_c_name       : fdataOutCtrl
						// input_type_conversion : *(int*)&fdataOutCtrl[i_0]
						if (&(fdataOutCtrl[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> fdataOutCtrl_tmp_mem;
							fdataOutCtrl_tmp_mem = *(int*)&fdataOutCtrl[i_0];
							fdataOutCtrl_2_tvout_wrapc_buffer[hls_map_index].range(31, 0) = fdataOutCtrl_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_fdataOutCtrl_2, "%s\n", (fdataOutCtrl_2_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_fdataOutCtrl_2, tvout_fdataOutCtrl_2);
		}

		tcl_file.set_num(1, &tcl_file.fdataOutCtrl_2_depth);
		sprintf(tvout_fdataOutCtrl_2, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_fdataOutCtrl_2, tvout_fdataOutCtrl_2);

		// release memory allocation
		delete [] fdataOutCtrl_2_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_fdataOutCtrl_3, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_fdataOutCtrl_3, tvout_fdataOutCtrl_3);

		sc_bv<32>* fdataOutCtrl_3_tvout_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: fdataOutCtrl_3
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: fdataOutCtrl(31, 0)
				{
					// carray: (3) => (3) @ (2)
					for (int i_0 = 3; i_0 <= 3; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : fdataOutCtrl[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : fdataOutCtrl[0]
						// regulate_c_name       : fdataOutCtrl
						// input_type_conversion : *(int*)&fdataOutCtrl[i_0]
						if (&(fdataOutCtrl[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> fdataOutCtrl_tmp_mem;
							fdataOutCtrl_tmp_mem = *(int*)&fdataOutCtrl[i_0];
							fdataOutCtrl_3_tvout_wrapc_buffer[hls_map_index].range(31, 0) = fdataOutCtrl_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_fdataOutCtrl_3, "%s\n", (fdataOutCtrl_3_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_fdataOutCtrl_3, tvout_fdataOutCtrl_3);
		}

		tcl_file.set_num(1, &tcl_file.fdataOutCtrl_3_depth);
		sprintf(tvout_fdataOutCtrl_3, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_fdataOutCtrl_3, tvout_fdataOutCtrl_3);

		// release memory allocation
		delete [] fdataOutCtrl_3_tvout_wrapc_buffer;

		CodeState = DELETE_CHAR_BUFFERS;
		// release memory allocation: "idataInCtrl_0"
		delete [] tvin_idataInCtrl_0;
		// release memory allocation: "idataInCtrl_1"
		delete [] tvin_idataInCtrl_1;
		// release memory allocation: "idataInCtrl_2"
		delete [] tvin_idataInCtrl_2;
		// release memory allocation: "idataInCtrl_3"
		delete [] tvin_idataInCtrl_3;
		// release memory allocation: "fdataInCtrl_0"
		delete [] tvin_fdataInCtrl_0;
		// release memory allocation: "fdataInCtrl_1"
		delete [] tvin_fdataInCtrl_1;
		// release memory allocation: "fdataInCtrl_2"
		delete [] tvin_fdataInCtrl_2;
		// release memory allocation: "fdataInCtrl_3"
		delete [] tvin_fdataInCtrl_3;
		// release memory allocation: "idataOutCtrl_0"
		delete [] tvout_idataOutCtrl_0;
		// release memory allocation: "idataOutCtrl_1"
		delete [] tvout_idataOutCtrl_1;
		// release memory allocation: "idataOutCtrl_2"
		delete [] tvout_idataOutCtrl_2;
		// release memory allocation: "idataOutCtrl_3"
		delete [] tvout_idataOutCtrl_3;
		// release memory allocation: "fdataOutCtrl_0"
		delete [] tvout_fdataOutCtrl_0;
		// release memory allocation: "fdataOutCtrl_1"
		delete [] tvout_fdataOutCtrl_1;
		// release memory allocation: "fdataOutCtrl_2"
		delete [] tvout_fdataOutCtrl_2;
		// release memory allocation: "fdataOutCtrl_3"
		delete [] tvout_fdataOutCtrl_3;

		AESL_transaction++;

		tcl_file.set_num(AESL_transaction , &tcl_file.trans_num);
	}
}

