`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:45:38 10/30/2017 
// Design Name: 
// Module Name:    s_MEM_WB 
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
module s_MEM_WB(
		input [1:0]control_wb_in,
		input [31:0]read_data_in,
		input [31:0]alu_result_in,
		input [4:0]write_reg_in,
		input clk,
		output reg[1:0]mem_control_wb,
		output reg[31:0]read_data,
		output reg[31:0]mem_alu_result,
		output reg[4:0]mem_write_reg
    );
reg [1:0]rcontrol_wb_in;
reg [31:0]rread_data_in;
reg [31:0]ralu_result_in;
reg [4:0]rwrite_reg_in;
always@(posedge clk)
begin
		mem_control_wb<=rcontrol_wb_in;
		read_data<=rread_data_in;
		mem_alu_result<=ralu_result_in;
		mem_write_reg<=rwrite_reg_in;
end
always@(*)
begin
		rcontrol_wb_in=control_wb_in;
		rread_data_in=read_data_in;
		ralu_result_in=alu_result_in;
		rwrite_reg_in=write_reg_in;
end
endmodule
