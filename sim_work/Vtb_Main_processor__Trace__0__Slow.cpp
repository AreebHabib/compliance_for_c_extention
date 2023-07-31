// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_Main_processor__Syms.h"


VL_ATTR_COLD void Vtb_Main_processor___024root__trace_init_sub__TOP__0(Vtb_Main_processor___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_Main_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Main_processor___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("tb_Main_processor ");
    tracep->declBit(c+166,"clk", false,-1);
    tracep->declBit(c+167,"reset", false,-1);
    tracep->declBit(c+112,"illegal", false,-1);
    tracep->pushNamePrefix("OG ");
    tracep->declBit(c+166,"clk", false,-1);
    tracep->declBit(c+167,"reset", false,-1);
    tracep->declBit(c+112,"illegal_to_csr", false,-1);
    tracep->declBus(c+168,"plus4", false,-1, 31,0);
    tracep->declBus(c+169,"next_index", false,-1, 31,0);
    tracep->declBus(c+113,"wdata", false,-1, 31,0);
    tracep->declBus(c+114,"rdata", false,-1, 31,0);
    tracep->declBus(c+65,"index", false,-1, 31,0);
    tracep->declBus(c+115,"A", false,-1, 31,0);
    tracep->declBus(c+116,"B", false,-1, 31,0);
    tracep->declBus(c+66,"B_i", false,-1, 31,0);
    tracep->declBus(c+170,"A_r", false,-1, 31,0);
    tracep->declBus(c+171,"B_r", false,-1, 31,0);
    tracep->declBus(c+67,"instruction", false,-1, 31,0);
    tracep->declBus(c+117,"alu_out", false,-1, 31,0);
    tracep->declBus(c+68,"alu_op", false,-1, 3,0);
    tracep->declBus(c+69,"mask", false,-1, 2,0);
    tracep->declBus(c+70,"br_type", false,-1, 2,0);
    tracep->declBus(c+71,"wb_sel", false,-1, 1,0);
    tracep->declBit(c+72,"reg_wr", false,-1);
    tracep->declBit(c+73,"rd_en", false,-1);
    tracep->declBit(c+74,"wr_en", false,-1);
    tracep->declBit(c+75,"sel_A", false,-1);
    tracep->declBit(c+76,"sel_B", false,-1);
    tracep->declBit(c+77,"br_taken", false,-1);
    tracep->declBus(c+78,"IR_fetch_decode", false,-1, 31,0);
    tracep->declBus(c+79,"PC_fetch_decode", false,-1, 31,0);
    tracep->declBus(c+80,"ALU_execute_memory", false,-1, 31,0);
    tracep->declBus(c+81,"WD_execute_memory", false,-1, 31,0);
    tracep->declBus(c+82,"PC_execute_memory", false,-1, 31,0);
    tracep->declBus(c+83,"IR_execute_memory", false,-1, 31,0);
    tracep->declBus(c+118,"A_for", false,-1, 31,0);
    tracep->declBus(c+119,"B_for", false,-1, 31,0);
    tracep->declBus(c+84,"wb_selMW", false,-1, 1,0);
    tracep->declBit(c+85,"reg_wrMW", false,-1);
    tracep->declBit(c+86,"rd_enMW", false,-1);
    tracep->declBit(c+87,"wr_enMW", false,-1);
    tracep->declBit(c+88,"For_A", false,-1);
    tracep->declBit(c+89,"For_B", false,-1);
    tracep->declBit(c+90,"Stall", false,-1);
    tracep->declBit(c+91,"Stall_MW", false,-1);
    tracep->declBit(c+92,"Flush", false,-1);
    tracep->declBit(c+120,"Br_taken", false,-1);
    tracep->declBus(c+93,"pc_realigned_o", false,-1, 31,0);
    tracep->declBus(c+172,"instr_o", false,-1, 31,0);
    tracep->declBus(c+94,"pc_to_inst_mem_misallgined", false,-1, 31,0);
    tracep->declBit(c+173,"pc_half_o", false,-1);
    tracep->declBit(c+95,"stall_o", false,-1);
    tracep->pushNamePrefix("Execute_Memory_ALU ");
    tracep->declBit(c+166,"clk", false,-1);
    tracep->declBit(c+91,"stall", false,-1);
    tracep->declBus(c+117,"in", false,-1, 31,0);
    tracep->declBus(c+80,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Execute_Memory_BR ");
    tracep->declBit(c+166,"clk", false,-1);
    tracep->declBit(c+91,"stall", false,-1);
    tracep->declBit(c+92,"flush", false,-1);
    tracep->declBit(c+120,"in", false,-1);
    tracep->declBit(c+77,"out", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Execute_Memory_IR ");
    tracep->declBit(c+166,"clk", false,-1);
    tracep->declBit(c+91,"stall", false,-1);
    tracep->declBit(c+92,"flush", false,-1);
    tracep->declBus(c+78,"in", false,-1, 31,0);
    tracep->declBus(c+83,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Execute_Memory_PC ");
    tracep->declBit(c+166,"clk", false,-1);
    tracep->declBit(c+91,"stall", false,-1);
    tracep->declBus(c+79,"in", false,-1, 31,0);
    tracep->declBus(c+82,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Execute_Memory_WD ");
    tracep->declBit(c+166,"clk", false,-1);
    tracep->declBit(c+91,"stall", false,-1);
    tracep->declBus(c+119,"in", false,-1, 31,0);
    tracep->declBus(c+81,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Extension_Unit ");
    tracep->declBit(c+166,"clk_i", false,-1);
    tracep->declBit(c+167,"reset_i", false,-1);
    tracep->declBus(c+65,"pc_i", false,-1, 31,0);
    tracep->declBus(c+67,"instr_i", false,-1, 31,0);
    tracep->declBit(c+120,"br_taken_i", false,-1);
    tracep->declBus(c+93,"pc_realigned_o", false,-1, 31,0);
    tracep->declBit(c+173,"pc_half_o", false,-1);
    tracep->declBit(c+95,"stall_o", false,-1);
    tracep->declBus(c+172,"instr_o", false,-1, 31,0);
    tracep->declBit(c+112,"illegal", false,-1);
    tracep->declBit(c+96,"pc_misalign", false,-1);
    tracep->declBus(c+121,"instruction", false,-1, 31,0);
    tracep->pushNamePrefix("decode ");
    tracep->declBit(c+167,"reset", false,-1);
    tracep->declBus(c+121,"inst", false,-1, 31,0);
    tracep->declBit(c+97,"pc", false,-1);
    tracep->declBit(c+96,"pc_missallign", false,-1);
    tracep->declBit(c+173,"next_comp16", false,-1);
    tracep->declBus(c+172,"compressed_inst_out", false,-1, 31,0);
    tracep->declBit(c+112,"illegal_inst", false,-1);
    tracep->declBus(c+122,"comp_opcode", false,-1, 1,0);
    tracep->declBus(c+123,"comp_load_i_type", false,-1, 11,0);
    tracep->declBus(c+124,"comp_imm_stack_store", false,-1, 11,0);
    tracep->declBus(c+125,"comp_imm_load_store", false,-1, 11,0);
    tracep->declBus(c+126,"imm_Li", false,-1, 11,0);
    tracep->declBus(c+126,"comp_i_tpye", false,-1, 11,0);
    tracep->declBus(c+127,"rs2", false,-1, 4,0);
    tracep->declBus(c+128,"rs1", false,-1, 4,0);
    tracep->declBus(c+128,"rd", false,-1, 4,0);
    tracep->declBus(c+129,"imm_jump", false,-1, 19,0);
    tracep->declBus(c+130,"imm_LUI", false,-1, 19,0);
    tracep->declBus(c+131,"imm_LUI_addi_16_sp", false,-1, 19,0);
    tracep->declBus(c+132,"comp_func3", false,-1, 2,0);
    tracep->declBus(c+133,"comp_rs1", false,-1, 4,0);
    tracep->declBus(c+134,"comp_rs2", false,-1, 4,0);
    tracep->declBus(c+134,"comp_rd", false,-1, 4,0);
    tracep->declBus(c+135,"comp_inst", false,-1, 15,0);
    tracep->declBit(c+136,"illegal", false,-1);
    tracep->declBus(c+127,"imm_sLLI", false,-1, 4,0);
    tracep->declBus(c+137,"imm", false,-1, 7,0);
    tracep->declBus(c+138,"comp_imm_branch", false,-1, 11,0);
    tracep->declBus(c+139,"comp_addi_14_sp", false,-1, 11,0);
    tracep->declBus(c+126,"imm_ANDI", false,-1, 11,0);
    tracep->declBus(c+140,"inst_load", false,-1, 31,0);
    tracep->declBus(c+141,"inst_store", false,-1, 31,0);
    tracep->declBus(c+142,"inst_load_stack", false,-1, 31,0);
    tracep->declBus(c+143,"inst_store_stack", false,-1, 31,0);
    tracep->declBus(c+144,"inst_jal", false,-1, 31,0);
    tracep->declBus(c+145,"inst_j", false,-1, 31,0);
    tracep->declBus(c+146,"inst_jalr", false,-1, 31,0);
    tracep->declBus(c+147,"inst_jr", false,-1, 31,0);
    tracep->declBus(c+148,"inst_branch_not", false,-1, 31,0);
    tracep->declBus(c+149,"inst_branch_equal", false,-1, 31,0);
    tracep->declBus(c+150,"inst_LI", false,-1, 31,0);
    tracep->declBus(c+151,"inst_LUI", false,-1, 31,0);
    tracep->declBus(c+177,"inst_r_type", false,-1, 31,0);
    tracep->declBus(c+178,"inst_r_comp_type", false,-1, 31,0);
    tracep->declBus(c+179,"inst_nop", false,-1, 31,0);
    tracep->declBus(c+152,"inst_i_type", false,-1, 31,0);
    tracep->declBus(c+153,"inst_addi_16_sp", false,-1, 31,0);
    tracep->declBus(c+154,"inst_addi_14_sp", false,-1, 31,0);
    tracep->declBus(c+155,"inst_SLLI", false,-1, 31,0);
    tracep->declBus(c+156,"inst_sRLI", false,-1, 31,0);
    tracep->declBus(c+157,"inst_sRAI", false,-1, 31,0);
    tracep->declBus(c+158,"inst_ADD", false,-1, 31,0);
    tracep->declBus(c+159,"inst_ANDI", false,-1, 31,0);
    tracep->declBus(c+160,"inst_MV", false,-1, 31,0);
    tracep->declBus(c+161,"inst_AND", false,-1, 31,0);
    tracep->declBus(c+162,"inst_OR", false,-1, 31,0);
    tracep->declBus(c+163,"inst_XOR", false,-1, 31,0);
    tracep->declBus(c+164,"inst_SUB", false,-1, 31,0);
    tracep->declBus(c+180,"inst_E_Break", false,-1, 31,0);
    tracep->declBus(c+181,"load_opcode", false,-1, 6,0);
    tracep->declBus(c+182,"store_opcode", false,-1, 6,0);
    tracep->declBus(c+183,"R_type_opcode", false,-1, 6,0);
    tracep->declBus(c+184,"I_type_opcode", false,-1, 6,0);
    tracep->declBus(c+185,"Jal_opcode", false,-1, 6,0);
    tracep->declBus(c+186,"B_type_opcode", false,-1, 6,0);
    tracep->declBus(c+187,"Jalr_opcode", false,-1, 6,0);
    tracep->declBus(c+188,"LUI_opcode", false,-1, 6,0);
    tracep->declBus(c+189,"AUIPC_opcode", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("misalign ");
    tracep->declBit(c+166,"clk", false,-1);
    tracep->declBit(c+167,"reset", false,-1);
    tracep->declBit(c+120,"sel_for_branch", false,-1);
    tracep->declBus(c+65,"pc_in", false,-1, 31,0);
    tracep->declBus(c+67,"inst_in", false,-1, 31,0);
    tracep->declBit(c+95,"stall_pc", false,-1);
    tracep->declBit(c+96,"pc_misaligned_o", false,-1);
    tracep->declBus(c+93,"pc_out", false,-1, 31,0);
    tracep->declBus(c+121,"inst_out", false,-1, 31,0);
    tracep->declBus(c+98,"upper_16", false,-1, 15,0);
    tracep->declBus(c+174,"conc_32_misallign", false,-1, 31,0);
    tracep->declBit(c+99,"is_missaligned", false,-1);
    tracep->declBit(c+100,"next_misaligned", false,-1);
    tracep->declBus(c+101,"current_state", false,-1, 1,0);
    tracep->declBus(c+175,"next_state", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Fetch_Decode_IR ");
    tracep->declBit(c+166,"clk", false,-1);
    tracep->declBit(c+90,"stall", false,-1);
    tracep->declBit(c+92,"flush", false,-1);
    tracep->declBus(c+172,"in", false,-1, 31,0);
    tracep->declBus(c+78,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Fetch_Decode_PC ");
    tracep->declBit(c+166,"clk", false,-1);
    tracep->declBit(c+90,"stall", false,-1);
    tracep->declBus(c+65,"in", false,-1, 31,0);
    tracep->declBus(c+79,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("add4 ");
    tracep->declBit(c+173,"pc_half", false,-1);
    tracep->declBus(c+65,"A", false,-1, 31,0);
    tracep->declBus(c+168,"B", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+115,"A", false,-1, 31,0);
    tracep->declBus(c+116,"B", false,-1, 31,0);
    tracep->declBus(c+68,"alu_op", false,-1, 3,0);
    tracep->declBus(c+117,"C", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("branch_cond ");
    tracep->declBus(c+118,"rs1", false,-1, 31,0);
    tracep->declBus(c+119,"rs2", false,-1, 31,0);
    tracep->declBus(c+70,"br_type", false,-1, 2,0);
    tracep->declBus(c+102,"opcode", false,-1, 6,0);
    tracep->declBit(c+120,"br_taken", false,-1);
    tracep->declBit(c+176,"branch", false,-1);
    tracep->declBit(c+103,"jump", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("control ");
    tracep->declBit(c+166,"clk", false,-1);
    tracep->declBit(c+72,"reg_wr", false,-1);
    tracep->declBit(c+74,"wr_en", false,-1);
    tracep->declBit(c+73,"rd_en", false,-1);
    tracep->declBit(c+91,"stall", false,-1);
    tracep->declBus(c+71,"wb_sel", false,-1, 1,0);
    tracep->declBit(c+85,"reg_wrMW", false,-1);
    tracep->declBit(c+87,"wr_enMW", false,-1);
    tracep->declBit(c+86,"rd_enMW", false,-1);
    tracep->declBus(c+84,"wb_selMW", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("control_unit ");
    tracep->declBus(c+78,"instruction", false,-1, 31,0);
    tracep->declBus(c+68,"alu_op", false,-1, 3,0);
    tracep->declBus(c+69,"mask", false,-1, 2,0);
    tracep->declBus(c+70,"br_type", false,-1, 2,0);
    tracep->declBit(c+72,"reg_wr", false,-1);
    tracep->declBit(c+75,"sel_A", false,-1);
    tracep->declBit(c+76,"sel_B", false,-1);
    tracep->declBit(c+73,"rd_en", false,-1);
    tracep->declBit(c+74,"wr_en", false,-1);
    tracep->declBus(c+71,"wb_sel", false,-1, 1,0);
    tracep->declBus(c+104,"func3", false,-1, 2,0);
    tracep->declBus(c+105,"func7", false,-1, 6,0);
    tracep->declBus(c+106,"opcode", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("data_memory ");
    tracep->declBus(c+80,"addr", false,-1, 31,0);
    tracep->declBus(c+81,"wdata", false,-1, 31,0);
    tracep->declBus(c+69,"mask", false,-1, 2,0);
    tracep->declBit(c+87,"wr_en", false,-1);
    tracep->declBit(c+86,"rd_en", false,-1);
    tracep->declBit(c+166,"clk", false,-1);
    tracep->declBus(c+114,"rdata", false,-1, 31,0);
    tracep->declBus(c+165,"data", false,-1, 31,0);
    tracep->declBus(c+107,"write_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("forwarding ");
    tracep->declBus(c+83,"pre_inst", false,-1, 31,0);
    tracep->declBus(c+78,"new_inst", false,-1, 31,0);
    tracep->declBit(c+85,"reg_wrMW", false,-1);
    tracep->declBit(c+77,"br_taken", false,-1);
    tracep->declBit(c+88,"For_A", false,-1);
    tracep->declBit(c+89,"For_B", false,-1);
    tracep->declBit(c+90,"Stall", false,-1);
    tracep->declBit(c+91,"Stall_MW", false,-1);
    tracep->declBit(c+92,"Flush", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("imm_generator ");
    tracep->declBit(c+166,"clk", false,-1);
    tracep->declBus(c+78,"instruction", false,-1, 31,0);
    tracep->declBus(c+66,"imm_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("instr_memory ");
    tracep->declBus(c+94,"addr", false,-1, 31,0);
    tracep->declBus(c+67,"instruction", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1+i*1,"instruction_memory", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc ");
    tracep->declBit(c+166,"clk", false,-1);
    tracep->declBit(c+167,"reset", false,-1);
    tracep->declBit(c+108,"stall", false,-1);
    tracep->declBus(c+169,"B", false,-1, 31,0);
    tracep->declBus(c+65,"A", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_to_inst_mem ");
    tracep->declBus(c+65,"A", false,-1, 31,0);
    tracep->declBus(c+93,"B", false,-1, 31,0);
    tracep->declBit(c+95,"sel", false,-1);
    tracep->declBus(c+94,"C", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("register_file ");
    tracep->declBit(c+166,"clk", false,-1);
    tracep->declBit(c+167,"reset", false,-1);
    tracep->declBit(c+85,"reg_wr", false,-1);
    tracep->declBus(c+109,"raddr1", false,-1, 4,0);
    tracep->declBus(c+110,"raddr2", false,-1, 4,0);
    tracep->declBus(c+111,"waddr", false,-1, 4,0);
    tracep->declBus(c+113,"wdata", false,-1, 31,0);
    tracep->declBus(c+170,"rdata1", false,-1, 31,0);
    tracep->declBus(c+171,"rdata2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+33+i*1,"registerfile", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("select_A ");
    tracep->declBus(c+79,"A", false,-1, 31,0);
    tracep->declBus(c+118,"B", false,-1, 31,0);
    tracep->declBit(c+75,"sel", false,-1);
    tracep->declBus(c+115,"C", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("select_A_r ");
    tracep->declBus(c+170,"A", false,-1, 31,0);
    tracep->declBus(c+80,"B", false,-1, 31,0);
    tracep->declBit(c+88,"sel", false,-1);
    tracep->declBus(c+118,"C", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("select_B ");
    tracep->declBus(c+119,"A", false,-1, 31,0);
    tracep->declBus(c+66,"B", false,-1, 31,0);
    tracep->declBit(c+76,"sel", false,-1);
    tracep->declBus(c+116,"C", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("select_B_r ");
    tracep->declBus(c+171,"A", false,-1, 31,0);
    tracep->declBus(c+80,"B", false,-1, 31,0);
    tracep->declBit(c+89,"sel", false,-1);
    tracep->declBus(c+119,"C", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("select_PC ");
    tracep->declBus(c+168,"A", false,-1, 31,0);
    tracep->declBus(c+80,"B", false,-1, 31,0);
    tracep->declBit(c+77,"sel", false,-1);
    tracep->declBus(c+169,"C", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("writeback ");
    tracep->declBus(c+80,"A", false,-1, 31,0);
    tracep->declBus(c+114,"B", false,-1, 31,0);
    tracep->declBus(c+82,"C", false,-1, 31,0);
    tracep->declBus(c+84,"wb_sel", false,-1, 1,0);
    tracep->declBus(c+113,"wdata", false,-1, 31,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vtb_Main_processor___024root__trace_init_top(Vtb_Main_processor___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_Main_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Main_processor___024root__trace_init_top\n"); );
    // Body
    Vtb_Main_processor___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_Main_processor___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_Main_processor___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_Main_processor___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_Main_processor___024root__trace_register(Vtb_Main_processor___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_Main_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Main_processor___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtb_Main_processor___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtb_Main_processor___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtb_Main_processor___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_Main_processor___024root__trace_full_sub_0(Vtb_Main_processor___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_Main_processor___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Main_processor___024root__trace_full_top_0\n"); );
    // Init
    Vtb_Main_processor___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_Main_processor___024root*>(voidSelf);
    Vtb_Main_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_Main_processor___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_Main_processor___024root__trace_full_sub_0(Vtb_Main_processor___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_Main_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Main_processor___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->tb_Main_processor__DOT__OG__DOT__instr_memory__DOT__instruction_memory[0]),32);
    bufp->fullIData(oldp+2,(vlSelf->tb_Main_processor__DOT__OG__DOT__instr_memory__DOT__instruction_memory[1]),32);
    bufp->fullIData(oldp+3,(vlSelf->tb_Main_processor__DOT__OG__DOT__instr_memory__DOT__instruction_memory[2]),32);
    bufp->fullIData(oldp+4,(vlSelf->tb_Main_processor__DOT__OG__DOT__instr_memory__DOT__instruction_memory[3]),32);
    bufp->fullIData(oldp+5,(vlSelf->tb_Main_processor__DOT__OG__DOT__instr_memory__DOT__instruction_memory[4]),32);
    bufp->fullIData(oldp+6,(vlSelf->tb_Main_processor__DOT__OG__DOT__instr_memory__DOT__instruction_memory[5]),32);
    bufp->fullIData(oldp+7,(vlSelf->tb_Main_processor__DOT__OG__DOT__instr_memory__DOT__instruction_memory[6]),32);
    bufp->fullIData(oldp+8,(vlSelf->tb_Main_processor__DOT__OG__DOT__instr_memory__DOT__instruction_memory[7]),32);
    bufp->fullIData(oldp+9,(vlSelf->tb_Main_processor__DOT__OG__DOT__instr_memory__DOT__instruction_memory[8]),32);
    bufp->fullIData(oldp+10,(vlSelf->tb_Main_processor__DOT__OG__DOT__instr_memory__DOT__instruction_memory[9]),32);
    bufp->fullIData(oldp+11,(vlSelf->tb_Main_processor__DOT__OG__DOT__instr_memory__DOT__instruction_memory[10]),32);
    bufp->fullIData(oldp+12,(vlSelf->tb_Main_processor__DOT__OG__DOT__instr_memory__DOT__instruction_memory[11]),32);
    bufp->fullIData(oldp+13,(vlSelf->tb_Main_processor__DOT__OG__DOT__instr_memory__DOT__instruction_memory[12]),32);
    bufp->fullIData(oldp+14,(vlSelf->tb_Main_processor__DOT__OG__DOT__instr_memory__DOT__instruction_memory[13]),32);
    bufp->fullIData(oldp+15,(vlSelf->tb_Main_processor__DOT__OG__DOT__instr_memory__DOT__instruction_memory[14]),32);
    bufp->fullIData(oldp+16,(vlSelf->tb_Main_processor__DOT__OG__DOT__instr_memory__DOT__instruction_memory[15]),32);
    bufp->fullIData(oldp+17,(vlSelf->tb_Main_processor__DOT__OG__DOT__instr_memory__DOT__instruction_memory[16]),32);
    bufp->fullIData(oldp+18,(vlSelf->tb_Main_processor__DOT__OG__DOT__instr_memory__DOT__instruction_memory[17]),32);
    bufp->fullIData(oldp+19,(vlSelf->tb_Main_processor__DOT__OG__DOT__instr_memory__DOT__instruction_memory[18]),32);
    bufp->fullIData(oldp+20,(vlSelf->tb_Main_processor__DOT__OG__DOT__instr_memory__DOT__instruction_memory[19]),32);
    bufp->fullIData(oldp+21,(vlSelf->tb_Main_processor__DOT__OG__DOT__instr_memory__DOT__instruction_memory[20]),32);
    bufp->fullIData(oldp+22,(vlSelf->tb_Main_processor__DOT__OG__DOT__instr_memory__DOT__instruction_memory[21]),32);
    bufp->fullIData(oldp+23,(vlSelf->tb_Main_processor__DOT__OG__DOT__instr_memory__DOT__instruction_memory[22]),32);
    bufp->fullIData(oldp+24,(vlSelf->tb_Main_processor__DOT__OG__DOT__instr_memory__DOT__instruction_memory[23]),32);
    bufp->fullIData(oldp+25,(vlSelf->tb_Main_processor__DOT__OG__DOT__instr_memory__DOT__instruction_memory[24]),32);
    bufp->fullIData(oldp+26,(vlSelf->tb_Main_processor__DOT__OG__DOT__instr_memory__DOT__instruction_memory[25]),32);
    bufp->fullIData(oldp+27,(vlSelf->tb_Main_processor__DOT__OG__DOT__instr_memory__DOT__instruction_memory[26]),32);
    bufp->fullIData(oldp+28,(vlSelf->tb_Main_processor__DOT__OG__DOT__instr_memory__DOT__instruction_memory[27]),32);
    bufp->fullIData(oldp+29,(vlSelf->tb_Main_processor__DOT__OG__DOT__instr_memory__DOT__instruction_memory[28]),32);
    bufp->fullIData(oldp+30,(vlSelf->tb_Main_processor__DOT__OG__DOT__instr_memory__DOT__instruction_memory[29]),32);
    bufp->fullIData(oldp+31,(vlSelf->tb_Main_processor__DOT__OG__DOT__instr_memory__DOT__instruction_memory[30]),32);
    bufp->fullIData(oldp+32,(vlSelf->tb_Main_processor__DOT__OG__DOT__instr_memory__DOT__instruction_memory[31]),32);
    bufp->fullIData(oldp+33,(vlSelf->tb_Main_processor__DOT__OG__DOT__register_file__DOT__registerfile[0]),32);
    bufp->fullIData(oldp+34,(vlSelf->tb_Main_processor__DOT__OG__DOT__register_file__DOT__registerfile[1]),32);
    bufp->fullIData(oldp+35,(vlSelf->tb_Main_processor__DOT__OG__DOT__register_file__DOT__registerfile[2]),32);
    bufp->fullIData(oldp+36,(vlSelf->tb_Main_processor__DOT__OG__DOT__register_file__DOT__registerfile[3]),32);
    bufp->fullIData(oldp+37,(vlSelf->tb_Main_processor__DOT__OG__DOT__register_file__DOT__registerfile[4]),32);
    bufp->fullIData(oldp+38,(vlSelf->tb_Main_processor__DOT__OG__DOT__register_file__DOT__registerfile[5]),32);
    bufp->fullIData(oldp+39,(vlSelf->tb_Main_processor__DOT__OG__DOT__register_file__DOT__registerfile[6]),32);
    bufp->fullIData(oldp+40,(vlSelf->tb_Main_processor__DOT__OG__DOT__register_file__DOT__registerfile[7]),32);
    bufp->fullIData(oldp+41,(vlSelf->tb_Main_processor__DOT__OG__DOT__register_file__DOT__registerfile[8]),32);
    bufp->fullIData(oldp+42,(vlSelf->tb_Main_processor__DOT__OG__DOT__register_file__DOT__registerfile[9]),32);
    bufp->fullIData(oldp+43,(vlSelf->tb_Main_processor__DOT__OG__DOT__register_file__DOT__registerfile[10]),32);
    bufp->fullIData(oldp+44,(vlSelf->tb_Main_processor__DOT__OG__DOT__register_file__DOT__registerfile[11]),32);
    bufp->fullIData(oldp+45,(vlSelf->tb_Main_processor__DOT__OG__DOT__register_file__DOT__registerfile[12]),32);
    bufp->fullIData(oldp+46,(vlSelf->tb_Main_processor__DOT__OG__DOT__register_file__DOT__registerfile[13]),32);
    bufp->fullIData(oldp+47,(vlSelf->tb_Main_processor__DOT__OG__DOT__register_file__DOT__registerfile[14]),32);
    bufp->fullIData(oldp+48,(vlSelf->tb_Main_processor__DOT__OG__DOT__register_file__DOT__registerfile[15]),32);
    bufp->fullIData(oldp+49,(vlSelf->tb_Main_processor__DOT__OG__DOT__register_file__DOT__registerfile[16]),32);
    bufp->fullIData(oldp+50,(vlSelf->tb_Main_processor__DOT__OG__DOT__register_file__DOT__registerfile[17]),32);
    bufp->fullIData(oldp+51,(vlSelf->tb_Main_processor__DOT__OG__DOT__register_file__DOT__registerfile[18]),32);
    bufp->fullIData(oldp+52,(vlSelf->tb_Main_processor__DOT__OG__DOT__register_file__DOT__registerfile[19]),32);
    bufp->fullIData(oldp+53,(vlSelf->tb_Main_processor__DOT__OG__DOT__register_file__DOT__registerfile[20]),32);
    bufp->fullIData(oldp+54,(vlSelf->tb_Main_processor__DOT__OG__DOT__register_file__DOT__registerfile[21]),32);
    bufp->fullIData(oldp+55,(vlSelf->tb_Main_processor__DOT__OG__DOT__register_file__DOT__registerfile[22]),32);
    bufp->fullIData(oldp+56,(vlSelf->tb_Main_processor__DOT__OG__DOT__register_file__DOT__registerfile[23]),32);
    bufp->fullIData(oldp+57,(vlSelf->tb_Main_processor__DOT__OG__DOT__register_file__DOT__registerfile[24]),32);
    bufp->fullIData(oldp+58,(vlSelf->tb_Main_processor__DOT__OG__DOT__register_file__DOT__registerfile[25]),32);
    bufp->fullIData(oldp+59,(vlSelf->tb_Main_processor__DOT__OG__DOT__register_file__DOT__registerfile[26]),32);
    bufp->fullIData(oldp+60,(vlSelf->tb_Main_processor__DOT__OG__DOT__register_file__DOT__registerfile[27]),32);
    bufp->fullIData(oldp+61,(vlSelf->tb_Main_processor__DOT__OG__DOT__register_file__DOT__registerfile[28]),32);
    bufp->fullIData(oldp+62,(vlSelf->tb_Main_processor__DOT__OG__DOT__register_file__DOT__registerfile[29]),32);
    bufp->fullIData(oldp+63,(vlSelf->tb_Main_processor__DOT__OG__DOT__register_file__DOT__registerfile[30]),32);
    bufp->fullIData(oldp+64,(vlSelf->tb_Main_processor__DOT__OG__DOT__register_file__DOT__registerfile[31]),32);
    bufp->fullIData(oldp+65,(vlSelf->tb_Main_processor__DOT__OG__DOT__index),32);
    bufp->fullIData(oldp+66,(vlSelf->tb_Main_processor__DOT__OG__DOT__B_i),32);
    bufp->fullIData(oldp+67,(vlSelf->tb_Main_processor__DOT__OG__DOT__instruction),32);
    bufp->fullCData(oldp+68,(vlSelf->tb_Main_processor__DOT__OG__DOT__alu_op),4);
    bufp->fullCData(oldp+69,(vlSelf->tb_Main_processor__DOT__OG__DOT__mask),3);
    bufp->fullCData(oldp+70,(vlSelf->tb_Main_processor__DOT__OG__DOT__br_type),3);
    bufp->fullCData(oldp+71,(vlSelf->tb_Main_processor__DOT__OG__DOT__wb_sel),2);
    bufp->fullBit(oldp+72,(vlSelf->tb_Main_processor__DOT__OG__DOT__reg_wr));
    bufp->fullBit(oldp+73,(vlSelf->tb_Main_processor__DOT__OG__DOT__rd_en));
    bufp->fullBit(oldp+74,(vlSelf->tb_Main_processor__DOT__OG__DOT__wr_en));
    bufp->fullBit(oldp+75,(vlSelf->tb_Main_processor__DOT__OG__DOT__sel_A));
    bufp->fullBit(oldp+76,(vlSelf->tb_Main_processor__DOT__OG__DOT__sel_B));
    bufp->fullBit(oldp+77,(vlSelf->tb_Main_processor__DOT__OG__DOT__br_taken));
    bufp->fullIData(oldp+78,(vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode),32);
    bufp->fullIData(oldp+79,(vlSelf->tb_Main_processor__DOT__OG__DOT__PC_fetch_decode),32);
    bufp->fullIData(oldp+80,(vlSelf->tb_Main_processor__DOT__OG__DOT__ALU_execute_memory),32);
    bufp->fullIData(oldp+81,(vlSelf->tb_Main_processor__DOT__OG__DOT__WD_execute_memory),32);
    bufp->fullIData(oldp+82,(vlSelf->tb_Main_processor__DOT__OG__DOT__PC_execute_memory),32);
    bufp->fullIData(oldp+83,(vlSelf->tb_Main_processor__DOT__OG__DOT__IR_execute_memory),32);
    bufp->fullCData(oldp+84,(vlSelf->tb_Main_processor__DOT__OG__DOT__wb_selMW),2);
    bufp->fullBit(oldp+85,(vlSelf->tb_Main_processor__DOT__OG__DOT__reg_wrMW));
    bufp->fullBit(oldp+86,(vlSelf->tb_Main_processor__DOT__OG__DOT__rd_enMW));
    bufp->fullBit(oldp+87,(vlSelf->tb_Main_processor__DOT__OG__DOT__wr_enMW));
    bufp->fullBit(oldp+88,(vlSelf->tb_Main_processor__DOT__OG__DOT__For_A));
    bufp->fullBit(oldp+89,(vlSelf->tb_Main_processor__DOT__OG__DOT__For_B));
    bufp->fullBit(oldp+90,(vlSelf->tb_Main_processor__DOT__OG__DOT__Stall));
    bufp->fullBit(oldp+91,(vlSelf->tb_Main_processor__DOT__OG__DOT__Stall_MW));
    bufp->fullBit(oldp+92,(vlSelf->tb_Main_processor__DOT__OG__DOT__Flush));
    bufp->fullIData(oldp+93,(vlSelf->tb_Main_processor__DOT__OG__DOT__pc_realigned_o),32);
    bufp->fullIData(oldp+94,(((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__stall_o)
                               ? vlSelf->tb_Main_processor__DOT__OG__DOT__pc_realigned_o
                               : vlSelf->tb_Main_processor__DOT__OG__DOT__index)),32);
    bufp->fullBit(oldp+95,(vlSelf->tb_Main_processor__DOT__OG__DOT__stall_o));
    bufp->fullBit(oldp+96,(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__pc_misalign));
    bufp->fullBit(oldp+97,((1U & (vlSelf->tb_Main_processor__DOT__OG__DOT__index 
                                  >> 1U))));
    bufp->fullSData(oldp+98,(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__misalign__DOT__upper_16),16);
    bufp->fullBit(oldp+99,((3U == (3U & (vlSelf->tb_Main_processor__DOT__OG__DOT__instruction 
                                         >> 0x10U)))));
    bufp->fullBit(oldp+100,(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__misalign__DOT__next_misaligned));
    bufp->fullCData(oldp+101,(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__misalign__DOT__current_state),2);
    bufp->fullCData(oldp+102,((0x7fU & vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode)),7);
    bufp->fullBit(oldp+103,((0x6fU == (0x7fU & vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode))));
    bufp->fullCData(oldp+104,((7U & (vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+105,((vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode 
                               >> 0x19U)),7);
    bufp->fullCData(oldp+106,((0x7fU & vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode)),7);
    bufp->fullIData(oldp+107,(vlSelf->tb_Main_processor__DOT__OG__DOT__data_memory__DOT__write_data),32);
    bufp->fullBit(oldp+108,(((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Stall) 
                             | (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__stall_o))));
    bufp->fullCData(oldp+109,((0x1fU & (vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+110,((0x1fU & (vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+111,((0x1fU & (vlSelf->tb_Main_processor__DOT__OG__DOT__IR_execute_memory 
                                        >> 7U))),5);
    bufp->fullBit(oldp+112,((1U & (~ (IData)((0U != (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst)))))));
    bufp->fullIData(oldp+113,(vlSelf->tb_Main_processor__DOT__OG__DOT__wdata),32);
    bufp->fullIData(oldp+114,(vlSelf->tb_Main_processor__DOT__OG__DOT__rdata),32);
    bufp->fullIData(oldp+115,(vlSelf->tb_Main_processor__DOT__OG__DOT__A),32);
    bufp->fullIData(oldp+116,(vlSelf->tb_Main_processor__DOT__OG__DOT__B),32);
    bufp->fullIData(oldp+117,(vlSelf->tb_Main_processor__DOT__OG__DOT__alu_out),32);
    bufp->fullIData(oldp+118,(vlSelf->tb_Main_processor__DOT__OG__DOT__A_for),32);
    bufp->fullIData(oldp+119,(vlSelf->tb_Main_processor__DOT__OG__DOT__B_for),32);
    bufp->fullBit(oldp+120,(vlSelf->tb_Main_processor__DOT__OG__DOT__Br_taken));
    bufp->fullIData(oldp+121,(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__instruction),32);
    bufp->fullCData(oldp+122,((3U & (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst))),2);
    bufp->fullSData(oldp+123,((0xfffU & ((0xc0U & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                   << 4U)) 
                                         | ((0x20U 
                                             & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                >> 7U)) 
                                            | (0x1cU 
                                               & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                  >> 2U)))))),12);
    bufp->fullSData(oldp+124,((0xfffU & ((0xc0U & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                   >> 1U)) 
                                         | (0x3cU & 
                                            ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                             >> 7U))))),12);
    bufp->fullSData(oldp+125,((0xfffU & ((IData)(vlSelf->__VdfgTmp_hbc79abe5__0) 
                                         << 2U))),12);
    bufp->fullSData(oldp+126,(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__imm_Li),12);
    bufp->fullCData(oldp+127,((0x1fU & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                        >> 2U))),5);
    bufp->fullCData(oldp+128,((0x1fU & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                        >> 7U))),5);
    bufp->fullIData(oldp+129,(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__imm_jump),20);
    bufp->fullIData(oldp+130,(((0xc0000U & ((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                           >> 0xcU)))) 
                                            << 0x12U)) 
                               | ((0x20000U & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                               << 5U)) 
                                  | (0x1f000U & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                 << 0xaU))))),20);
    bufp->fullIData(oldp+131,(((0xffc00U & ((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                           >> 0xcU)))) 
                                            << 0xaU)) 
                               | ((0x200U & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                             >> 3U)) 
                                  | ((0x180U & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                << 4U)) 
                                     | ((0x40U & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                  << 1U)) 
                                        | ((0x20U & 
                                            ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                             << 3U)) 
                                           | (0x10U 
                                              & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                 >> 2U)))))))),20);
    bufp->fullCData(oldp+132,((7U & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                     >> 0xdU))),3);
    bufp->fullCData(oldp+133,((8U | (7U & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                           >> 7U)))),5);
    bufp->fullCData(oldp+134,((8U | (7U & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                           >> 2U)))),5);
    bufp->fullSData(oldp+135,(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst),16);
    bufp->fullBit(oldp+136,((0U != (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst))));
    bufp->fullCData(oldp+137,((0xffU & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                        >> 5U))),8);
    bufp->fullSData(oldp+138,(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_imm_branch),12);
    bufp->fullSData(oldp+139,((0xfffU & ((0xf00U & 
                                          ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                           << 1U)) 
                                         | ((0xc0U 
                                             & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                >> 5U)) 
                                            | ((0x20U 
                                                & (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst)) 
                                               | (0x10U 
                                                  & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                     >> 2U))))))),12);
    bufp->fullIData(oldp+140,((0x40403U | ((0xfff00000U 
                                            & ((IData)(vlSelf->__VdfgTmp_hbc79abe5__0) 
                                               << 0x16U)) 
                                           | ((0x38000U 
                                               & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                  << 8U)) 
                                              | ((0x7000U 
                                                  & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                     >> 1U)) 
                                                 | (0x380U 
                                                    & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                       << 5U))))))),32);
    bufp->fullIData(oldp+141,((0x842023U | ((0xfe000000U 
                                             & ((IData)(vlSelf->__VdfgTmp_hbc79abe5__0) 
                                                << 0x16U)) 
                                            | ((0x700000U 
                                                & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                   << 0x12U)) 
                                               | ((0x38000U 
                                                   & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                      << 8U)) 
                                                  | (0xf80U 
                                                     & ((IData)(vlSelf->__VdfgTmp_hbc79abe5__0) 
                                                        << 9U))))))),32);
    bufp->fullIData(oldp+142,((0x10003U | ((0xfff00000U 
                                            & ((0xc000000U 
                                                & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                   << 0x18U)) 
                                               | ((0x2000000U 
                                                   & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                      << 0xdU)) 
                                                  | (0x1c00000U 
                                                     & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                        << 0x12U))))) 
                                           | ((0x7000U 
                                               & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                  >> 1U)) 
                                              | (0xf80U 
                                                 & (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst)))))),32);
    bufp->fullIData(oldp+143,((0x12023U | ((0xfe000000U 
                                            & ((0xc000000U 
                                                & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                   << 0x13U)) 
                                               | (0x2000000U 
                                                  & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                     << 0xdU)))) 
                                           | ((0x1f00000U 
                                               & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                  << 0x12U)) 
                                              | (0xf80U 
                                                 & ((0x2000U 
                                                     & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                        << 6U)) 
                                                    | (0x1e00U 
                                                       & (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst)))))))),32);
    bufp->fullIData(oldp+144,((0xefU | ((0x80000000U 
                                         & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                            << 0x13U)) 
                                        | (((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT____VdfgTmp_h8edfb114__0) 
                                            << 0x15U) 
                                           | ((0x100000U 
                                               & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                  << 0xcU)) 
                                              | (0xff000U 
                                                 & (vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__imm_jump 
                                                    << 1U))))))),32);
    bufp->fullIData(oldp+145,((0x6fU | ((0x80000000U 
                                         & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                            << 0x13U)) 
                                        | (((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT____VdfgTmp_h8edfb114__0) 
                                            << 0x15U) 
                                           | ((0x100000U 
                                               & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                  << 0xcU)) 
                                              | (0xff000U 
                                                 & (vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__imm_jump 
                                                    << 1U))))))),32);
    bufp->fullIData(oldp+146,((0xe7U | (0xf8000U & 
                                        ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                         << 8U)))),32);
    bufp->fullIData(oldp+147,((0x67U | (0xf8000U & 
                                        ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                         << 8U)))),32);
    bufp->fullIData(oldp+148,((0x41000U | ((0x80000000U 
                                            & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                               << 0x13U)) 
                                           | ((0x7e000000U 
                                               & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_imm_branch) 
                                                  << 0x15U)) 
                                              | ((0x38000U 
                                                  & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                     << 8U)) 
                                                 | (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT____VdfgTmp_h38e9dc89__0)))))),32);
    bufp->fullIData(oldp+149,((0x40000U | ((0x80000000U 
                                            & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                               << 0x13U)) 
                                           | ((0x7e000000U 
                                               & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_imm_branch) 
                                                  << 0x15U)) 
                                              | ((0x38000U 
                                                  & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                     << 8U)) 
                                                 | (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT____VdfgTmp_h38e9dc89__0)))))),32);
    bufp->fullIData(oldp+150,((0x13U | (((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__imm_Li) 
                                         << 0x14U) 
                                        | (0xf80U & (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst))))),32);
    bufp->fullIData(oldp+151,((0x37U | ((((- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                         >> 0xcU)))) 
                                          << 0x1eU) 
                                         | ((0x20000000U 
                                             & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                << 0x11U)) 
                                            | (0x1f000000U 
                                               & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                  << 0x16U)))) 
                                        | (0xf80U & (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst))))),32);
    bufp->fullIData(oldp+152,((0x13U | (((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__imm_Li) 
                                         << 0x14U) 
                                        | ((0xf8000U 
                                            & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                               << 8U)) 
                                           | ((0x7000U 
                                               & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                  >> 1U)) 
                                              | (0xf80U 
                                                 & (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst))))))),32);
    bufp->fullIData(oldp+153,((0x137U | (((- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                         >> 0xcU)))) 
                                          << 0x16U) 
                                         | ((0x200000U 
                                             & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                << 9U)) 
                                            | ((0x180000U 
                                                & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                   << 0x10U)) 
                                               | ((0x40000U 
                                                   & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                      << 0xdU)) 
                                                  | ((0x20000U 
                                                      & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                         << 0xfU)) 
                                                     | (0x10000U 
                                                        & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                           << 0xaU))))))))),32);
    bufp->fullIData(oldp+154,((0x10413U | ((0xfff00000U 
                                            & ((0xf0000000U 
                                                & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                   << 0x15U)) 
                                               | ((0xc000000U 
                                                   & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                      << 0xfU)) 
                                                  | ((0x2000000U 
                                                      & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                         << 0x14U)) 
                                                     | (0x1000000U 
                                                        & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                           << 0x12U)))))) 
                                           | ((0x7000U 
                                               & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                  >> 1U)) 
                                              | (0x380U 
                                                 & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                    << 5U)))))),32);
    bufp->fullIData(oldp+155,((0x1013U | ((0x1f00000U 
                                           & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                              << 0x12U)) 
                                          | ((0xf8000U 
                                              & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                 << 8U)) 
                                             | (0xf80U 
                                                & (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst)))))),32);
    bufp->fullIData(oldp+156,(((0x1f00000U & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                              << 0x12U)) 
                               | vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT____VdfgTmp_h2395e5cd__0)),32);
    bufp->fullIData(oldp+157,((0x40000000U | ((0x1f00000U 
                                               & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                  << 0x12U)) 
                                              | vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT____VdfgTmp_h2395e5cd__0))),32);
    bufp->fullIData(oldp+158,((0x33U | ((0x1f00000U 
                                         & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                            << 0x12U)) 
                                        | ((0xf8000U 
                                            & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                               << 8U)) 
                                           | (0xf80U 
                                              & (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst)))))),32);
    bufp->fullIData(oldp+159,((0x47413U | (((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__imm_Li) 
                                            << 0x14U) 
                                           | ((0x38000U 
                                               & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                  << 8U)) 
                                              | (0x380U 
                                                 & (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst)))))),32);
    bufp->fullIData(oldp+160,((0x33U | ((0x1f00000U 
                                         & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                            << 0x12U)) 
                                        | (0xf80U & (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst))))),32);
    bufp->fullIData(oldp+161,((0x847433U | ((0x700000U 
                                             & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                << 0x12U)) 
                                            | ((0x38000U 
                                                & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                   << 8U)) 
                                               | (0x380U 
                                                  & (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst)))))),32);
    bufp->fullIData(oldp+162,((0x846433U | ((0x700000U 
                                             & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                << 0x12U)) 
                                            | ((0x38000U 
                                                & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                   << 8U)) 
                                               | (0x380U 
                                                  & (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst)))))),32);
    bufp->fullIData(oldp+163,((0x844433U | ((0x700000U 
                                             & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                << 0x12U)) 
                                            | ((0x38000U 
                                                & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                   << 8U)) 
                                               | (0x380U 
                                                  & (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst)))))),32);
    bufp->fullIData(oldp+164,((0x40840433U | ((0x700000U 
                                               & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                  << 0x12U)) 
                                              | ((0x38000U 
                                                  & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                     << 8U)) 
                                                 | (0x380U 
                                                    & (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst)))))),32);
    bufp->fullIData(oldp+165,(vlSelf->tb_Main_processor__DOT__OG__DOT__data_memory__DOT__data),32);
    bufp->fullBit(oldp+166,(vlSelf->tb_Main_processor__DOT__clk));
    bufp->fullBit(oldp+167,(vlSelf->tb_Main_processor__DOT__reset));
    bufp->fullIData(oldp+168,(((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__pc_half_o)
                                ? ((IData)(2U) + vlSelf->tb_Main_processor__DOT__OG__DOT__index)
                                : ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__pc_half_o)
                                    ? ((IData)(4U) 
                                       + vlSelf->tb_Main_processor__DOT__OG__DOT__index)
                                    : ((IData)(4U) 
                                       + vlSelf->tb_Main_processor__DOT__OG__DOT__index)))),32);
    bufp->fullIData(oldp+169,(((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__br_taken)
                                ? vlSelf->tb_Main_processor__DOT__OG__DOT__ALU_execute_memory
                                : ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__pc_half_o)
                                    ? ((IData)(2U) 
                                       + vlSelf->tb_Main_processor__DOT__OG__DOT__index)
                                    : ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__pc_half_o)
                                        ? ((IData)(4U) 
                                           + vlSelf->tb_Main_processor__DOT__OG__DOT__index)
                                        : ((IData)(4U) 
                                           + vlSelf->tb_Main_processor__DOT__OG__DOT__index))))),32);
    bufp->fullIData(oldp+170,(vlSelf->tb_Main_processor__DOT__OG__DOT__register_file__DOT__registerfile
                              [(0x1fU & (vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode 
                                         >> 0xfU))]),32);
    bufp->fullIData(oldp+171,(vlSelf->tb_Main_processor__DOT__OG__DOT__register_file__DOT__registerfile
                              [(0x1fU & (vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode 
                                         >> 0x14U))]),32);
    bufp->fullIData(oldp+172,(vlSelf->tb_Main_processor__DOT__OG__DOT__instr_o),32);
    bufp->fullBit(oldp+173,(vlSelf->tb_Main_processor__DOT__OG__DOT__pc_half_o));
    bufp->fullIData(oldp+174,(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__misalign__DOT__conc_32_misallign),32);
    bufp->fullCData(oldp+175,(((0U == (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__misalign__DOT__current_state))
                                ? ((3U == (3U & (vlSelf->tb_Main_processor__DOT__OG__DOT__instruction 
                                                 >> 0x10U)))
                                    ? 1U : 0U) : ((1U 
                                                   == (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__misalign__DOT__current_state))
                                                   ? 
                                                  ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Br_taken)
                                                    ? 0U
                                                    : 2U)
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__misalign__DOT__current_state))
                                                    ? 
                                                   ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Br_taken)
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__misalign__DOT__next_misaligned)
                                                      ? 1U
                                                      : 0U))
                                                    : 0U)))),2);
    bufp->fullBit(oldp+176,(((0x63U == (0x7fU & vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode)) 
                             & ((4U & (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__br_type))
                                 ? ((2U & (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__br_type))
                                     ? ((1U & (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__br_type))
                                         ? VL_GTES_III(32, vlSelf->tb_Main_processor__DOT__OG__DOT__A_for, vlSelf->tb_Main_processor__DOT__OG__DOT__B_for)
                                         : VL_LTS_III(32, vlSelf->tb_Main_processor__DOT__OG__DOT__A_for, vlSelf->tb_Main_processor__DOT__OG__DOT__B_for))
                                     : ((1U & (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__br_type))
                                         ? (vlSelf->tb_Main_processor__DOT__OG__DOT__A_for 
                                            >= vlSelf->tb_Main_processor__DOT__OG__DOT__B_for)
                                         : (vlSelf->tb_Main_processor__DOT__OG__DOT__A_for 
                                            < vlSelf->tb_Main_processor__DOT__OG__DOT__B_for)))
                                 : ((~ ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__br_type) 
                                        >> 1U)) & (
                                                   (1U 
                                                    & (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__br_type))
                                                    ? 
                                                   (vlSelf->tb_Main_processor__DOT__OG__DOT__A_for 
                                                    != vlSelf->tb_Main_processor__DOT__OG__DOT__B_for)
                                                    : 
                                                   (vlSelf->tb_Main_processor__DOT__OG__DOT__A_for 
                                                    == vlSelf->tb_Main_processor__DOT__OG__DOT__B_for)))))));
    bufp->fullIData(oldp+177,(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__inst_r_type),32);
    bufp->fullIData(oldp+178,(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__inst_r_comp_type),32);
    bufp->fullIData(oldp+179,(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__inst_nop),32);
    bufp->fullIData(oldp+180,(0x100073U),32);
    bufp->fullCData(oldp+181,(3U),7);
    bufp->fullCData(oldp+182,(0x23U),7);
    bufp->fullCData(oldp+183,(0x33U),7);
    bufp->fullCData(oldp+184,(0x13U),7);
    bufp->fullCData(oldp+185,(0x6fU),7);
    bufp->fullCData(oldp+186,(0x63U),7);
    bufp->fullCData(oldp+187,(0x67U),7);
    bufp->fullCData(oldp+188,(0x37U),7);
    bufp->fullCData(oldp+189,(0x17U),7);
}
