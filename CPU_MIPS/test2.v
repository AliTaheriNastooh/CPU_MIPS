`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   09:11:34 10/09/2017
// Design Name:   fetch
// Module Name:   E:/az_computer_arcituctukre/session1/test2.v
// Project Name:  session1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: fetch
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test2;

	// Inputs
	reg pcsrc;
	reg [31:0] mux1;
	reg clk;

	// Outputs
	wire [31:0] adderOutput;
	wire [31:0] instruction;

	// Instantiate the Unit Under Test (UUT)
	fetch uut (
		.pcsrc(pcsrc), 
		.mux1(mux1), 
		.clk(clk), 
		.adderOutput(adderOutput), 
		.instruction(instruction)
	);

	initial begin
		// Initialize Inputs
		pcsrc = 0;
		mux1 = 0;
		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;
        mux1=10;
		  #100;
		  pcsrc=1;
		// Add stimulus here

	end
		always begin
			#50;
			clk=~clk;
		end      
endmodule

