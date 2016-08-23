// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// ==============================================================

#define AP_INT_MAX_W 32678

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
#include "ap_stream.h"
#include "hls_stream.h"
#include "hls_half.h"

using namespace std;
using namespace sc_core;
using namespace sc_dt;


// [dump_struct_tree [build_nameSpaceTree] dumpedStructList] ---------->


// [dump_enumeration [get_enumeration_list]] ---------->


// wrapc file define: "in1_M_real_V"
#define AUTOTB_TVIN_in1_M_real_V  "../tv/cdatafile/c.complex2DAdder.autotvin_in1_M_real_V.dat"
// wrapc file define: "in1_M_imag_V"
#define AUTOTB_TVIN_in1_M_imag_V  "../tv/cdatafile/c.complex2DAdder.autotvin_in1_M_imag_V.dat"
// wrapc file define: "in2_M_real_V"
#define AUTOTB_TVIN_in2_M_real_V  "../tv/cdatafile/c.complex2DAdder.autotvin_in2_M_real_V.dat"
// wrapc file define: "in2_M_imag_V"
#define AUTOTB_TVIN_in2_M_imag_V  "../tv/cdatafile/c.complex2DAdder.autotvin_in2_M_imag_V.dat"
// wrapc file define: "out_M_real_V"
#define AUTOTB_TVOUT_out_M_real_V  "../tv/cdatafile/c.complex2DAdder.autotvout_out_M_real_V.dat"
#define AUTOTB_TVIN_out_M_real_V  "../tv/cdatafile/c.complex2DAdder.autotvin_out_M_real_V.dat"
// wrapc file define: "out_M_imag_V"
#define AUTOTB_TVOUT_out_M_imag_V  "../tv/cdatafile/c.complex2DAdder.autotvout_out_M_imag_V.dat"
#define AUTOTB_TVIN_out_M_imag_V  "../tv/cdatafile/c.complex2DAdder.autotvin_out_M_imag_V.dat"
// wrapc file define: "ap_return"
#define AUTOTB_TVOUT_ap_return  "../tv/cdatafile/c.complex2DAdder.autotvout_ap_return.dat"

#define INTER_TCL  "../tv/cdatafile/ref.tcl"

// tvout file define: "out_M_real_V"
#define AUTOTB_TVOUT_PC_out_M_real_V  "../tv/rtldatafile/rtl.complex2DAdder.autotvout_out_M_real_V.dat"
// tvout file define: "out_M_imag_V"
#define AUTOTB_TVOUT_PC_out_M_imag_V  "../tv/rtldatafile/rtl.complex2DAdder.autotvout_out_M_imag_V.dat"
// tvout file define: "ap_return"
#define AUTOTB_TVOUT_PC_ap_return  "../tv/rtldatafile/rtl.complex2DAdder.autotvout_ap_return.dat"

class INTER_TCL_FILE {
	public:
		INTER_TCL_FILE(const char* name) {
			mName = name;
			in1_M_real_V_depth = 0;
			in1_M_imag_V_depth = 0;
			in2_M_real_V_depth = 0;
			in2_M_imag_V_depth = 0;
			out_M_real_V_depth = 0;
			out_M_imag_V_depth = 0;
			ap_return_depth = 0;
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
			total_list << "{in1_M_real_V " << in1_M_real_V_depth << "}\n";
			total_list << "{in1_M_imag_V " << in1_M_imag_V_depth << "}\n";
			total_list << "{in2_M_real_V " << in2_M_real_V_depth << "}\n";
			total_list << "{in2_M_imag_V " << in2_M_imag_V_depth << "}\n";
			total_list << "{out_M_real_V " << out_M_real_V_depth << "}\n";
			total_list << "{out_M_imag_V " << out_M_imag_V_depth << "}\n";
			total_list << "{ap_return " << ap_return_depth << "}\n";
			return total_list.str();
		}

		void set_num (int num , int* class_num) {
			(*class_num) = (*class_num) > num ? (*class_num) : num;
		}
	public:
		int in1_M_real_V_depth;
		int in1_M_imag_V_depth;
		int in2_M_real_V_depth;
		int in2_M_imag_V_depth;
		int out_M_real_V_depth;
		int out_M_imag_V_depth;
		int ap_return_depth;
		int trans_num;

	private:
		ofstream mFile;
		const char* mName;
};


