// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

 `timescale 1ns/1ps


`define AUTOTB_DUT      TopAdder
`define AUTOTB_DUT_INST AESL_inst_TopAdder
`define AUTOTB_TOP      apatb_TopAdder_top
`define AUTOTB_LAT_RESULT_FILE "TopAdder.result.lat.rb"
`define AUTOTB_PER_RESULT_TRANS_FILE "TopAdder.performance.result.transaction.xml"
`define AUTOTB_TOP_INST AESL_inst_apatb_TopAdder_top
`define AUTOTB_MAX_ALLOW_LATENCY  15000000
`define AUTOTB_TRANSACTION_NUM  1
`define AUTOTB_CLOCK_PERIOD_DIV2 5.00
`define LENGTH_output_M_real 3
`define LENGTH_output_M_imag 3
`define LENGTH_input1_M_real 15
`define LENGTH_input1_M_imag 15
`define LENGTH_input2_M_real 3
`define LENGTH_input2_M_imag 3
`define LENGTH_ap_return 1

`define   AESL_DEPTH_output_M_real 1
`define   AESL_DEPTH_output_M_imag 1
`define   AESL_DEPTH_input1_M_real 1
`define   AESL_DEPTH_input1_M_imag 1
`define   AESL_DEPTH_input2_M_real 1
`define   AESL_DEPTH_input2_M_imag 1
`define AUTOTB_TVIN_input1_M_real  "../tv/cdatafile/c.TopAdder.autotvin_input1_M_real.dat"
`define AUTOTB_TVIN_input1_M_imag  "../tv/cdatafile/c.TopAdder.autotvin_input1_M_imag.dat"
`define AUTOTB_TVIN_input2_M_real  "../tv/cdatafile/c.TopAdder.autotvin_input2_M_real.dat"
`define AUTOTB_TVIN_input2_M_imag  "../tv/cdatafile/c.TopAdder.autotvin_input2_M_imag.dat"
`define AUTOTB_TVIN_input1_M_real_out_wrapc  "../tv/rtldatafile/rtl.TopAdder.autotvin_input1_M_real.dat"
`define AUTOTB_TVIN_input1_M_imag_out_wrapc  "../tv/rtldatafile/rtl.TopAdder.autotvin_input1_M_imag.dat"
`define AUTOTB_TVIN_input2_M_real_out_wrapc  "../tv/rtldatafile/rtl.TopAdder.autotvin_input2_M_real.dat"
`define AUTOTB_TVIN_input2_M_imag_out_wrapc  "../tv/rtldatafile/rtl.TopAdder.autotvin_input2_M_imag.dat"
`define AUTOTB_TVOUT_output_M_real  "../tv/cdatafile/c.TopAdder.autotvout_output_M_real.dat"
`define AUTOTB_TVOUT_output_M_imag  "../tv/cdatafile/c.TopAdder.autotvout_output_M_imag.dat"
`define AUTOTB_TVOUT_ap_return  "../tv/cdatafile/c.TopAdder.autotvout_ap_return.dat"
`define AUTOTB_TVOUT_output_M_real_out_wrapc  "../tv/rtldatafile/rtl.TopAdder.autotvout_output_M_real.dat"
`define AUTOTB_TVOUT_output_M_imag_out_wrapc  "../tv/rtldatafile/rtl.TopAdder.autotvout_output_M_imag.dat"
`define AUTOTB_TVOUT_ap_return_out_wrapc  "../tv/rtldatafile/rtl.TopAdder.autotvout_ap_return.dat"

module `AUTOTB_TOP;

