`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:22:32 10/16/2017
// Design Name:   Execute
// Module Name:   E:/az_computer_arcituctukre/session1/test_execute.v
// Project Name:  session1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Execute
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_execute;

	// Inputs
	reg [4:0] ins1;
	reg [4:0] ins2;
	reg [31:0] signEX;
	reg regDst;
	reg alusrc;
	reg [31:0] rd1;
	reg [31:0] rd2;
	reg [5:0] aluOP;
	reg [31:0] adderFetch;
	reg clk;

	// Outputs
	wire [31:0] addres;
	wire [31:0] alures;
	wire aluZero;
	wire [31:0] readData2;
	wire [4:0] instruction;

	// Instantiate the Unit Under Test (UUT)
	Execute uut (
		.ins1(ins1), 
		.ins2(ins2), 
		.signEX(signEX), 
		.regDst(regDst), 
		.alusrc(alusrc), 
		.rd1(rd1), 
		.rd2(rd2), 
		.aluOP(aluOP), 
		.adderFetch(adderFetch), 
		.clk(clk), 
		.addres(addres), 
		.alures(alures), 
		.aluZero(aluZero), 
		.readData2(readData2), 
		.instruction(instruction)
	);

	initial begin
		// Initialize Inputs
		ins1 = 0;
		ins2 = 0;
		signEX = 0;
		regDst = 0;
		alusrc = 0;
		rd1 = 0;
		rd2 = 0;
		aluOP = 0;
		adderFetch = 0;
		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;
				ins1 = 5;
		ins2 = 7;
		signEX = 1025;
		regDst = 0;
		alusrc = 0;
		rd1 = 2024;
		rd2 = 1024;
		aluOP = 0;
		adderFetch = 3024;
		
		#100;
				ins1 = 9;
		ins2 = 10;
		signEX = 1026;
		regDst = 1;
		alusrc = 0;
		rd1 = 0;
		rd2 = 0;
		aluOP = 0;
		adderFetch = 3024;
        
		// Add stimulus here

	end
		always begin
			#50;
			clk=~clk;
		end 
      
endmodule

