`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:11:18 10/16/2017 
// Design Name: 
// Module Name:    ALU 
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
module ALU(a,b,control,res,zero
    );
		input [31:0]a;
		input [31:0]b;
		input [3:0]control;
		output reg [31:0]res;
		output reg zero;
		initial begin
		zero=0;
		end
		
		always@(*)
		begin 
			zero=0;
			case(control)
				4'b0000:res=a+b;
				4'b0001:res=a-b;
				4'b0010:res=a*b;
				4'b0011:res=a>>>b;
				4'b0100:res=a<<<b;
				4'b0101:res=a&b;
				4'b0110:res=a^b;
				4'b0111:res=a|b;
				4'b1000:res=~(a | b);
				4'b1001:res=a+b;
				4'b1010:begin
					if(a!=b)
					begin
						zero=1;
					end
					else begin
						zero = 0;
					end
				end
				4'b1011:
					begin
						if(a==b)
						begin
							zero=1;
						end
						else begin
							zero=0;
						end
					end
				4'b1100:res=a+b;
			endcase
			if(control<10 || control==12)
			begin
				if(res==0)
				begin
					zero=1;
				end
			end
		end
		

endmodule
