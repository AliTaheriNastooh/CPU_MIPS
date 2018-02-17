`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:33:45 10/30/2017 
// Design Name: 
// Module Name:    s_EX_MEM 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module s_EX_MEM(
			input [1:0]ctlwb_out,
			input [2:0]ctlm_out,
			input [31:0]adder_out,
			input aluzero,
			input [31:0]aluout,
			input [31:0]readdat2,
			input [4:0]muxout,
			input clk,
			output reg[1:0] wb_ctlout,
			output reg[2:0] m_ctlout,
			output reg[31:0] add_result,
			output reg zero,
			output reg[31:0] alu_result,
			output reg[31:0] rdata2out,
			output reg[4:0] five_bit_muxout
    );
			reg [1:0]rctlwb_out;
			reg [2:0]rctlm_out;
			reg [31:0]radder_out;
			reg raluzero;
			reg [31:0]raluout;
			reg [31:0]rreaddat2;
			reg [4:0]rmuxout;
				
always@(posedge clk)
begin
			wb_ctlout<=rctlwb_out;
			m_ctlout<=rctlm_out;
			add_result<=radder_out;
			zero<=raluzero;
			alu_result<=raluout;
			rdata2out<=rreaddat2;
			five_bit_muxout<=rmuxout;	
end
always@(*)
begin
			rctlwb_out=ctlwb_out;
			rctlm_out=ctlm_out;
			radder_out=adder_out;
			raluzero=aluzero;
			raluout=aluout;
			rreaddat2=readdat2;
			rmuxout=muxout;
end
endmodule
