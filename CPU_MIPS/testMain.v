`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:30:31 12/24/2017
// Design Name:   mainModule
// Module Name:   E:/az_computer_arcituctukre/session1/testMain.v
// Project Name:  session1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: mainModule
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module testMain;

	// Inputs
	reg clk;

	// Instantiate the Unit Under Test (UUT)
	mainModule uut (
		.clk(clk)
	);

	initial begin
		// Initialize Inputs
		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
	always begin
	# 50 clk=~clk;
	end
      
endmodule