task read_token;
    input integer fp;
    output reg [199 : 0] token;
    reg [7:0] c;
    reg intoken;
    reg done;
    begin
        token = "";
        intoken = 0;
        done = 0;
        while (!done) begin
            c = $fgetc(fp);
            if (c == 8'hff) begin   // EOF
                done = 1;
            end
            else if (c == " " || c == "\011" || c == "\012" || c == "\015") begin   // blank
                if (intoken) begin
                    done = 1;
                end
            end
            else begin              // valid character
                intoken = 1;
                token = (token << 8) | c;
            end
        end
    end
endtask

reg AESL_clock;
reg rst;
reg start;
reg ce;
reg continue;
wire AESL_start;
wire AESL_reset;
wire AESL_ce;
wire AESL_ready;
wire AESL_idle;
wire AESL_continue;
wire AESL_done;
reg AESL_done_delay = 0;
reg AESL_done_delay2 = 0;
reg AESL_ready_delay = 0;
wire ready;
wire ready_wire;
reg [31 : 0] AESL_mLatCnterIn [0 : `AUTOTB_TRANSACTION_NUM + 1];
reg [31 : 0] AESL_mLatCnterIn_addr;
reg [31 : 0] AESL_mLatCnterOut [0 : `AUTOTB_TRANSACTION_NUM + 1];
reg [31 : 0] AESL_mLatCnterOut_addr ;
reg [31 : 0] AESL_clk_counter ;
reg [5 - 1 : 0] AESL_clk_ready[0 : `AUTOTB_TRANSACTION_NUM + 1];
reg [5 - 1 : 0] AESL_clk_done[0 : `AUTOTB_TRANSACTION_NUM + 1];

reg reported_stuck = 0;
reg reported_stuck_cnt = 0;
wire [7 : 0] AXILiteS_AWADDR;
wire  AXILiteS_AWVALID;
wire  AXILiteS_AWREADY;
wire  AXILiteS_WVALID;
wire  AXILiteS_WREADY;
wire [31 : 0] AXILiteS_WDATA;
wire [3 : 0] AXILiteS_WSTRB;
wire [7 : 0] AXILiteS_ARADDR;
wire  AXILiteS_ARVALID;
wire  AXILiteS_ARREADY;
wire  AXILiteS_RVALID;
wire  AXILiteS_RREADY;
wire [31 : 0] AXILiteS_RDATA;
wire [1 : 0] AXILiteS_RRESP;
wire  AXILiteS_BVALID;
wire  AXILiteS_BREADY;
wire [1 : 0] AXILiteS_BRESP;
wire  interrupt;
integer done_cnt = 0;
integer AESL_ready_cnt = 0;
integer ready_cnt = 0;
reg ready_initial;
reg ready_initial_n;
reg ready_last_n;
reg ready_delay_last_n;
reg done_delay_last_n;
reg interface_done = 0;
wire AXILiteS_read_data_finish;
wire AXILiteS_write_data_finish;
wire AESL_slave_start;
wire AESL_slave_write_start_in;
wire AESL_slave_write_start_finish;
reg AESL_slave_ready;
wire AESL_slave_output_done;
reg ready_rise = 0;
reg start_rise = 0;
reg slave_start_status = 0;
reg slave_done_status = 0;

`AUTOTB_DUT `AUTOTB_DUT_INST(
	.s_axi_AXILiteS_AWADDR(AXILiteS_AWADDR),
	.s_axi_AXILiteS_AWVALID(AXILiteS_AWVALID),
	.s_axi_AXILiteS_AWREADY(AXILiteS_AWREADY),
	.s_axi_AXILiteS_WVALID(AXILiteS_WVALID),
	.s_axi_AXILiteS_WREADY(AXILiteS_WREADY),
	.s_axi_AXILiteS_WDATA(AXILiteS_WDATA),
	.s_axi_AXILiteS_WSTRB(AXILiteS_WSTRB),
	.s_axi_AXILiteS_ARADDR(AXILiteS_ARADDR),
	.s_axi_AXILiteS_ARVALID(AXILiteS_ARVALID),
	.s_axi_AXILiteS_ARREADY(AXILiteS_ARREADY),
	.s_axi_AXILiteS_RVALID(AXILiteS_RVALID),
	.s_axi_AXILiteS_RREADY(AXILiteS_RREADY),
	.s_axi_AXILiteS_RDATA(AXILiteS_RDATA),
	.s_axi_AXILiteS_RRESP(AXILiteS_RRESP),
	.s_axi_AXILiteS_BVALID(AXILiteS_BVALID),
	.s_axi_AXILiteS_BREADY(AXILiteS_BREADY),
	.s_axi_AXILiteS_BRESP(AXILiteS_BRESP),
	.ap_clk(ap_clk),
	.ap_rst_n(ap_rst_n),
	.interrupt(interrupt));

// Assignment for control signal
assign ap_clk = AESL_clock;
assign ap_rst_n = AESL_reset;
assign ap_rst_n_n = ~AESL_reset;
assign AESL_reset = rst;
assign AESL_start = start;
assign AESL_ce = ce;
assign AESL_continue = continue;
  assign AESL_slave_write_start_in = slave_start_status  & AXILiteS_write_data_finish;
  assign AESL_slave_start = AESL_slave_write_start_finish;
  assign AESL_done = slave_done_status  & AXILiteS_read_data_finish;

always @(posedge AESL_clock)
begin
    if(AESL_reset === 0)
    begin
        slave_start_status <= 1;
    end
    else begin
        if (AESL_start == 1 ) begin
            start_rise = 1;
        end
        if (start_rise == 1 && AESL_done == 1 ) begin
            slave_start_status <= 1;
        end
        if (AESL_slave_write_start_in == 1) begin 
            slave_start_status <= 0;
            start_rise = 0;
        end
    end
end

always @(posedge AESL_clock)
begin
    if(AESL_reset === 0)
    begin
        AESL_slave_ready <= 0;
        ready_rise = 0;
    end
    else begin
        if (AESL_ready == 1 ) begin
            ready_rise = 1;
        end
        if (ready_rise == 1 && AESL_done_delay == 1 ) begin
            AESL_slave_ready <= 1;
        end
        if (AESL_slave_ready == 1) begin 
            AESL_slave_ready <= 0;
            ready_rise = 0;
        end
    end
end

always @ (posedge AESL_clock)
begin
    if (AESL_done == 1) begin
        slave_done_status <= 0;
    end
    else if (AESL_slave_output_done == 1 ) begin
        slave_done_status <= 1;
    end
end






AESL_axi_slave_AXILiteS AESL_AXI_SLAVE_AXILiteS(
    .clk   (AESL_clock),
    .reset (AESL_reset),
    .TRAN_s_axi_AXILiteS_AWADDR (AXILiteS_AWADDR),
    .TRAN_s_axi_AXILiteS_AWVALID (AXILiteS_AWVALID),
    .TRAN_s_axi_AXILiteS_AWREADY (AXILiteS_AWREADY),
    .TRAN_s_axi_AXILiteS_WVALID (AXILiteS_WVALID),
    .TRAN_s_axi_AXILiteS_WREADY (AXILiteS_WREADY),
    .TRAN_s_axi_AXILiteS_WDATA (AXILiteS_WDATA),
    .TRAN_s_axi_AXILiteS_WSTRB (AXILiteS_WSTRB),
    .TRAN_s_axi_AXILiteS_ARADDR (AXILiteS_ARADDR),
    .TRAN_s_axi_AXILiteS_ARVALID (AXILiteS_ARVALID),
    .TRAN_s_axi_AXILiteS_ARREADY (AXILiteS_ARREADY),
    .TRAN_s_axi_AXILiteS_RVALID (AXILiteS_RVALID),
    .TRAN_s_axi_AXILiteS_RREADY (AXILiteS_RREADY),
    .TRAN_s_axi_AXILiteS_RDATA (AXILiteS_RDATA),
    .TRAN_s_axi_AXILiteS_RRESP (AXILiteS_RRESP),
    .TRAN_s_axi_AXILiteS_BVALID (AXILiteS_BVALID),
    .TRAN_s_axi_AXILiteS_BREADY (AXILiteS_BREADY),
    .TRAN_s_axi_AXILiteS_BRESP (AXILiteS_BRESP),
    .TRAN_AXILiteS_read_data_finish(AXILiteS_read_data_finish),
    .TRAN_AXILiteS_write_data_finish(AXILiteS_write_data_finish),
    .TRAN_AXILiteS_ready_out (AESL_ready),
    .TRAN_AXILiteS_ready_in (AESL_slave_ready),
    .TRAN_AXILiteS_done_out (AESL_slave_output_done),
    .TRAN_AXILiteS_idle_out (AESL_idle),
    .TRAN_AXILiteS_write_start_in     (AESL_slave_write_start_in),
    .TRAN_AXILiteS_write_start_finish (AESL_slave_write_start_finish),
    .TRAN_AXILiteS_transaction_done_in (AESL_done_delay),
    .TRAN_AXILiteS_interrupt  (interrupt),
    .TRAN_AXILiteS_start_in  (AESL_slave_start)
);


reg dump_tvout_finish_ap_return;

initial begin : dump_tvout_runtime_sign_ap_return
	integer fp;
	dump_tvout_finish_ap_return = 0;
	fp = $fopen(`AUTOTB_TVOUT_ap_return_out_wrapc, "w");
	if (fp == 0) begin
		$display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_ap_return_out_wrapc);
		$display("ERROR: Simulation using HLS TB failed.");
		$finish;
	end
	$fdisplay(fp,"[[[runtime]]]");
	$fclose(fp);
	wait (done_cnt == `AUTOTB_TRANSACTION_NUM);
	// last transaction is saved at negedge right after last done
	@ (posedge AESL_clock);
	@ (posedge AESL_clock);
	@ (posedge AESL_clock);
	fp = $fopen(`AUTOTB_TVOUT_ap_return_out_wrapc, "a");
	if (fp == 0) begin
		$display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_ap_return_out_wrapc);
		$display("ERROR: Simulation using HLS TB failed.");
		$finish;
	end
	$fdisplay(fp,"[[[/runtime]]]");
	$fclose(fp);
	dump_tvout_finish_ap_return = 1;
end

initial begin : generate_AESL_ready_cnt_proc
    AESL_ready_cnt = 0;
    wait(AESL_reset === 1);
    while(AESL_ready_cnt != `AUTOTB_TRANSACTION_NUM) begin
        while(AESL_ready !== 1) begin
            @(posedge AESL_clock);
            # 0.4;
        end
        @(negedge AESL_clock);
        AESL_ready_cnt = AESL_ready_cnt + 1;
        @(posedge AESL_clock);
        # 0.4;
    end
end

	event next_trigger_ready_cnt;
	
	initial begin : gen_ready_cnt
		ready_cnt = 0;
		wait (AESL_reset === 1);
		forever begin
			@ (posedge AESL_clock);
			if (ready == 1) begin
				if (ready_cnt < `AUTOTB_TRANSACTION_NUM) begin
					ready_cnt = ready_cnt + 1;
				end
			end
			-> next_trigger_ready_cnt;
		end
	end
	
	wire all_finish = (done_cnt == `AUTOTB_TRANSACTION_NUM);
	
	// done_cnt
	always @ (posedge AESL_clock) begin
		if (~AESL_reset) begin
			done_cnt <= 0;
		end else begin
			if (AESL_done == 1) begin
				if (done_cnt < `AUTOTB_TRANSACTION_NUM) begin
					done_cnt <= done_cnt + 1;
				end
			end
		end
	end
	
	initial begin : finish_simulation
		wait (all_finish == 1);
		// last transaction is saved at negedge right after last done
		@ (posedge AESL_clock);
		@ (posedge AESL_clock);
		@ (posedge AESL_clock);
		@ (posedge AESL_clock);
		$finish;
	end
	
initial begin
    AESL_clock = 0;
    forever #`AUTOTB_CLOCK_PERIOD_DIV2 AESL_clock = ~AESL_clock;
end


reg end_input1_M_real;
reg [31:0] size_input1_M_real;
reg end_input1_M_imag;
reg [31:0] size_input1_M_imag;
reg end_input2_M_real;
reg [31:0] size_input2_M_real;
reg end_input2_M_imag;
reg [31:0] size_input2_M_imag;
reg end_output_M_real;
reg [31:0] size_output_M_real;
reg end_output_M_imag;
reg [31:0] size_output_M_imag;
reg end_ap_return;
reg [31:0] size_ap_return;

initial begin : initial_process
    integer rand;
    rst = 0;
    # 100;
	  repeat(3) @(posedge AESL_clock);
    rst = 1;
end

initial begin : start_process
	integer rand;
	start = 0;
	ce = 1;
	wait (AESL_reset === 1);
	@ (posedge AESL_clock);
	start = 1;
	while (ready_cnt < `AUTOTB_TRANSACTION_NUM + 1) begin
		@ (posedge AESL_clock);
	end
	start = 0;
end

always @(AESL_done)
begin
    continue = AESL_done;
end

initial begin : ready_initial_process
    ready_initial = 0;
    wait (AESL_start === 1);
    ready_initial = 1;
    @(posedge AESL_clock);
    ready_initial = 0;
end

always @(posedge AESL_clock)
begin
    if(AESL_reset === 0)
      AESL_ready_delay = 0;
  else
      AESL_ready_delay = AESL_ready;
end
initial begin : ready_last_n_process
  ready_last_n = 1;
  wait(ready_cnt == `AUTOTB_TRANSACTION_NUM)
  @(posedge AESL_clock);
  ready_last_n <= 0;
end

always @(posedge AESL_clock)
begin
    if(AESL_reset === 0)
      ready_delay_last_n = 0;
  else
      ready_delay_last_n <= ready_last_n;
end
assign ready = (ready_initial | AESL_ready_delay);
assign ready_wire = ready_initial | AESL_ready_delay;
initial begin : done_delay_last_n_process
  done_delay_last_n = 1;
  while(done_cnt < `AUTOTB_TRANSACTION_NUM)
      @(posedge AESL_clock);
  # 0.1;
  done_delay_last_n = 0;
end

always @(posedge AESL_clock)
begin
    if(AESL_reset === 0)
  begin
      AESL_done_delay <= 0;
      AESL_done_delay2 <= 0;
  end
  else begin
      AESL_done_delay <= AESL_done & done_delay_last_n;
      AESL_done_delay2 <= AESL_done_delay;
  end
end
always @(posedge AESL_clock)
begin
    if(AESL_reset === 0)
      interface_done = 0;
  else begin
      # 0.01;
      if(ready === 1 && ready_cnt > 0 && ready_cnt < `AUTOTB_TRANSACTION_NUM)
          interface_done = 1;
      else if(AESL_done_delay === 1 && done_cnt == `AUTOTB_TRANSACTION_NUM)
          interface_done = 1;
      else
          interface_done = 0;
  end
end

reg dump_tvout_finish_output_M_real;

initial begin : dump_tvout_runtime_sign_output_M_real
	integer fp;
	dump_tvout_finish_output_M_real = 0;
	fp = $fopen(`AUTOTB_TVOUT_output_M_real_out_wrapc, "w");
	if (fp == 0) begin
		$display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_output_M_real_out_wrapc);
		$display("ERROR: Simulation using HLS TB failed.");
		$finish;
	end
	$fdisplay(fp,"[[[runtime]]]");
	$fclose(fp);
	wait (done_cnt == `AUTOTB_TRANSACTION_NUM);
	// last transaction is saved at negedge right after last done
	@ (posedge AESL_clock);
	@ (posedge AESL_clock);
	@ (posedge AESL_clock);
	fp = $fopen(`AUTOTB_TVOUT_output_M_real_out_wrapc, "a");
	if (fp == 0) begin
		$display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_output_M_real_out_wrapc);
		$display("ERROR: Simulation using HLS TB failed.");
		$finish;
	end
	$fdisplay(fp,"[[[/runtime]]]");
	$fclose(fp);
	dump_tvout_finish_output_M_real = 1;
