`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:50:30 12/04/2017 
// Design Name: 
// Module Name:    control_unit 
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
module control_unit(opcode,wb,M,Ex
    );
	 input [5:0] opcode;
	 output reg[1:0]wb;
	 output reg[2:0]M;
	 output reg[7:0]Ex;
	 always@(*)
	 begin
				case(opcode)
								
					6'b000000:begin
						wb={0,1};
						M=0;
						Ex={0,1,6'b000000};
						end
					6'b100011:begin
						wb={1,1};
						M={0,1,0};
						Ex={1,0,6'b000001};						
						end
					6'b000101:begin
						wb=0;
						M={1,0,0};
						Ex={0,0,6'b000010};
					
						end
					6'b000100:begin
						wb=0;
						M={1,0,0};
						Ex={0,0,6'b000011};
						end
					6'b101011 :begin
						wb=0;
						M={0,0,1};
						Ex={1,0,6'b000100};
						end
						
				endcase
	 end

endmodule
