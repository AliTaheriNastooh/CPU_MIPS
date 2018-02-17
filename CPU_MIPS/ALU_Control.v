`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:36:47 10/16/2017 
// Design Name: 
// Module Name:    ALU_Control 
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
module ALU_Control(func,opCode,Out
    );
	 input [5:0]func;
	 input [5:0]opCode;
	 output reg [3:0]Out;
	 always@(*)
		begin
			if(opCode==6'b000000)
			begin
				case(func)
								
					6'b000001:
						Out = 4'b0000;
					6'b000011:
						Out = 4'b0001;
					6'b000100:
						Out = 4'b0010;
					6'b000101:
						Out = 4'b0011;
					6'b000110 :
						Out = 4'b0100;
					6'b000111:
						Out = 4'b0101;
					6'b001000 :
						Out = 4'b0110;
					6'b001001:
						Out = 4'b0111;
					6'b001010:
						Out = 4'b1000;
						
				endcase
			end
			else
			begin
				case(opCode)
								
				6'b000001: 
					Out = 4'b1001;	
				6'b000010:
					Out = 4'b1010;
				6'b000011:
					Out = 4'b1011;
				6'b000100:
					Out = 4'b1100;
								
				endcase
			end
		end


endmodule
