`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:54:26 10/30/2017 
// Design Name: 
// Module Name:    mainModule 
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
module mainModule(input clk
    );
	wire [31:0] inst_fetch_to_sfd;
	wire [31:0] addout_fetch_to_sfd;
	wire [31:0] inst_sfd_to_decode;
	wire [31:0] addout_sfd_to_decode;
	wire [1:0]  wb_decode_sIDIX;
	wire [2:0]  m_decode_sIDIX;
	wire [7:0]  ex_decode_sIDIX;
	wire [31:0] npc_decode_sIDIX;
	wire [31:0] rd1_decode_sIDIX;
	wire [31:0] rd2_decode_sIDIX;
	wire [31:0] signex_decode_sIDIX;
	wire [4:0] instr2016_decode_sIDIX;
	wire [4:0] instr1511_decode_sIDIX;
	wire [31:0] insout_decode_sIDIX;
	 wire [4:0] ins1_sIDIX_EX;
	wire [4:0] ins2_sIDIX_EX;
	wire [4:0] instruction_sIDIX_EX;
	wire [31:0] rd1_sIDIX_EX;
	wire [31:0] rd2_sIDIX_EX;
	wire [31:0] npc_sIDIX_EX;
	wire [31:0] rd22_sIDIX_EX;
	wire [2:0]  m_excute_sEXMEM;
	wire [7:0]  ex_excute_sEXMEM;
	wire [31:0]  adderout_excute_sEXMEM;
	wire [31:0]  aluout_execute_sEXMEM;
	wire zero_execute_sEXMEM;
	wire [31:0]  readdat2_execute_sEXMEM;
	wire [4:0]  muxout_execute_sEXMEM;
	wire [1:0] wb_sEXMEM_sMEMWB;
	wire [2:0] sEXMEM_MEM;
	wire zero_sEXMEM_MEM;
	wire [31:0] alures_sEXMEM_MEM;
	wire [31:0] rdat2_sEXMEM_MEM;
	wire [4:0] mux_sEXMEM_sMEMWB;
	wire [31:0] addout_sEXMEM_fetch;
	wire pc_MEM_Fetch;
	wire [31:0] alu_MEM_sMEMWB;
	wire [31:0] rdata2_MEM_sMEMWB;
	wire [31:0] addres_sMEMWB_WB;
	wire [31:0] rd_sMEMWB_WB;
	wire [1:0] wb_sMEMWB;
	wire [31:0] writback_WB_decode;
	wire [4:0] mux_sMEMWB_decode;
	wire [7:0] ex_sIDEX_execute;
	wire [31:0] ex_IDEX_execute;
	wire [1:0] wb_sIDEX_sEXMEM;
	wire [2:0] m_sIDEX_sEXMEM;
	wire [31:0]  adderout1_excute_sEXMEM;
	
control_unit instance_controlunit (
    .opcode(inst_sfd_to_decode[31:26]), 
    .wb(wb_decode_sIDIX), 
    .M(m_decode_sIDIX), 
    .Ex(ex_decode_sIDIX)
    );
	
	
//////	
fetch instance_fetch (
    .pcsrc(pc_MEM_Fetch), 
    .mux1(addout_sEXMEM_fetch), 
    .clk(clk), 
    .adderOutput(addout_fetch_to_sfd), 
    .instruction(inst_fetch_to_sfd)
    );

////////
s_IF_ID instance_sIFID (
    .npc(addout_fetch_to_sfd), 
    .instr(inst_fetch_to_sfd), 
	 .clk(clk),
    .npcout(addout_sfd_to_decode), 
    .instrout(inst_sfd_to_decode)
    );



////////

decode instance_decode(
    .instruction(inst_sfd_to_decode), 
    .writeReg(mux_sMEMWB_decode), 
    .writeData(writback_WB_decode), 
    .adderFetch(addout_sfd_to_decode), 
    .regWrite(wb_sMEMWB[0]), 
    .clk(clk), 
    .adderFetchOut(npc_decode_sIDIX), 
    .rd1(rd1_decode_sIDIX), 
    .rd2(rd2_decode_sIDIX), 
    .ins1(instr2016_decode_sIDIX), 
    .ins2(instr1511_decode_sIDIX), 
    .insOut(insout_decode_sIDIX), 
    .signEx(signex_decode_sIDIX)
    );


////////
s_ID_EX instance_name (
    .ctlwb_out(wb_decode_sIDIX), 
    .ctlm_out(m_decode_sIDIX), 
    .ctlex_out(ex_decode_sIDIX), 
    .npc(npc_decode_sIDIX), 
    .readdat1(rd1_decode_sIDIX), 
    .readdat2(rd2_decode_sIDIX), 
    .signext_out(signex_decode_sIDIX), 
    .instr_2016(instr2016_decode_sIDIX), 
    .instr_1511(instr1511_decode_sIDIX), 
    .clk(clk), 
    .wb_ctlout(wb_sIDEX_sEXMEM), 
    .m_ctlout(m_sIDEX_sEXMEM), 
    .ex_ctlout(ex_sIDEX_execute), 
    .npcout(npc_sIDIX_EX), 
    .rdata1out(rd1_sIDIX_EX), 
    .rdata2out(rd2_sIDIX_EX), 
    .s_extendout(ex_IDEX_execute), 
    .instrout_2016(ins1_sIDIX_EX), 
    .instrout_1511(ins2_sIDIX_EX)
    );

//////
Execute instance_execute (
    .ins1(ins1_sIDIX_EX), 
    .ins2(ins2_sIDIX_EX), 
    .signEX(ex_IDEX_execute), 
    .regDst(ex_sIDEX_execute[6]), 
    .alusrc(ex_sIDEX_execute[7]), 
    .rd1(rd1_sIDIX_EX), 
    .rd2(rd2_sIDIX_EX), 
    .aluOP(ex_sIDEX_execute[5:0]), 
    .adderFetch(npc_sIDIX_EX), 
    .clk(clk), 
    .addres(adderout1_excute_sEXMEM), 
    .alures(aluout_execute_sEXMEM), 
    .aluZero(zero_execute_sEXMEM), 
    .readData2(readdat2_execute_sEXMEM), 
    .instruction(muxout_execute_sEXMEM)
    );
///////////////////
s_EX_MEM instance_sEX_MEM (
    .ctlwb_out(wb_sIDEX_sEXMEM), 
    .ctlm_out(m_sIDEX_sEXMEM), 
    .adder_out(adderout1_excute_sEXMEM), 
    .aluzero(zero_execute_sEXMEM), 
    .aluout(aluout_execute_sEXMEM), 
    .readdat2(readdat2_execute_sEXMEM), 
    .muxout(muxout_execute_sEXMEM), 
    .clk(clk), 
    .wb_ctlout(wb_sEXMEM_sMEMWB), 
    .m_ctlout(sEXMEM_MEM), 
    .add_result(addout_sEXMEM_fetch), 
    .zero(zero_sEXMEM_MEM), 
    .alu_result(alures_sEXMEM_MEM), 
    .rdata2out(rdat2_sEXMEM_MEM), 
    .five_bit_muxout(mux_sEXMEM_sMEMWB)
    );
///////////////////////

////////
DataMemoryPipline instance_DataMemory (
    .zero(zero_sEXMEM_MEM), 
    .branch(sEXMEM_MEM[0]), 
    .memRead(sEXMEM_MEM[1]),
    .memWrite(sEXMEM_MEM[2]), 
    .readData2Reg(rdat2_sEXMEM_MEM), 
    .aluRes(alures_sEXMEM_MEM), 
    .clk(clk), 
    .pc_src(pc_MEM_Fetch), 
    .readData(rdata2_MEM_sMEMWB), 
    .aluResOut(alu_MEM_sMEMWB)
    );
/////////////////////

s_MEM_WB instance_s_MEM_WB (
    .control_wb_in(wb_sEXMEM_sMEMWB), 
    .read_data_in(rdata2_MEM_sMEMWB), 
    .alu_result_in(alu_MEM_sMEMWB), 
    .write_reg_in(mux_sEXMEM_sMEMWB), 
    .clk(clk), 
    .mem_control_wb(wb_sMEMWB), 
    .read_data(rd_sMEMWB_WB), 
    .mem_alu_result(addres_sMEMWB_WB), 
    .mem_write_reg(mux_sMEMWB_decode)
    );
//////////////////////////
writeBackPipe instance_writeBackPipe (
    .rd(rd_sMEMWB_WB), 
    .address(addres_sMEMWB_WB), 
    .memtoreg(wb_sMEMWB[1]), 
    .writeBack(writback_WB_decode)
    );


endmodule
