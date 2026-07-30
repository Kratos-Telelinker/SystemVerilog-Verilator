// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtinyalu__Syms.h"


void Vtinyalu___024root__trace_chg_0_sub_0(Vtinyalu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtinyalu___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtinyalu___024root__trace_chg_0\n"); );
    // Body
    Vtinyalu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtinyalu___024root*>(voidSelf);
    Vtinyalu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtinyalu___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtinyalu___024root__trace_chg_dtype____0(Vtinyalu___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*15:0*/, 3>& __VdtypeVar);
void Vtinyalu___024root__trace_chg_dtype____1(Vtinyalu___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*15:0*/, 3>& __VdtypeVar);
void Vtinyalu___024root__trace_chg_dtype____2(Vtinyalu___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*15:0*/, 3>& __VdtypeVar);
void Vtinyalu___024root__trace_chg_dtype____3(Vtinyalu___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 3>& __VdtypeVar);

void Vtinyalu___024root__trace_chg_0_sub_0(Vtinyalu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtinyalu___024root__trace_chg_0_sub_0\n"); );
    Vtinyalu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.tinyalu__DOT__done_aax));
        bufp->chgBit(oldp+1,(vlSelfRef.tinyalu__DOT__done_mult));
        bufp->chgSData(oldp+2,(vlSelfRef.tinyalu__DOT__result_aax),16);
        bufp->chgSData(oldp+3,(vlSelfRef.tinyalu__DOT__result_mult),16);
        bufp->chgSData(oldp+4,(vlSelfRef.tinyalu__DOT__prev_result),16);
        bufp->chgIData(oldp+5,(vlSelfRef.tinyalu__DOT__cov_add),32);
        bufp->chgIData(oldp+6,(vlSelfRef.tinyalu__DOT__cov_and),32);
        bufp->chgIData(oldp+7,(vlSelfRef.tinyalu__DOT__cov_xor),32);
        bufp->chgIData(oldp+8,(vlSelfRef.tinyalu__DOT__cov_mul),32);
        bufp->chgIData(oldp+9,(vlSelfRef.tinyalu__DOT__cov_nop),32);
        Vtinyalu___024root__trace_chg_dtype____0(vlSelf, bufp, 10, vlSelfRef.tinyalu__DOT__u_three_cycle__DOT__a_pipe);
        Vtinyalu___024root__trace_chg_dtype____1(vlSelf, bufp, 13, vlSelfRef.tinyalu__DOT__u_three_cycle__DOT__b_pipe);
        Vtinyalu___024root__trace_chg_dtype____2(vlSelf, bufp, 16, vlSelfRef.tinyalu__DOT__u_three_cycle__DOT__mult_pipe);
        Vtinyalu___024root__trace_chg_dtype____3(vlSelf, bufp, 19, vlSelfRef.tinyalu__DOT__u_three_cycle__DOT__done_pipe);
        bufp->chgIData(oldp+22,(vlSelfRef.tinyalu__DOT__u_three_cycle__DOT__i),32);
    }
    bufp->chgSData(oldp+23,(vlSelfRef.A),16);
    bufp->chgSData(oldp+24,(vlSelfRef.B),16);
    bufp->chgBit(oldp+25,(vlSelfRef.clk));
    bufp->chgBit(oldp+26,(vlSelfRef.reset_n));
    bufp->chgBit(oldp+27,(vlSelfRef.start));
    bufp->chgCData(oldp+28,(vlSelfRef.op),3);
    bufp->chgBit(oldp+29,(vlSelfRef.done));
    bufp->chgSData(oldp+30,(vlSelfRef.result),16);
    bufp->chgBit(oldp+31,(vlSelfRef.tinyalu__DOT__start_single));
    bufp->chgBit(oldp+32,(vlSelfRef.tinyalu__DOT__start_mult));
}

void Vtinyalu___024root__trace_chg_dtype____0(Vtinyalu___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*15:0*/, 3>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtinyalu___024root__trace_chg_dtype____0\n"); );
    Vtinyalu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgSData(oldp+0,(__VdtypeVar[0]),16);
    bufp->chgSData(oldp+1,(__VdtypeVar[1]),16);
    bufp->chgSData(oldp+2,(__VdtypeVar[2]),16);
}

void Vtinyalu___024root__trace_chg_dtype____1(Vtinyalu___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*15:0*/, 3>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtinyalu___024root__trace_chg_dtype____1\n"); );
    Vtinyalu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgSData(oldp+0,(__VdtypeVar[0]),16);
    bufp->chgSData(oldp+1,(__VdtypeVar[1]),16);
    bufp->chgSData(oldp+2,(__VdtypeVar[2]),16);
}

void Vtinyalu___024root__trace_chg_dtype____2(Vtinyalu___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*15:0*/, 3>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtinyalu___024root__trace_chg_dtype____2\n"); );
    Vtinyalu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgSData(oldp+0,(__VdtypeVar[0]),16);
    bufp->chgSData(oldp+1,(__VdtypeVar[1]),16);
    bufp->chgSData(oldp+2,(__VdtypeVar[2]),16);
}

void Vtinyalu___024root__trace_chg_dtype____3(Vtinyalu___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 3>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtinyalu___024root__trace_chg_dtype____3\n"); );
    Vtinyalu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgBit(oldp+0,(__VdtypeVar[0]));
    bufp->chgBit(oldp+1,(__VdtypeVar[1]));
    bufp->chgBit(oldp+2,(__VdtypeVar[2]));
}

void Vtinyalu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtinyalu___024root__trace_cleanup\n"); );
    // Body
    Vtinyalu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtinyalu___024root*>(voidSelf);
    Vtinyalu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