end


reg dump_tvout_finish_output_M_imag;

initial begin : dump_tvout_runtime_sign_output_M_imag
	integer fp;
	dump_tvout_finish_output_M_imag = 0;
	fp = $fopen(`AUTOTB_TVOUT_output_M_imag_out_wrapc, "w");
	if (fp == 0) begin
		$display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_output_M_imag_out_wrapc);
		$display("ERROR: Simulation using HLS TB failed.");
		$finish;
	end
	$fdisplay(fp,"[[[runtime]]]");
	$fclose(fp);
	wait (done_cnt == `AUTOTB_TRANSACTION_NUM);
	// last transaction is saved at negedge right after last done
	@ (posedge AESL_clock);
	@ (posedge AESL_clock);
	@ (posedge AESL_clock);
	fp = $fopen(`AUTOTB_TVOUT_output_M_imag_out_wrapc, "a");
	if (fp == 0) begin
		$display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_output_M_imag_out_wrapc);
		$display("ERROR: Simulation using HLS TB failed.");
		$finish;
	end
	$fdisplay(fp,"[[[/runtime]]]");
	$fclose(fp);
	dump_tvout_finish_output_M_imag = 1;
end

always @ (negedge AESL_clock) begin
    if(AESL_reset === 0)
    begin
        AESL_clk_counter <= 0;
    end 
    else begin
        AESL_clk_counter = AESL_clk_counter + 1;
    end
end

always @ (posedge AESL_clock or negedge AESL_reset) begin
	if (~AESL_reset) begin
		AESL_mLatCnterOut_addr = 0;
		AESL_mLatCnterOut[AESL_mLatCnterOut_addr] = AESL_clk_counter + 1;
	end else if (AESL_done && AESL_mLatCnterOut_addr < `AUTOTB_TRANSACTION_NUM + 1) begin
		AESL_mLatCnterOut[AESL_mLatCnterOut_addr] = AESL_clk_counter;
		AESL_mLatCnterOut_addr = AESL_mLatCnterOut_addr + 1;
	end
