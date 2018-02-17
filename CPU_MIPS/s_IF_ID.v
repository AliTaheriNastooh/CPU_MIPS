`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:58:44 10/30/2017 
// Design Name: 
// Module Name:    s_IF_ID 
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
module s_IF_ID(npc,instr,npcout,instrout,clk
    );
	input [31:0]npc;
	input [31:0]instr;
	input clk;
	output reg[31:0]npcout;
	output reg[31:0]instrout;
	reg [31:0]rnpc;
	reg [31:0]rinstr;
	always@(posedge clk)
	begin
		npcout<=rnpc;
		instrout<=rinstr;
	end
	always@(npc)
	begin
		rnpc=npc;
	end
	always@(instr)
	begin
		rinstr=instr;
	end
endmodule