#define complex2DAdder AESL_ORIG_DUT_complex2DAdder
extern int complex2DAdder (
std::complex<ap_fixed<32, 8, (ap_q_mode) 5, (ap_o_mode)3, 0> > in1[5],
std::complex<ap_fixed<32, 8, (ap_q_mode) 5, (ap_o_mode)3, 0> > in2[5][3],
std::complex<ap_fixed<32, 8, (ap_q_mode) 5, (ap_o_mode)3, 0> > out[5]);
#undef complex2DAdder

int complex2DAdder (
std::complex<ap_fixed<32, 8, (ap_q_mode) 5, (ap_o_mode)3, 0> > in1[5],
std::complex<ap_fixed<32, 8, (ap_q_mode) 5, (ap_o_mode)3, 0> > in2[5][3],
std::complex<ap_fixed<32, 8, (ap_q_mode) 5, (ap_o_mode)3, 0> > out[5])
{
	fstream wrapc_switch_file_token;
	wrapc_switch_file_token.open(".hls_cosim_wrapc_switch.log");
	int AESL_i;
	if (wrapc_switch_file_token.good())
	{
		static unsigned AESL_transaction_pc = 0;
		string AESL_token;
		string AESL_num;
		static AESL_FILE_HANDLER aesl_fh;

		int AESL_return;

		// output port post check: "out_M_real_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_out_M_real_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_out_M_real_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_out_M_real_V, AESL_token); // data

			sc_bv<32> *out_M_real_V_pc_buffer = new sc_bv<32>[5];
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
							cerr << "@W [SIM-201] RTL produces unknown value 'X' on port 'out_M_real_V', possible cause: There are uninitialized variables in the C design." << endl;
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
							cerr << "@W [SIM-201] RTL produces unknown value 'X' on port 'out_M_real_V', possible cause: There are uninitialized variables in the C design." << endl;
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
					out_M_real_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_out_M_real_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_out_M_real_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: out_M_real_V
				{
					// bitslice(31, 0)
					// {
						// celement: out._M_real.V(31, 0)
						// {
							sc_lv<32>* out__M_real_V_lv0_0_4_1 = new sc_lv<32>[5];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: out._M_real.V(31, 0)
						{
							// carray: (0) => (4) @ (1)
							for (int i_0 = 0; i_0 <= 4; i_0 += 1)
							{
								if (&(out[0].real()) != NULL) // check the null address if the c port is array or others
								{
									out__M_real_V_lv0_0_4_1[hls_map_index++].range(31, 0) = sc_bv<32>(out_M_real_V_pc_buffer[hls_map_index].range(31, 0));
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: out._M_real.V(31, 0)
						{
							// carray: (0) => (4) @ (1)
							for (int i_0 = 0; i_0 <= 4; i_0 += 1)
							{
								// sub                    : i_0
								// ori_name               : out[i_0].real()
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : out[0].real()
								// output_left_conversion : (out[i_0].real()).range()
								// output_type_conversion : (out__M_real_V_lv0_0_4_1[hls_map_index++]).to_string(SC_BIN).c_str()
								if (&(out[0].real()) != NULL) // check the null address if the c port is array or others
								{
									(out[i_0].real()).range() = (out__M_real_V_lv0_0_4_1[hls_map_index++]).to_string(SC_BIN).c_str();
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] out_M_real_V_pc_buffer;
		}

		// output port post check: "out_M_imag_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_out_M_imag_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_out_M_imag_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_out_M_imag_V, AESL_token); // data

			sc_bv<32> *out_M_imag_V_pc_buffer = new sc_bv<32>[5];
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
							cerr << "@W [SIM-201] RTL produces unknown value 'X' on port 'out_M_imag_V', possible cause: There are uninitialized variables in the C design." << endl;
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
							cerr << "@W [SIM-201] RTL produces unknown value 'X' on port 'out_M_imag_V', possible cause: There are uninitialized variables in the C design." << endl;
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
					out_M_imag_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_out_M_imag_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_out_M_imag_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: out_M_imag_V
				{
					// bitslice(31, 0)
					// {
						// celement: out._M_imag.V(31, 0)
						// {
							sc_lv<32>* out__M_imag_V_lv0_0_4_1 = new sc_lv<32>[5];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: out._M_imag.V(31, 0)
						{
							// carray: (0) => (4) @ (1)
							for (int i_0 = 0; i_0 <= 4; i_0 += 1)
							{
								if (&(out[0].imag()) != NULL) // check the null address if the c port is array or others
								{
									out__M_imag_V_lv0_0_4_1[hls_map_index++].range(31, 0) = sc_bv<32>(out_M_imag_V_pc_buffer[hls_map_index].range(31, 0));
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: out._M_imag.V(31, 0)
						{
							// carray: (0) => (4) @ (1)
							for (int i_0 = 0; i_0 <= 4; i_0 += 1)
							{
								// sub                    : i_0
								// ori_name               : out[i_0].imag()
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : out[0].imag()
								// output_left_conversion : (out[i_0].imag()).range()
								// output_type_conversion : (out__M_imag_V_lv0_0_4_1[hls_map_index++]).to_string(SC_BIN).c_str()
								if (&(out[0].imag()) != NULL) // check the null address if the c port is array or others
								{
									(out[i_0].imag()).range() = (out__M_imag_V_lv0_0_4_1[hls_map_index++]).to_string(SC_BIN).c_str();
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] out_M_imag_V_pc_buffer;
		}

		// output port post check: "ap_return"
		aesl_fh.read(AUTOTB_TVOUT_PC_ap_return, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_ap_return, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_ap_return, AESL_token); // data

			sc_bv<32> ap_return_pc_buffer;
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
							cerr << "@W [SIM-201] RTL produces unknown value 'X' on port 'ap_return', possible cause: There are uninitialized variables in the C design." << endl;
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
							cerr << "@W [SIM-201] RTL produces unknown value 'X' on port 'ap_return', possible cause: There are uninitialized variables in the C design." << endl;
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
					ap_return_pc_buffer = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_ap_return, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_ap_return))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: ap_return
				{
					// bitslice(31, 0)
					// {
						// celement: return(31, 0)
						// {
							sc_lv<32> return_lv0_0_1_0;
						// }
					// }

					// bitslice(31, 0)
					{
						// celement: return(31, 0)
						{
							// carray: (0) => (1) @ (0)
							{
								if (&(AESL_return) != NULL) // check the null address if the c port is array or others
								{
									return_lv0_0_1_0.range(31, 0) = sc_bv<32>(ap_return_pc_buffer.range(31, 0));
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						// celement: return(31, 0)
						{
							// carray: (0) => (1) @ (0)
							{
								// sub                    : 
								// ori_name               : AESL_return
								// sub_1st_elem           : 
								// ori_name_1st_elem      : AESL_return
								// output_left_conversion : AESL_return
								// output_type_conversion : (return_lv0_0_1_0).to_uint64()
								if (&(AESL_return) != NULL) // check the null address if the c port is array or others
								{
									AESL_return = (return_lv0_0_1_0).to_uint64();
								}
							}
						}
					}
				}
			}
		}

		AESL_transaction_pc++;

		return AESL_return;
	}
	else
	{
		static unsigned AESL_transaction;

		static AESL_FILE_HANDLER aesl_fh;

		// "in1_M_real_V"
		char* tvin_in1_M_real_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_in1_M_real_V);

		// "in1_M_imag_V"
		char* tvin_in1_M_imag_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_in1_M_imag_V);

		// "in2_M_real_V"
		char* tvin_in2_M_real_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_in2_M_real_V);

		// "in2_M_imag_V"
		char* tvin_in2_M_imag_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_in2_M_imag_V);

		// "out_M_real_V"
		char* tvin_out_M_real_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_out_M_real_V);
		char* tvout_out_M_real_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_out_M_real_V);

		// "out_M_imag_V"
		char* tvin_out_M_imag_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_out_M_imag_V);
		char* tvout_out_M_imag_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_out_M_imag_V);

		// "ap_return"
		char* tvout_ap_return = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_ap_return);

		static INTER_TCL_FILE tcl_file(INTER_TCL);
		int leading_zero;

		// [[transaction]]
		sprintf(tvin_in1_M_real_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_in1_M_real_V, tvin_in1_M_real_V);

		sc_bv<32>* in1_M_real_V_tvin_wrapc_buffer = new sc_bv<32>[5];

		// RTL Name: in1_M_real_V
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: in1._M_real.V(31, 0)
				{
					// carray: (0) => (4) @ (1)
					for (int i_0 = 0; i_0 <= 4; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : in1[i_0].real()
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : in1[0].real()
						// regulate_c_name       : in1__M_real_V
						// input_type_conversion : (in1[i_0].real()).range().to_string(SC_BIN).c_str()
						if (&(in1[0].real()) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> in1__M_real_V_tmp_mem;
							in1__M_real_V_tmp_mem = (in1[i_0].real()).range().to_string(SC_BIN).c_str();
							in1_M_real_V_tvin_wrapc_buffer[hls_map_index++].range(31, 0) = in1__M_real_V_tmp_mem.range(31, 0);
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 5; i++)
		{
			sprintf(tvin_in1_M_real_V, "%s\n", (in1_M_real_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_in1_M_real_V, tvin_in1_M_real_V);
		}

		tcl_file.set_num(5, &tcl_file.in1_M_real_V_depth);
		sprintf(tvin_in1_M_real_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_in1_M_real_V, tvin_in1_M_real_V);

		// release memory allocation
		delete [] in1_M_real_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_in1_M_imag_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_in1_M_imag_V, tvin_in1_M_imag_V);

		sc_bv<32>* in1_M_imag_V_tvin_wrapc_buffer = new sc_bv<32>[5];

		// RTL Name: in1_M_imag_V
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: in1._M_imag.V(31, 0)
				{
					// carray: (0) => (4) @ (1)
					for (int i_0 = 0; i_0 <= 4; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : in1[i_0].imag()
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : in1[0].imag()
						// regulate_c_name       : in1__M_imag_V
						// input_type_conversion : (in1[i_0].imag()).range().to_string(SC_BIN).c_str()
						if (&(in1[0].imag()) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> in1__M_imag_V_tmp_mem;
							in1__M_imag_V_tmp_mem = (in1[i_0].imag()).range().to_string(SC_BIN).c_str();
							in1_M_imag_V_tvin_wrapc_buffer[hls_map_index++].range(31, 0) = in1__M_imag_V_tmp_mem.range(31, 0);
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 5; i++)
		{
			sprintf(tvin_in1_M_imag_V, "%s\n", (in1_M_imag_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_in1_M_imag_V, tvin_in1_M_imag_V);
		}

		tcl_file.set_num(5, &tcl_file.in1_M_imag_V_depth);
		sprintf(tvin_in1_M_imag_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_in1_M_imag_V, tvin_in1_M_imag_V);

		// release memory allocation
		delete [] in1_M_imag_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_in2_M_real_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_in2_M_real_V, tvin_in2_M_real_V);

		sc_bv<32>* in2_M_real_V_tvin_wrapc_buffer = new sc_bv<32>[15];

		// RTL Name: in2_M_real_V
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: in2._M_real.V(31, 0)
				{
					// carray: (0) => (4) @ (1)
					for (int i_0 = 0; i_0 <= 4; i_0 += 1)
					{
						// carray: (0) => (2) @ (1)
						for (int i_1 = 0; i_1 <= 2; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : in2[i_0][i_1].real()
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : in2[0][0].real()
							// regulate_c_name       : in2__M_real_V
							// input_type_conversion : (in2[i_0][i_1].real()).range().to_string(SC_BIN).c_str()
							if (&(in2[0][0].real()) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<32> in2__M_real_V_tmp_mem;
								in2__M_real_V_tmp_mem = (in2[i_0][i_1].real()).range().to_string(SC_BIN).c_str();
								in2_M_real_V_tvin_wrapc_buffer[hls_map_index++].range(31, 0) = in2__M_real_V_tmp_mem.range(31, 0);
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 15; i++)
		{
			sprintf(tvin_in2_M_real_V, "%s\n", (in2_M_real_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_in2_M_real_V, tvin_in2_M_real_V);
		}

		tcl_file.set_num(15, &tcl_file.in2_M_real_V_depth);
		sprintf(tvin_in2_M_real_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_in2_M_real_V, tvin_in2_M_real_V);

		// release memory allocation
		delete [] in2_M_real_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_in2_M_imag_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_in2_M_imag_V, tvin_in2_M_imag_V);

		sc_bv<32>* in2_M_imag_V_tvin_wrapc_buffer = new sc_bv<32>[15];

		// RTL Name: in2_M_imag_V
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: in2._M_imag.V(31, 0)
				{
					// carray: (0) => (4) @ (1)
					for (int i_0 = 0; i_0 <= 4; i_0 += 1)
					{
						// carray: (0) => (2) @ (1)
						for (int i_1 = 0; i_1 <= 2; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : in2[i_0][i_1].imag()
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : in2[0][0].imag()
							// regulate_c_name       : in2__M_imag_V
							// input_type_conversion : (in2[i_0][i_1].imag()).range().to_string(SC_BIN).c_str()
							if (&(in2[0][0].imag()) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<32> in2__M_imag_V_tmp_mem;
								in2__M_imag_V_tmp_mem = (in2[i_0][i_1].imag()).range().to_string(SC_BIN).c_str();
								in2_M_imag_V_tvin_wrapc_buffer[hls_map_index++].range(31, 0) = in2__M_imag_V_tmp_mem.range(31, 0);
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 15; i++)
		{
			sprintf(tvin_in2_M_imag_V, "%s\n", (in2_M_imag_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_in2_M_imag_V, tvin_in2_M_imag_V);
		}

		tcl_file.set_num(15, &tcl_file.in2_M_imag_V_depth);
		sprintf(tvin_in2_M_imag_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_in2_M_imag_V, tvin_in2_M_imag_V);

		// release memory allocation
		delete [] in2_M_imag_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_out_M_real_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_out_M_real_V, tvin_out_M_real_V);

		sc_bv<32>* out_M_real_V_tvin_wrapc_buffer = new sc_bv<32>[5];

		// RTL Name: out_M_real_V
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: out._M_real.V(31, 0)
				{
					// carray: (0) => (4) @ (1)
					for (int i_0 = 0; i_0 <= 4; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : out[i_0].real()
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : out[0].real()
						// regulate_c_name       : out__M_real_V
						// input_type_conversion : (out[i_0].real()).range().to_string(SC_BIN).c_str()
						if (&(out[0].real()) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> out__M_real_V_tmp_mem;
							out__M_real_V_tmp_mem = (out[i_0].real()).range().to_string(SC_BIN).c_str();
							out_M_real_V_tvin_wrapc_buffer[hls_map_index++].range(31, 0) = out__M_real_V_tmp_mem.range(31, 0);
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 5; i++)
		{
			sprintf(tvin_out_M_real_V, "%s\n", (out_M_real_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_out_M_real_V, tvin_out_M_real_V);
		}

		tcl_file.set_num(5, &tcl_file.out_M_real_V_depth);
		sprintf(tvin_out_M_real_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_out_M_real_V, tvin_out_M_real_V);

		// release memory allocation
		delete [] out_M_real_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_out_M_imag_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_out_M_imag_V, tvin_out_M_imag_V);

		sc_bv<32>* out_M_imag_V_tvin_wrapc_buffer = new sc_bv<32>[5];

		// RTL Name: out_M_imag_V
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: out._M_imag.V(31, 0)
				{
					// carray: (0) => (4) @ (1)
					for (int i_0 = 0; i_0 <= 4; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : out[i_0].imag()
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : out[0].imag()
						// regulate_c_name       : out__M_imag_V
						// input_type_conversion : (out[i_0].imag()).range().to_string(SC_BIN).c_str()
						if (&(out[0].imag()) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> out__M_imag_V_tmp_mem;
							out__M_imag_V_tmp_mem = (out[i_0].imag()).range().to_string(SC_BIN).c_str();
							out_M_imag_V_tvin_wrapc_buffer[hls_map_index++].range(31, 0) = out__M_imag_V_tmp_mem.range(31, 0);
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 5; i++)
		{
			sprintf(tvin_out_M_imag_V, "%s\n", (out_M_imag_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_out_M_imag_V, tvin_out_M_imag_V);
		}

		tcl_file.set_num(5, &tcl_file.out_M_imag_V_depth);
		sprintf(tvin_out_M_imag_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_out_M_imag_V, tvin_out_M_imag_V);

		// release memory allocation
		delete [] out_M_imag_V_tvin_wrapc_buffer;

// [call_c_dut] ---------->

		int AESL_return = AESL_ORIG_DUT_complex2DAdder(in1, in2, out);


		// [[transaction]]
		sprintf(tvout_out_M_real_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_out_M_real_V, tvout_out_M_real_V);

		sc_bv<32>* out_M_real_V_tvout_wrapc_buffer = new sc_bv<32>[5];

		// RTL Name: out_M_real_V
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: out._M_real.V(31, 0)
				{
					// carray: (0) => (4) @ (1)
					for (int i_0 = 0; i_0 <= 4; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : out[i_0].real()
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : out[0].real()
						// regulate_c_name       : out__M_real_V
						// input_type_conversion : (out[i_0].real()).range().to_string(SC_BIN).c_str()
						if (&(out[0].real()) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> out__M_real_V_tmp_mem;
							out__M_real_V_tmp_mem = (out[i_0].real()).range().to_string(SC_BIN).c_str();
							out_M_real_V_tvout_wrapc_buffer[hls_map_index++].range(31, 0) = out__M_real_V_tmp_mem.range(31, 0);
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 5; i++)
		{
			sprintf(tvout_out_M_real_V, "%s\n", (out_M_real_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_out_M_real_V, tvout_out_M_real_V);
		}

		tcl_file.set_num(5, &tcl_file.out_M_real_V_depth);
		sprintf(tvout_out_M_real_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_out_M_real_V, tvout_out_M_real_V);

		// release memory allocation
		delete [] out_M_real_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_out_M_imag_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_out_M_imag_V, tvout_out_M_imag_V);

		sc_bv<32>* out_M_imag_V_tvout_wrapc_buffer = new sc_bv<32>[5];

		// RTL Name: out_M_imag_V
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: out._M_imag.V(31, 0)
				{
					// carray: (0) => (4) @ (1)
					for (int i_0 = 0; i_0 <= 4; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : out[i_0].imag()
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : out[0].imag()
						// regulate_c_name       : out__M_imag_V
						// input_type_conversion : (out[i_0].imag()).range().to_string(SC_BIN).c_str()
						if (&(out[0].imag()) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> out__M_imag_V_tmp_mem;
							out__M_imag_V_tmp_mem = (out[i_0].imag()).range().to_string(SC_BIN).c_str();
							out_M_imag_V_tvout_wrapc_buffer[hls_map_index++].range(31, 0) = out__M_imag_V_tmp_mem.range(31, 0);
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 5; i++)
		{
			sprintf(tvout_out_M_imag_V, "%s\n", (out_M_imag_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_out_M_imag_V, tvout_out_M_imag_V);
		}

		tcl_file.set_num(5, &tcl_file.out_M_imag_V_depth);
		sprintf(tvout_out_M_imag_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_out_M_imag_V, tvout_out_M_imag_V);

		// release memory allocation
		delete [] out_M_imag_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_ap_return, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_ap_return, tvout_ap_return);

		sc_bv<32> ap_return_tvout_wrapc_buffer;

		// RTL Name: ap_return
		{
			// bitslice(31, 0)
			{
				// celement: return(31, 0)
				{
					// carray: (0) => (1) @ (0)
					{
						// sub                   : 
						// ori_name              : AESL_return
						// sub_1st_elem          : 
						// ori_name_1st_elem     : AESL_return
						// regulate_c_name       : return
						// input_type_conversion : AESL_return
						if (&(AESL_return) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> return_tmp_mem;
							return_tmp_mem = AESL_return;
							ap_return_tvout_wrapc_buffer.range(31, 0) = return_tmp_mem.range(31, 0);
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_ap_return, "%s\n", (ap_return_tvout_wrapc_buffer).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_ap_return, tvout_ap_return);
		}

		tcl_file.set_num(1, &tcl_file.ap_return_depth);
		sprintf(tvout_ap_return, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_ap_return, tvout_ap_return);

		// release memory allocation: "in1_M_real_V"
		delete [] tvin_in1_M_real_V;
		// release memory allocation: "in1_M_imag_V"
		delete [] tvin_in1_M_imag_V;
		// release memory allocation: "in2_M_real_V"
		delete [] tvin_in2_M_real_V;
		// release memory allocation: "in2_M_imag_V"
		delete [] tvin_in2_M_imag_V;
		// release memory allocation: "out_M_real_V"
		delete [] tvout_out_M_real_V;
		delete [] tvin_out_M_real_V;
		// release memory allocation: "out_M_imag_V"
		delete [] tvout_out_M_imag_V;
		delete [] tvin_out_M_imag_V;
		// release memory allocation: "ap_return"
		delete [] tvout_ap_return;

		AESL_transaction++;

		tcl_file.set_num(AESL_transaction , &tcl_file.trans_num);

		return AESL_return;
	}
}

