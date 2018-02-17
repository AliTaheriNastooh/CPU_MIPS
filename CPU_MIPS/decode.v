`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:30:23 10/09/2017 
// Design Name: 
// Module Name:    decode 
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
module decode(
    input [31:0] instruction,
    input [4:0] writeReg,
    input [31:0] writeData,
    input [31:0] adderFetch,
	 input regWrite,
	 
    input clk,
	 output [31:0] adderFetchOut,
	 output reg [31:0] rd1,
    output reg [31:0] rd2,
    output reg [4:0] ins1,
    output reg [4:0] ins2,
    output reg [31:0] insOut,
    output reg [31:0] signEx
    );
	 reg [31:0]regMem[31:0];
	 reg [4:0]rs1;
	 reg [4:0]rs2;
	 //reg [15:0]tmp;
	 integer i;
	 initial begin
		for(i=0;i<32;i=i+1)
		begin
			regMem[i]=i;
		end
	 end
	 always@(posedge clk)
	 begin
		if(regWrite)
		begin
			regMem[writeReg]=writeData;
		end

	 end
	 assign adderFetchOut=adderFetch;
	 
	 always@(negedge clk)
	 begin
	 	rs1=instruction[25:21];
		rs2=instruction[20:16];
		insOut=instruction;
		rd1=regMem[rs1];
		rd2=regMem[rs2];
		ins1=instruction[20:16];
		ins2=instruction[15:11];
		signEx[15:0]=instruction[15:0];
		for(i=16;i<32;i=i+1)
		begin
			signEx[i]=instruction[15];
		end
		
	 end
endmodule
