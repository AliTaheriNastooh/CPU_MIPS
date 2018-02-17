`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:08:55 10/30/2017 
// Design Name: 
// Module Name:    s_ID_EX 
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
module s_ID_EX(
		input [1:0]ctlwb_out,
		input [2:0]ctlm_out,
		input [7:0]ctlex_out,
		input [31:0]npc,
		input [31:0]readdat1,
		input [31:0]readdat2,
		input [31:0]signext_out,
		input [4:0]instr_2016,
		input [4:0]instr_1511,
		input clk,
		output reg[1:0]wb_ctlout,
		output reg[2:0]m_ctlout,
		output reg[7:0]ex_ctlout,
		output reg[31:0]npcout,
		output reg[31:0]rdata1out,
		output reg[31:0]rdata2out,
		output reg[31:0]s_extendout,
		output reg[4:0]instrout_2016,
		output reg[4:0]instrout_1511
    );
reg [1:0]rctlwb_out;
reg [2:0]rctlm_out;
reg [7:0]rctlex_out;
reg [31:0]rnpc;
reg [31:0]rreaddata1;
reg [31:0]rreaddata2;
reg [31:0]rsignext_out;
reg [4:0]rinstr_2016;
reg [4:0]rinstr_1511;
always@(posedge clk)
begin
	wb_ctlout<=rctlwb_out;
	m_ctlout<=rctlm_out;
	ex_ctlout<=rctlex_out;
	npcout<=rnpc;
	rdata1out<=rreaddata1;
	rdata2out<=rreaddata2;
	s_extendout<=rsignext_out;
	instrout_2016<=rinstr_2016;
	instrout_1511<=rinstr_1511;
end
always@(*)
begin
	rctlwb_out=ctlwb_out;
	rctlm_out=ctlm_out;
	rctlex_out=ctlex_out;
	rnpc=npc;
	rreaddata1=readdat1;
	rreaddata2=readdat2;
	rsignext_out=signext_out;
	rinstr_2016=instr_2016;
	rinstr_1511=instr_1511;
end
endmodule
