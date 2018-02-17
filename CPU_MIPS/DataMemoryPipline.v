`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:18:15 10/23/2017 
// Design Name: 
// Module Name:    DataMemoryPipline 
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
module DataMemoryPipline(zero,branch,memRead,memWrite,readData2Reg,aluRes,clk,pc_src,readData,aluResOut
    );
	input zero;
	input branch;
	input memRead;
	input memWrite;
	input [31:0]readData2Reg;
	input [31:0]aluRes;
	input clk;
	output  pc_src;
	output reg [31:0]readData;
	output [31:0]aluResOut;
	
	reg [31:0]mem1[31:0];
	integer i;
	initial begin
		for(i=0;i<32;i=i+1)
			begin
				mem1[i]=i;
			end
	 end
	 
	assign aluResOut=aluRes;
	assign pc_src=branch & zero;
	always@(posedge clk)
	begin
		if(memRead==1)
		begin
			readData=mem1[aluRes];
		end
		else
		begin
			if(memWrite==1)
			begin
				mem1[aluRes]=readData2Reg;
			end
		end
	
	end
	
	
endmodule
