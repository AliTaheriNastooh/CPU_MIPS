`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:52:04 10/30/2017 
// Design Name: 
// Module Name:    writeBackPipe 
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
module writeBackPipe(rd,address,memtoreg,writeBack
    );
	input [31:0]rd;
	input [31:0]address;
	input memtoreg;
	output [31:0]writeBack;
	
	assign writeBack=memtoreg?rd:address;
endmodule
