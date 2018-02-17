`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   09:45:48 10/23/2017
// Design Name:   DataMemoryPipline
// Module Name:   E:/az_computer_arcituctukre/session1/testDataMemory.v
// Project Name:  session1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: DataMemoryPipline
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module testDataMemory;

	// Inputs
	reg zero;
	reg branch;
	reg memRead;
	reg memWrite;
	reg [31:0] readData2Reg;
	reg [31:0] aluRes;
	reg clk;

	// Outputs
	wire pc_src;
	wire [31:0] readData;
	wire [31:0] aluResOut;

	// Instantiate the Unit Under Test (UUT)
	DataMemoryPipline uut (
		.zero(zero), 
		.branch(branch), 
		.memRead(memRead), 
		.memWrite(memWrite), 
		.readData2Reg(readData2Reg), 
		.aluRes(aluRes), 
		.clk(clk), 
		.pc_src(pc_src), 
		.readData(readData), 
		.aluResOut(aluResOut)
	);

	initial begin
		// Initialize Inputs
		zero = 0;
		branch = 0;
		memRead = 0;
		memWrite = 0;
		readData2Reg = 0;
		aluRes = 0;
		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;
				zero = 1;
		branch = 1;
		memRead = 1;
		memWrite = 0;
		readData2Reg = 0;
		aluRes = 5;
		#100;
				zero = 0;
		branch = 1;
		memRead = 0;
		memWrite = 1;
		readData2Reg = 8;
		aluRes = 5;
              
		// Add stimulus here

	end
      		always begin
			#50;
			clk=~clk;
		end 
endmodule

