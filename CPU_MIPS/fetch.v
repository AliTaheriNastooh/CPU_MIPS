`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:56:38 10/02/2017 
// Design Name: 
// Module Name:    fetch 
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
	module fetch(pcsrc,mux1,clk,adderOutput,instruction
    );
	input pcsrc;
	input [31:0]mux1;
	input clk;
	output reg [31:0]adderOutput;
	output reg [31:0]instruction;
	 reg [31:0]pc;
	 reg [31:0]outmux;
	 reg [31:0]address;
	 reg [31:0]insmemory[31:0];
	 integer i;
	 /*initial begin
		for(i=0;i<32;i=i+1)
			begin
			insmemory[i]=i;
			
			
			end
	 
	 
	 end
	 */
 
	integer data_file    ; // file handler
	integer scan_file    ; // file handler
	reg signed [31:0] captured_data;
	`define NULL 0    

	initial begin
		pc=0;
		address=0;
	  data_file = $fopen("input.dat", "r");
	  if (data_file == `NULL) begin
		 $display("data_file handle was NULL");
		 $finish;
	  end
	  else
		begin
			i=0;
			scan_file = $fscanf(data_file, "%b\n", captured_data); 
			insmemory[i]=captured_data;
			$display("file%d: %b",i,insmemory[i]);
			while(!$feof(data_file))begin
				scan_file = $fscanf(data_file, "%b\n", captured_data);
				i=i+1;
				insmemory[i]=captured_data;
				$display("file%d: %b",i,insmemory[i]);
			end
		end
	end
/*
	always @(posedge clk) begin
	  scan_file = $fscanf(data_file, "%d\n", captured_data); 
	  if (!$feof(data_file)) begin
		 //use captured_data as you would any other wire or reg value;
	  end
	end
	*/
	 

		always@(*)
		begin
			if(pcsrc)
			begin
				outmux=mux1;
			end
			else begin
				outmux=adderOutput;
			end
			pc=outmux;
			address=outmux;
		end
		
	 always@(posedge clk)
	 begin
		instruction<=insmemory[address];
		adderOutput<= pc + 1;
	 end

endmodule
