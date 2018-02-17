`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:55:34 10/16/2017 
// Design Name: 
// Module Name:    Execute 
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
module Execute(ins1,ins2,signEX,regDst,alusrc,rd1,rd2,aluOP,adderFetch,clk,addres,alures,aluZero,readData2,instruction
    );
	 input [4:0]ins1;
	 input [4:0]ins2;
	 input [31:0]signEX;
	 input regDst;
	 input alusrc;
	 input [31:0]rd1;
	 input [31:0]rd2;
	 input [5:0]aluOP;
	 input [31:0] adderFetch;
	 input clk;
	 output [31:0]addres;
	 output [31:0]alures;
	 output aluZero;
	 output reg [31:0]readData2;
	 output reg [4:0]instruction;
	
	 wire [31:0]outMux1;
	 reg [4:0]outMux2; 
	 wire [3:0] control_alu;
	 wire [31:0] tmpOutMux1;
	 wire [31:0] tmpOutShift;
	 wire [31:0] shifter;
	 wire tmp;
	  wire [3:0]addd=0;
	 assign tmpOutMux1=outMux1;
	 assign tmpOutShift=signEX<<2;
	
	ALU_Control aluControl (
    .func(signEX[5:0]), 
    .opCode(aluOP), 
    .Out(control_alu)
    );


	 ALU ALU_main (
    .a(rd1), 
    .b(tmpOutMux1), 
    .control(control_alu), 
    .res(alures), 
    .zero(aluZero)
    );
	 
	 


	// Instantiate the module
	ALU ADD (
		 .a(adderFetch), 
		 .b(tmpOutShift), 
		 .control(addd), 
		 .res(addres), 
		 .zero(tmp)
		 );


assign outMux1=alusrc? signEX:rd2;
assign shifter=signEX<<2;
	 
	 always@(*)
	 begin
			readData2=rd2;
			
			
			instruction=regDst? ins2 : ins1;
			
	 end
	 
	 
	 


endmodule
