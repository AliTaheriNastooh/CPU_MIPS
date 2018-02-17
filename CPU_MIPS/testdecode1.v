`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   09:55:53 10/09/2017
// Design Name:   decode
// Module Name:   E:/az_computer_arcituctukre/session1/testdecode1.v
// Project Name:  session1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: decode
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module testdecode1;

	// Inputs
	reg [31:0] instruction;
	reg [4:0] writeReg;
	reg [31:0] writeData;
	reg regWrite;
	reg clk;

	// Outputs
	wire [31:0] rd1;
	wire [31:0] rd2;
	wire [4:0] ins1;
	wire [4:0] ins2;
	wire [31:0] insOut;
	wire [31:0] signEx;

	// Instantiate the Unit Under Test (UUT)
	decode uut (
		.instruction(instruction), 
		.writeReg(writeReg), 
		.writeData(writeData), 
		.regWrite(regWrite), 
		.clk(clk), 
		.rd1(rd1), 
		.rd2(rd2), 
		.ins1(ins1), 
		.ins2(ins2), 
		.insOut(insOut), 
		.signEx(signEx)
	);

	initial begin
		// Initialize Inputs
		instruction = 67;
		writeReg = 0;
		writeData = 0;
		regWrite = 0;
		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;
		instruction = 87;
		writeReg = 2;
		writeData = 35;
		regWrite = 1;        
		// Add stimulus here

	end
	always begin
	 #50;
	 clk=~clk;
	
	end
      
endmodule