end
always @ (posedge AESL_clock or negedge AESL_reset) begin
	if (~AESL_reset) begin
		AESL_mLatCnterIn_addr = 0;
	end else if (AESL_slave_write_start_finish && AESL_mLatCnterIn_addr < `AUTOTB_TRANSACTION_NUM + 1) begin
		AESL_mLatCnterIn[AESL_mLatCnterIn_addr] = AESL_clk_counter;
		AESL_mLatCnterIn_addr = AESL_mLatCnterIn_addr + 1;
	end
end

initial begin : performance_check
	integer transaction_counter;
	integer i;
	integer fp;

	integer latthistime;
	integer lattotal;
	integer latmax;
	integer latmin;


	integer thrthistime;
	integer thrtotal;
	integer thrmax;
	integer thrmin;

	integer lataver;
	integer thraver;
	reg [31 : 0] lat_array [0 : `AUTOTB_TRANSACTION_NUM];
	reg [31 : 0] thr_array [0 : `AUTOTB_TRANSACTION_NUM];

	i = 0;
	lattotal = 0;
	latmax = 0;
	latmin = 32'h 7fffffff;
	lataver = 0;

	thrtotal = 0;
	thrmax = 0;
	thrmin = 32'h 7fffffff;
	thraver = 0;

	@(negedge AESL_clock);

	@(posedge AESL_reset);
	while (done_cnt < `AUTOTB_TRANSACTION_NUM) begin
		@(posedge AESL_clock);
	end

	#0.001

	for (i = 0; i < `AUTOTB_TRANSACTION_NUM; i = i + 1) begin
		latthistime = AESL_mLatCnterOut[i] - AESL_mLatCnterIn[i];
		lat_array[i] = latthistime;
		if (latthistime > latmax) latmax = latthistime;
		if (latthistime < latmin) latmin = latthistime;
		lattotal = lattotal + latthistime;
		if (`AUTOTB_TRANSACTION_NUM == 1) begin
			thrthistime = latthistime;
		end else begin
			thrthistime = AESL_mLatCnterIn[i + 1] - AESL_mLatCnterIn[i];
		end
		thr_array[i] = thrthistime;
		if (thrthistime > thrmax) thrmax = thrthistime;
		if (thrthistime < thrmin) thrmin = thrthistime;
		thrtotal = thrtotal + thrthistime;
	end

	lataver = lattotal / `AUTOTB_TRANSACTION_NUM;
	thraver = thrtotal / `AUTOTB_TRANSACTION_NUM;

	fp = $fopen(`AUTOTB_LAT_RESULT_FILE, "w");

	if (`AUTOTB_TRANSACTION_NUM == 1) begin
		thrmax  = 0;
		thrmin  = 0;
		thraver = 0;
		$fdisplay(fp, "$MAX_LATENCY = \"%0d\"", latmax);
		$fdisplay(fp, "$MIN_LATENCY = \"%0d\"", latmin);
		$fdisplay(fp, "$AVER_LATENCY = \"%0d\"", lataver);
		$fdisplay(fp, "$MAX_THROUGHPUT = \"%0d\"", thrmax);
		$fdisplay(fp, "$MIN_THROUGHPUT = \"%0d\"", thrmin);
		$fdisplay(fp, "$AVER_THROUGHPUT = \"%0d\"", thraver);
	end else begin
		// $::AESL_AUTOTB::g_axi_slave_port_list != ""
		$fdisplay(fp, "$MAX_LATENCY = \"%0d\"", latmax);
		$fdisplay(fp, "$MIN_LATENCY = \"%0d\"", latmin);
		$fdisplay(fp, "$AVER_LATENCY = \"%0d\"", lataver);
		$fdisplay(fp, "$MAX_THROUGHPUT = \"%0d\"", latmax);
		$fdisplay(fp, "$MIN_THROUGHPUT = \"%0d\"", latmin);
		$fdisplay(fp, "$AVER_THROUGHPUT = \"%0d\"", lataver);
	end

	$fclose(fp);

	fp = $fopen(`AUTOTB_PER_RESULT_TRANS_FILE, "w");
	$fdisplay(fp, "%20s%16s%16s", "", "latency", "interval");
	if (`AUTOTB_TRANSACTION_NUM == 1) begin
		i = 0;
		thr_array[i] = 0;
		$fdisplay(fp, "transaction%8d:%16d%16d", i, lat_array[i], thr_array[i]);
	end else begin
		for (i = 0; i < AESL_mLatCnterOut_addr; i = i + 1) begin
			$fdisplay(fp, "transaction%8d:%16d%16d", i, lat_array[i], thr_array[i]);
		end
	end
	$fclose(fp);
end

endmodule
