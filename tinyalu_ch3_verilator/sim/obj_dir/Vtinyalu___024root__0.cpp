// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtinyalu.h for the primary calling header

#include "Vtinyalu__pch.h"

bool Vtinyalu___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtinyalu___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((2U > n));
    return (0U);
}

void Vtinyalu___024root___eval_ico(Vtinyalu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtinyalu___024root___eval_ico\n"); );
    Vtinyalu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
        {
            // Inlined CFunc: _ico_sequent__TOP__0
            if ((0U != ((IData)(vlSelfRef.A) ^ (IData)(vlSelfRef.tinyalu__DOT____Vtogcov__A)))) {
                VL_COV_TOGGLE_CHG_ST_I(16, vlSelf->__Vcoverage + 0, vlSelfRef.A, vlSelfRef.tinyalu__DOT____Vtogcov__A);
                vlSelfRef.tinyalu__DOT____Vtogcov__A 
                    = vlSelfRef.A;
            }
        }
    }
    if ((2ULL & vlSelfRef.__VicoTriggered[0U])) {
        {
            // Inlined CFunc: _ico_sequent__TOP__1
            if ((0U != ((IData)(vlSelfRef.B) ^ (IData)(vlSelfRef.tinyalu__DOT____Vtogcov__B)))) {
                VL_COV_TOGGLE_CHG_ST_I(16, vlSelf->__Vcoverage + 32, vlSelfRef.B, vlSelfRef.tinyalu__DOT____Vtogcov__B);
                vlSelfRef.tinyalu__DOT____Vtogcov__B 
                    = vlSelfRef.B;
            }
        }
    }
    if ((4ULL & vlSelfRef.__VicoTriggered[0U])) {
        {
            // Inlined CFunc: _ico_sequent__TOP__2
            if (((IData)(vlSelfRef.clk) ^ (IData)(vlSelfRef.tinyalu__DOT____Vtogcov__clk))) {
                VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 64, vlSelfRef.clk, vlSelfRef.tinyalu__DOT____Vtogcov__clk);
                vlSelfRef.tinyalu__DOT____Vtogcov__clk 
                    = vlSelfRef.clk;
            }
        }
    }
    if ((8ULL & vlSelfRef.__VicoTriggered[0U])) {
        {
            // Inlined CFunc: _ico_sequent__TOP__3
            if (((IData)(vlSelfRef.reset_n) ^ (IData)(vlSelfRef.tinyalu__DOT____Vtogcov__reset_n))) {
                VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 66, vlSelfRef.reset_n, vlSelfRef.tinyalu__DOT____Vtogcov__reset_n);
                vlSelfRef.tinyalu__DOT____Vtogcov__reset_n 
                    = vlSelfRef.reset_n;
            }
        }
    }
    if ((0x0000000000000010ULL & vlSelfRef.__VicoTriggered[0U])) {
        {
            // Inlined CFunc: _ico_sequent__TOP__4
            if (((IData)(vlSelfRef.start) ^ (IData)(vlSelfRef.tinyalu__DOT____Vtogcov__start))) {
                VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 68, vlSelfRef.start, vlSelfRef.tinyalu__DOT____Vtogcov__start);
                vlSelfRef.tinyalu__DOT____Vtogcov__start 
                    = vlSelfRef.start;
            }
        }
    }
    if ((0x0000000000000020ULL & vlSelfRef.__VicoTriggered[0U])) {
        {
            // Inlined CFunc: _ico_sequent__TOP__5
            if ((0U != ((IData)(vlSelfRef.op) ^ (IData)(vlSelfRef.tinyalu__DOT____Vtogcov__op)))) {
                VL_COV_TOGGLE_CHG_ST_I(3, vlSelf->__Vcoverage + 70, vlSelfRef.op, vlSelfRef.tinyalu__DOT____Vtogcov__op);
                vlSelfRef.tinyalu__DOT____Vtogcov__op 
                    = vlSelfRef.op;
            }
            vlSelfRef.done = 0U;
            if ((4U & (IData)(vlSelfRef.op))) {
                if ((2U & (IData)(vlSelfRef.op))) {
                    vlSelfRef.done = 0U;
                    ++(vlSelf->__Vcoverage[240]);
                } else if ((1U & (IData)(vlSelfRef.op))) {
                    vlSelfRef.done = 0U;
                    ++(vlSelf->__Vcoverage[240]);
                } else {
                    vlSelfRef.done = vlSelfRef.tinyalu__DOT__done_mult;
                    ++(vlSelf->__Vcoverage[239]);
                }
            } else if ((2U & (IData)(vlSelfRef.op))) {
                if ((1U & (IData)(vlSelfRef.op))) {
                    vlSelfRef.done = vlSelfRef.tinyalu__DOT__done_aax;
                    ++(vlSelf->__Vcoverage[238]);
                } else {
                    vlSelfRef.done = vlSelfRef.tinyalu__DOT__done_aax;
                    ++(vlSelf->__Vcoverage[237]);
                }
            } else if ((1U & (IData)(vlSelfRef.op))) {
                vlSelfRef.done = vlSelfRef.tinyalu__DOT__done_aax;
                ++(vlSelf->__Vcoverage[236]);
            } else {
                vlSelfRef.done = 0U;
                ++(vlSelf->__Vcoverage[235]);
            }
            ++(vlSelf->__Vcoverage[241]);
            vlSelfRef.result = 0U;
            if ((4U & (IData)(vlSelfRef.op))) {
                if ((2U & (IData)(vlSelfRef.op))) {
                    vlSelfRef.result = vlSelfRef.tinyalu__DOT__prev_result;
                    ++(vlSelf->__Vcoverage[233]);
                } else if ((1U & (IData)(vlSelfRef.op))) {
                    vlSelfRef.result = vlSelfRef.tinyalu__DOT__prev_result;
                    ++(vlSelf->__Vcoverage[233]);
                } else {
                    vlSelfRef.result = vlSelfRef.tinyalu__DOT__result_mult;
                    ++(vlSelf->__Vcoverage[232]);
                }
            } else if ((2U & (IData)(vlSelfRef.op))) {
                if ((1U & (IData)(vlSelfRef.op))) {
                    vlSelfRef.result = vlSelfRef.tinyalu__DOT__result_aax;
                    ++(vlSelf->__Vcoverage[231]);
                } else {
                    vlSelfRef.result = vlSelfRef.tinyalu__DOT__result_aax;
                    ++(vlSelf->__Vcoverage[230]);
                }
            } else if ((1U & (IData)(vlSelfRef.op))) {
                vlSelfRef.result = vlSelfRef.tinyalu__DOT__result_aax;
                ++(vlSelf->__Vcoverage[229]);
            } else {
                vlSelfRef.result = vlSelfRef.tinyalu__DOT__prev_result;
                ++(vlSelf->__Vcoverage[228]);
            }
            ++(vlSelf->__Vcoverage[234]);
            if (((IData)(vlSelfRef.done) ^ (IData)(vlSelfRef.tinyalu__DOT____Vtogcov__done))) {
                VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 76, vlSelfRef.done, vlSelfRef.tinyalu__DOT____Vtogcov__done);
                vlSelfRef.tinyalu__DOT____Vtogcov__done 
                    = vlSelfRef.done;
            }
            if ((0U != ((IData)(vlSelfRef.result) ^ (IData)(vlSelfRef.tinyalu__DOT____Vtogcov__result)))) {
                VL_COV_TOGGLE_CHG_ST_I(16, vlSelf->__Vcoverage + 78, vlSelfRef.result, vlSelfRef.tinyalu__DOT____Vtogcov__result);
                vlSelfRef.tinyalu__DOT____Vtogcov__result 
                    = vlSelfRef.result;
            }
        }
    }
    if ((0x0000000000000030ULL & vlSelfRef.__VicoTriggered[0U])) {
        {
            // Inlined CFunc: _ico_comb__TOP__0
            if ((4U == (IData)(vlSelfRef.op))) {
                vlSelfRef.tinyalu__DOT__start_single = 0U;
                vlSelfRef.tinyalu__DOT__start_mult 
                    = vlSelfRef.start;
                ++(vlSelf->__Vcoverage[225]);
            } else {
                vlSelfRef.tinyalu__DOT__start_single 
                    = vlSelfRef.start;
                vlSelfRef.tinyalu__DOT__start_mult = 0U;
                ++(vlSelf->__Vcoverage[226]);
            }
            ++(vlSelf->__Vcoverage[227]);
            if (((IData)(vlSelfRef.tinyalu__DOT__start_single) 
                 ^ (IData)(vlSelfRef.tinyalu__DOT____Vtogcov__start_single))) {
                VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 110, vlSelfRef.tinyalu__DOT__start_single, vlSelfRef.tinyalu__DOT____Vtogcov__start_single);
                vlSelfRef.tinyalu__DOT____Vtogcov__start_single 
                    = vlSelfRef.tinyalu__DOT__start_single;
            }
            if (((IData)(vlSelfRef.tinyalu__DOT__start_mult) 
                 ^ (IData)(vlSelfRef.tinyalu__DOT____Vtogcov__start_mult))) {
                VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 112, vlSelfRef.tinyalu__DOT__start_mult, vlSelfRef.tinyalu__DOT____Vtogcov__start_mult);
                vlSelfRef.tinyalu__DOT____Vtogcov__start_mult 
                    = vlSelfRef.tinyalu__DOT__start_mult;
            }
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtinyalu___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtinyalu___024root___eval_phase__ico(Vtinyalu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtinyalu___024root___eval_phase__ico\n"); );
    Vtinyalu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__ico
        vlSelfRef.__VicoTriggered[0U] = (QData)((IData)(
                                                        (((((IData)(vlSelfRef.op) 
                                                            != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__op__0)) 
                                                           << 5U) 
                                                          | (((IData)(vlSelfRef.start) 
                                                              != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__start__0)) 
                                                             << 4U)) 
                                                         | (((((IData)(vlSelfRef.reset_n) 
                                                               != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__reset_n__0)) 
                                                              << 3U) 
                                                             | (((IData)(vlSelfRef.clk) 
                                                                 != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0)) 
                                                                << 2U)) 
                                                            | ((((IData)(vlSelfRef.B) 
                                                                 != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__B__0)) 
                                                                << 1U) 
                                                               | ((IData)(vlSelfRef.A) 
                                                                  != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__A__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__A__0 = vlSelfRef.A;
        vlSelfRef.__Vtrigprevexpr___TOP__B__0 = vlSelfRef.B;
        vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
        vlSelfRef.__Vtrigprevexpr___TOP__reset_n__0 
            = vlSelfRef.reset_n;
        vlSelfRef.__Vtrigprevexpr___TOP__start__0 = vlSelfRef.start;
        vlSelfRef.__Vtrigprevexpr___TOP__op__0 = vlSelfRef.op;
        if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VicoDidInit)))))) {
            vlSelfRef.__VicoDidInit = 1U;
            vlSelfRef.__VicoTriggered[0U] = (1ULL | vlSelfRef.__VicoTriggered[0U]);
            vlSelfRef.__VicoTriggered[0U] = (2ULL | vlSelfRef.__VicoTriggered[0U]);
            vlSelfRef.__VicoTriggered[0U] = (4ULL | vlSelfRef.__VicoTriggered[0U]);
            vlSelfRef.__VicoTriggered[0U] = (8ULL | vlSelfRef.__VicoTriggered[0U]);
            vlSelfRef.__VicoTriggered[0U] = (0x0000000000000010ULL 
                                             | vlSelfRef.__VicoTriggered[0U]);
            vlSelfRef.__VicoTriggered[0U] = (0x0000000000000020ULL 
                                             | vlSelfRef.__VicoTriggered[0U]);
        }
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtinyalu___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = Vtinyalu___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        Vtinyalu___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

bool Vtinyalu___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtinyalu___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vtinyalu___024root___nba_sequent__TOP__0(Vtinyalu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtinyalu___024root___nba_sequent__TOP__0\n"); );
    Vtinyalu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__tinyalu__DOT__cov_nop;
    __Vdly__tinyalu__DOT__cov_nop = 0;
    SData/*15:0*/ __VdlyVal__tinyalu__DOT__u_three_cycle__DOT__mult_pipe__v0;
    __VdlyVal__tinyalu__DOT__u_three_cycle__DOT__mult_pipe__v0 = 0;
    CData/*0:0*/ __VdlySet__tinyalu__DOT__u_three_cycle__DOT__mult_pipe__v0;
    __VdlySet__tinyalu__DOT__u_three_cycle__DOT__mult_pipe__v0 = 0;
    CData/*0:0*/ __VdlyVal__tinyalu__DOT__u_three_cycle__DOT__done_pipe__v0;
    __VdlyVal__tinyalu__DOT__u_three_cycle__DOT__done_pipe__v0 = 0;
    SData/*15:0*/ __VdlyVal__tinyalu__DOT__u_three_cycle__DOT__a_pipe__v0;
    __VdlyVal__tinyalu__DOT__u_three_cycle__DOT__a_pipe__v0 = 0;
    CData/*0:0*/ __VdlySet__tinyalu__DOT__u_three_cycle__DOT__a_pipe__v0;
    __VdlySet__tinyalu__DOT__u_three_cycle__DOT__a_pipe__v0 = 0;
    SData/*15:0*/ __VdlyVal__tinyalu__DOT__u_three_cycle__DOT__b_pipe__v0;
    __VdlyVal__tinyalu__DOT__u_three_cycle__DOT__b_pipe__v0 = 0;
    SData/*15:0*/ __VdlyVal__tinyalu__DOT__u_three_cycle__DOT__mult_pipe__v1;
    __VdlyVal__tinyalu__DOT__u_three_cycle__DOT__mult_pipe__v1 = 0;
    CData/*0:0*/ __VdlyVal__tinyalu__DOT__u_three_cycle__DOT__done_pipe__v1;
    __VdlyVal__tinyalu__DOT__u_three_cycle__DOT__done_pipe__v1 = 0;
    SData/*15:0*/ __VdlyVal__tinyalu__DOT__u_three_cycle__DOT__a_pipe__v1;
    __VdlyVal__tinyalu__DOT__u_three_cycle__DOT__a_pipe__v1 = 0;
    CData/*0:0*/ __VdlySet__tinyalu__DOT__u_three_cycle__DOT__a_pipe__v1;
    __VdlySet__tinyalu__DOT__u_three_cycle__DOT__a_pipe__v1 = 0;
    SData/*15:0*/ __VdlyVal__tinyalu__DOT__u_three_cycle__DOT__b_pipe__v1;
    __VdlyVal__tinyalu__DOT__u_three_cycle__DOT__b_pipe__v1 = 0;
    SData/*15:0*/ __VdlyVal__tinyalu__DOT__u_three_cycle__DOT__mult_pipe__v2;
    __VdlyVal__tinyalu__DOT__u_three_cycle__DOT__mult_pipe__v2 = 0;
    CData/*0:0*/ __VdlyVal__tinyalu__DOT__u_three_cycle__DOT__done_pipe__v2;
    __VdlyVal__tinyalu__DOT__u_three_cycle__DOT__done_pipe__v2 = 0;
    SData/*15:0*/ __VdlyVal__tinyalu__DOT__u_three_cycle__DOT__a_pipe__v2;
    __VdlyVal__tinyalu__DOT__u_three_cycle__DOT__a_pipe__v2 = 0;
    CData/*0:0*/ __VdlySet__tinyalu__DOT__u_three_cycle__DOT__a_pipe__v2;
    __VdlySet__tinyalu__DOT__u_three_cycle__DOT__a_pipe__v2 = 0;
    SData/*15:0*/ __VdlyVal__tinyalu__DOT__u_three_cycle__DOT__b_pipe__v2;
    __VdlyVal__tinyalu__DOT__u_three_cycle__DOT__b_pipe__v2 = 0;
    CData/*0:0*/ __VdlySet__tinyalu__DOT__u_three_cycle__DOT__mult_pipe__v3;
    __VdlySet__tinyalu__DOT__u_three_cycle__DOT__mult_pipe__v3 = 0;
    CData/*0:0*/ __VdlySet__tinyalu__DOT__u_three_cycle__DOT__a_pipe__v3;
    __VdlySet__tinyalu__DOT__u_three_cycle__DOT__a_pipe__v3 = 0;
    CData/*0:0*/ __VdlySet__tinyalu__DOT__u_three_cycle__DOT__a_pipe__v4;
    __VdlySet__tinyalu__DOT__u_three_cycle__DOT__a_pipe__v4 = 0;
    CData/*0:0*/ __VdlySet__tinyalu__DOT__u_three_cycle__DOT__a_pipe__v5;
    __VdlySet__tinyalu__DOT__u_three_cycle__DOT__a_pipe__v5 = 0;
    // Body
    __Vdly__tinyalu__DOT__cov_nop = vlSelfRef.tinyalu__DOT__cov_nop;
    __VdlySet__tinyalu__DOT__u_three_cycle__DOT__mult_pipe__v0 = 0U;
    __VdlySet__tinyalu__DOT__u_three_cycle__DOT__mult_pipe__v3 = 0U;
    __VdlySet__tinyalu__DOT__u_three_cycle__DOT__a_pipe__v2 = 0U;
    __VdlySet__tinyalu__DOT__u_three_cycle__DOT__a_pipe__v5 = 0U;
    __VdlySet__tinyalu__DOT__u_three_cycle__DOT__a_pipe__v0 = 0U;
    __VdlySet__tinyalu__DOT__u_three_cycle__DOT__a_pipe__v1 = 0U;
    __VdlySet__tinyalu__DOT__u_three_cycle__DOT__a_pipe__v3 = 0U;
    __VdlySet__tinyalu__DOT__u_three_cycle__DOT__a_pipe__v4 = 0U;
    if (vlSelfRef.reset_n) {
        if (vlSelfRef.start) {
            if ((4U & (IData)(vlSelfRef.op))) {
                if ((2U & (IData)(vlSelfRef.op))) {
                    __Vdly__tinyalu__DOT__cov_nop = 
                        ((IData)(1U) + vlSelfRef.tinyalu__DOT__cov_nop);
                    ++(vlSelf->__Vcoverage[218]);
                } else if ((1U & (IData)(vlSelfRef.op))) {
                    __Vdly__tinyalu__DOT__cov_nop = 
                        ((IData)(1U) + vlSelfRef.tinyalu__DOT__cov_nop);
                    ++(vlSelf->__Vcoverage[218]);
                } else {
                    vlSelfRef.tinyalu__DOT__cov_mul 
                        = ((IData)(1U) + vlSelfRef.tinyalu__DOT__cov_mul);
                    ++(vlSelf->__Vcoverage[217]);
                }
            } else if ((2U & (IData)(vlSelfRef.op))) {
                if ((1U & (IData)(vlSelfRef.op))) {
                    vlSelfRef.tinyalu__DOT__cov_xor 
                        = ((IData)(1U) + vlSelfRef.tinyalu__DOT__cov_xor);
                    ++(vlSelf->__Vcoverage[216]);
                } else {
                    vlSelfRef.tinyalu__DOT__cov_and 
                        = ((IData)(1U) + vlSelfRef.tinyalu__DOT__cov_and);
                    ++(vlSelf->__Vcoverage[215]);
                }
            } else if ((1U & (IData)(vlSelfRef.op))) {
                vlSelfRef.tinyalu__DOT__cov_add = ((IData)(1U) 
                                                   + vlSelfRef.tinyalu__DOT__cov_add);
                ++(vlSelf->__Vcoverage[214]);
            } else {
                __Vdly__tinyalu__DOT__cov_nop = ((IData)(1U) 
                                                 + vlSelfRef.tinyalu__DOT__cov_nop);
                ++(vlSelf->__Vcoverage[218]);
            }
            ++(vlSelf->__Vcoverage[219]);
        } else {
            ++(vlSelf->__Vcoverage[220]);
        }
    } else {
        vlSelfRef.tinyalu__DOT__cov_add = 0U;
        vlSelfRef.tinyalu__DOT__cov_and = 0U;
        vlSelfRef.tinyalu__DOT__cov_xor = 0U;
        vlSelfRef.tinyalu__DOT__cov_mul = 0U;
        __Vdly__tinyalu__DOT__cov_nop = 0U;
        ++(vlSelf->__Vcoverage[221]);
    }
    if ((1U & (~ (IData)(vlSelfRef.reset_n)))) {
        ++(vlSelf->__Vcoverage[222]);
    }
    if (vlSelfRef.reset_n) {
        ++(vlSelf->__Vcoverage[223]);
    }
    ++(vlSelf->__Vcoverage[224]);
    if (vlSelfRef.reset_n) {
        ++(vlSelf->__Vcoverage[243]);
        vlSelfRef.tinyalu__DOT__prev_result = vlSelfRef.result;
    } else {
        ++(vlSelf->__Vcoverage[242]);
        vlSelfRef.tinyalu__DOT__prev_result = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.reset_n)))) {
        ++(vlSelf->__Vcoverage[244]);
    }
    if (vlSelfRef.reset_n) {
        ++(vlSelf->__Vcoverage[245]);
    }
    ++(vlSelf->__Vcoverage[246]);
    if (vlSelfRef.reset_n) {
        if (((IData)(vlSelfRef.tinyalu__DOT__start_single) 
             & (0U != (IData)(vlSelfRef.op)))) {
            ++(vlSelf->__Vcoverage[558]);
        }
        vlSelfRef.tinyalu__DOT__done_aax = ((IData)(vlSelfRef.tinyalu__DOT__start_single) 
                                            & (0U != (IData)(vlSelfRef.op)));
        if ((0U == (IData)(vlSelfRef.op))) {
            ++(vlSelf->__Vcoverage[559]);
        }
        if ((1U & (~ (IData)(vlSelfRef.tinyalu__DOT__start_single)))) {
            ++(vlSelf->__Vcoverage[560]);
        }
        ++(vlSelf->__Vcoverage[562]);
    } else {
        ++(vlSelf->__Vcoverage[561]);
        vlSelfRef.tinyalu__DOT__done_aax = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.reset_n)))) {
        ++(vlSelf->__Vcoverage[563]);
    }
    if (vlSelfRef.reset_n) {
        ++(vlSelf->__Vcoverage[564]);
    }
    ++(vlSelf->__Vcoverage[565]);
    if (vlSelfRef.reset_n) {
        if (vlSelfRef.tinyalu__DOT__start_single) {
            if ((1U == (IData)(vlSelfRef.op))) {
                ++(vlSelf->__Vcoverage[548]);
                vlSelfRef.tinyalu__DOT__result_aax 
                    = (0x0000ffffU & ((IData)(vlSelfRef.A) 
                                      + (IData)(vlSelfRef.B)));
            } else if ((2U == (IData)(vlSelfRef.op))) {
                ++(vlSelf->__Vcoverage[549]);
                vlSelfRef.tinyalu__DOT__result_aax 
                    = ((IData)(vlSelfRef.A) & (IData)(vlSelfRef.B));
            } else if ((3U == (IData)(vlSelfRef.op))) {
                ++(vlSelf->__Vcoverage[550]);
                vlSelfRef.tinyalu__DOT__result_aax 
                    = ((IData)(vlSelfRef.A) ^ (IData)(vlSelfRef.B));
            } else {
                ++(vlSelf->__Vcoverage[551]);
            }
            ++(vlSelf->__Vcoverage[552]);
        } else {
            ++(vlSelf->__Vcoverage[553]);
        }
    } else {
        ++(vlSelf->__Vcoverage[554]);
        vlSelfRef.tinyalu__DOT__result_aax = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.reset_n)))) {
        ++(vlSelf->__Vcoverage[555]);
    }
    if (vlSelfRef.reset_n) {
        ++(vlSelf->__Vcoverage[556]);
    }
    ++(vlSelf->__Vcoverage[557]);
    if (vlSelfRef.reset_n) {
        __VdlyVal__tinyalu__DOT__u_three_cycle__DOT__mult_pipe__v0 
            = (0x0000ffffU & ((IData)(vlSelfRef.A) 
                              * (IData)(vlSelfRef.B)));
        __VdlySet__tinyalu__DOT__u_three_cycle__DOT__mult_pipe__v0 = 1U;
        __VdlyVal__tinyalu__DOT__u_three_cycle__DOT__done_pipe__v0 
            = vlSelfRef.tinyalu__DOT__start_mult;
        ++(vlSelf->__Vcoverage[542]);
        vlSelfRef.tinyalu__DOT__u_three_cycle__DOT__i = 3U;
        __VdlyVal__tinyalu__DOT__u_three_cycle__DOT__a_pipe__v0 
            = vlSelfRef.A;
        __VdlySet__tinyalu__DOT__u_three_cycle__DOT__a_pipe__v0 = 1U;
        __VdlyVal__tinyalu__DOT__u_three_cycle__DOT__b_pipe__v0 
            = vlSelfRef.B;
        __VdlyVal__tinyalu__DOT__u_three_cycle__DOT__mult_pipe__v1 
            = vlSelfRef.tinyalu__DOT__u_three_cycle__DOT__mult_pipe[0U];
        __VdlyVal__tinyalu__DOT__u_three_cycle__DOT__done_pipe__v1 
            = vlSelfRef.tinyalu__DOT__u_three_cycle__DOT__done_pipe[0U];
        ++(vlSelf->__Vcoverage[542]);
        __VdlyVal__tinyalu__DOT__u_three_cycle__DOT__a_pipe__v1 
            = vlSelfRef.tinyalu__DOT__u_three_cycle__DOT__a_pipe[0U];
        __VdlySet__tinyalu__DOT__u_three_cycle__DOT__a_pipe__v1 = 1U;
        __VdlyVal__tinyalu__DOT__u_three_cycle__DOT__b_pipe__v1 
            = vlSelfRef.tinyalu__DOT__u_three_cycle__DOT__b_pipe[0U];
        __VdlyVal__tinyalu__DOT__u_three_cycle__DOT__mult_pipe__v2 
            = vlSelfRef.tinyalu__DOT__u_three_cycle__DOT__mult_pipe[1U];
        __VdlyVal__tinyalu__DOT__u_three_cycle__DOT__done_pipe__v2 
            = vlSelfRef.tinyalu__DOT__u_three_cycle__DOT__done_pipe[1U];
        ++(vlSelf->__Vcoverage[544]);
        __VdlyVal__tinyalu__DOT__u_three_cycle__DOT__a_pipe__v2 
            = vlSelfRef.tinyalu__DOT__u_three_cycle__DOT__a_pipe[1U];
        __VdlySet__tinyalu__DOT__u_three_cycle__DOT__a_pipe__v2 = 1U;
        __VdlyVal__tinyalu__DOT__u_three_cycle__DOT__b_pipe__v2 
            = vlSelfRef.tinyalu__DOT__u_three_cycle__DOT__b_pipe[1U];
        vlSelfRef.tinyalu__DOT__result_mult = vlSelfRef.tinyalu__DOT__u_three_cycle__DOT__mult_pipe[2U];
        vlSelfRef.tinyalu__DOT__done_mult = vlSelfRef.tinyalu__DOT__u_three_cycle__DOT__done_pipe[2U];
    } else {
        __VdlySet__tinyalu__DOT__u_three_cycle__DOT__mult_pipe__v3 = 1U;
        ++(vlSelf->__Vcoverage[541]);
        vlSelfRef.tinyalu__DOT__u_three_cycle__DOT__i = 3U;
        __VdlySet__tinyalu__DOT__u_three_cycle__DOT__a_pipe__v3 = 1U;
        ++(vlSelf->__Vcoverage[541]);
        vlSelfRef.tinyalu__DOT__result_mult = 0U;
        vlSelfRef.tinyalu__DOT__done_mult = 0U;
        __VdlySet__tinyalu__DOT__u_three_cycle__DOT__a_pipe__v4 = 1U;
        ++(vlSelf->__Vcoverage[541]);
        __VdlySet__tinyalu__DOT__u_three_cycle__DOT__a_pipe__v5 = 1U;
        ++(vlSelf->__Vcoverage[543]);
    }
    if ((1U & (~ (IData)(vlSelfRef.reset_n)))) {
        ++(vlSelf->__Vcoverage[545]);
    }
    if (vlSelfRef.reset_n) {
        ++(vlSelf->__Vcoverage[546]);
    }
    ++(vlSelf->__Vcoverage[547]);
    vlSelfRef.tinyalu__DOT__cov_nop = __Vdly__tinyalu__DOT__cov_nop;
    if (__VdlySet__tinyalu__DOT__u_three_cycle__DOT__mult_pipe__v0) {
        vlSelfRef.tinyalu__DOT__u_three_cycle__DOT__mult_pipe[0U] 
            = __VdlyVal__tinyalu__DOT__u_three_cycle__DOT__mult_pipe__v0;
        vlSelfRef.tinyalu__DOT__u_three_cycle__DOT__done_pipe[0U] 
            = __VdlyVal__tinyalu__DOT__u_three_cycle__DOT__done_pipe__v0;
    }
    if (__VdlySet__tinyalu__DOT__u_three_cycle__DOT__a_pipe__v0) {
        vlSelfRef.tinyalu__DOT__u_three_cycle__DOT__mult_pipe[1U] 
            = __VdlyVal__tinyalu__DOT__u_three_cycle__DOT__mult_pipe__v1;
        vlSelfRef.tinyalu__DOT__u_three_cycle__DOT__done_pipe[1U] 
            = __VdlyVal__tinyalu__DOT__u_three_cycle__DOT__done_pipe__v1;
        vlSelfRef.tinyalu__DOT__u_three_cycle__DOT__a_pipe[0U] 
            = __VdlyVal__tinyalu__DOT__u_three_cycle__DOT__a_pipe__v0;
        vlSelfRef.tinyalu__DOT__u_three_cycle__DOT__b_pipe[0U] 
            = __VdlyVal__tinyalu__DOT__u_three_cycle__DOT__b_pipe__v0;
    }
    if (__VdlySet__tinyalu__DOT__u_three_cycle__DOT__a_pipe__v1) {
        vlSelfRef.tinyalu__DOT__u_three_cycle__DOT__mult_pipe[2U] 
            = __VdlyVal__tinyalu__DOT__u_three_cycle__DOT__mult_pipe__v2;
        vlSelfRef.tinyalu__DOT__u_three_cycle__DOT__done_pipe[2U] 
            = __VdlyVal__tinyalu__DOT__u_three_cycle__DOT__done_pipe__v2;
        vlSelfRef.tinyalu__DOT__u_three_cycle__DOT__a_pipe[1U] 
            = __VdlyVal__tinyalu__DOT__u_three_cycle__DOT__a_pipe__v1;
        vlSelfRef.tinyalu__DOT__u_three_cycle__DOT__b_pipe[1U] 
            = __VdlyVal__tinyalu__DOT__u_three_cycle__DOT__b_pipe__v1;
    }
    if (__VdlySet__tinyalu__DOT__u_three_cycle__DOT__mult_pipe__v3) {
        vlSelfRef.tinyalu__DOT__u_three_cycle__DOT__mult_pipe[0U] = 0U;
        vlSelfRef.tinyalu__DOT__u_three_cycle__DOT__done_pipe[0U] = 0U;
    }
    if (__VdlySet__tinyalu__DOT__u_three_cycle__DOT__a_pipe__v3) {
        vlSelfRef.tinyalu__DOT__u_three_cycle__DOT__mult_pipe[1U] = 0U;
        vlSelfRef.tinyalu__DOT__u_three_cycle__DOT__done_pipe[1U] = 0U;
    }
    if (__VdlySet__tinyalu__DOT__u_three_cycle__DOT__a_pipe__v2) {
        vlSelfRef.tinyalu__DOT__u_three_cycle__DOT__a_pipe[2U] 
            = __VdlyVal__tinyalu__DOT__u_three_cycle__DOT__a_pipe__v2;
        vlSelfRef.tinyalu__DOT__u_three_cycle__DOT__b_pipe[2U] 
            = __VdlyVal__tinyalu__DOT__u_three_cycle__DOT__b_pipe__v2;
    }
    if (__VdlySet__tinyalu__DOT__u_three_cycle__DOT__a_pipe__v3) {
        vlSelfRef.tinyalu__DOT__u_three_cycle__DOT__a_pipe[0U] = 0U;
        vlSelfRef.tinyalu__DOT__u_three_cycle__DOT__b_pipe[0U] = 0U;
    }
    if (__VdlySet__tinyalu__DOT__u_three_cycle__DOT__a_pipe__v4) {
        vlSelfRef.tinyalu__DOT__u_three_cycle__DOT__mult_pipe[2U] = 0U;
        vlSelfRef.tinyalu__DOT__u_three_cycle__DOT__done_pipe[2U] = 0U;
        vlSelfRef.tinyalu__DOT__u_three_cycle__DOT__a_pipe[1U] = 0U;
        vlSelfRef.tinyalu__DOT__u_three_cycle__DOT__b_pipe[1U] = 0U;
    }
    if (__VdlySet__tinyalu__DOT__u_three_cycle__DOT__a_pipe__v5) {
        vlSelfRef.tinyalu__DOT__u_three_cycle__DOT__a_pipe[2U] = 0U;
        vlSelfRef.tinyalu__DOT__u_three_cycle__DOT__b_pipe[2U] = 0U;
    }
    if ((0U != ((IData)(vlSelfRef.tinyalu__DOT__prev_result) 
                ^ (IData)(vlSelfRef.tinyalu__DOT____Vtogcov__prev_result)))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSelf->__Vcoverage + 182, vlSelfRef.tinyalu__DOT__prev_result, vlSelfRef.tinyalu__DOT____Vtogcov__prev_result);
        vlSelfRef.tinyalu__DOT____Vtogcov__prev_result 
            = vlSelfRef.tinyalu__DOT__prev_result;
    }
    if (((IData)(vlSelfRef.tinyalu__DOT__done_aax) 
         ^ (IData)(vlSelfRef.tinyalu__DOT____Vtogcov__done_aax))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 114, vlSelfRef.tinyalu__DOT__done_aax, vlSelfRef.tinyalu__DOT____Vtogcov__done_aax);
        vlSelfRef.tinyalu__DOT____Vtogcov__done_aax 
            = vlSelfRef.tinyalu__DOT__done_aax;
    }
    if ((0U != ((IData)(vlSelfRef.tinyalu__DOT__result_aax) 
                ^ (IData)(vlSelfRef.tinyalu__DOT____Vtogcov__result_aax)))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSelf->__Vcoverage + 118, vlSelfRef.tinyalu__DOT__result_aax, vlSelfRef.tinyalu__DOT____Vtogcov__result_aax);
        vlSelfRef.tinyalu__DOT____Vtogcov__result_aax 
            = vlSelfRef.tinyalu__DOT__result_aax;
    }
    if (((IData)(vlSelfRef.tinyalu__DOT__done_mult) 
         ^ (IData)(vlSelfRef.tinyalu__DOT____Vtogcov__done_mult))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 116, vlSelfRef.tinyalu__DOT__done_mult, vlSelfRef.tinyalu__DOT____Vtogcov__done_mult);
        vlSelfRef.tinyalu__DOT____Vtogcov__done_mult 
            = vlSelfRef.tinyalu__DOT__done_mult;
    }
    vlSelfRef.done = 0U;
    if ((4U & (IData)(vlSelfRef.op))) {
        if ((2U & (IData)(vlSelfRef.op))) {
            vlSelfRef.done = 0U;
            ++(vlSelf->__Vcoverage[240]);
        } else if ((1U & (IData)(vlSelfRef.op))) {
            vlSelfRef.done = 0U;
            ++(vlSelf->__Vcoverage[240]);
        } else {
            vlSelfRef.done = vlSelfRef.tinyalu__DOT__done_mult;
            ++(vlSelf->__Vcoverage[239]);
        }
    } else if ((2U & (IData)(vlSelfRef.op))) {
        if ((1U & (IData)(vlSelfRef.op))) {
            vlSelfRef.done = vlSelfRef.tinyalu__DOT__done_aax;
            ++(vlSelf->__Vcoverage[238]);
        } else {
            vlSelfRef.done = vlSelfRef.tinyalu__DOT__done_aax;
            ++(vlSelf->__Vcoverage[237]);
        }
    } else if ((1U & (IData)(vlSelfRef.op))) {
        vlSelfRef.done = vlSelfRef.tinyalu__DOT__done_aax;
        ++(vlSelf->__Vcoverage[236]);
    } else {
        vlSelfRef.done = 0U;
        ++(vlSelf->__Vcoverage[235]);
    }
    ++(vlSelf->__Vcoverage[241]);
    if ((0U != ((IData)(vlSelfRef.tinyalu__DOT__result_mult) 
                ^ (IData)(vlSelfRef.tinyalu__DOT____Vtogcov__result_mult)))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSelf->__Vcoverage + 150, vlSelfRef.tinyalu__DOT__result_mult, vlSelfRef.tinyalu__DOT____Vtogcov__result_mult);
        vlSelfRef.tinyalu__DOT____Vtogcov__result_mult 
            = vlSelfRef.tinyalu__DOT__result_mult;
    }
    vlSelfRef.result = 0U;
    if ((4U & (IData)(vlSelfRef.op))) {
        if ((2U & (IData)(vlSelfRef.op))) {
            vlSelfRef.result = vlSelfRef.tinyalu__DOT__prev_result;
            ++(vlSelf->__Vcoverage[233]);
        } else if ((1U & (IData)(vlSelfRef.op))) {
            vlSelfRef.result = vlSelfRef.tinyalu__DOT__prev_result;
            ++(vlSelf->__Vcoverage[233]);
        } else {
            vlSelfRef.result = vlSelfRef.tinyalu__DOT__result_mult;
            ++(vlSelf->__Vcoverage[232]);
        }
    } else if ((2U & (IData)(vlSelfRef.op))) {
        if ((1U & (IData)(vlSelfRef.op))) {
            vlSelfRef.result = vlSelfRef.tinyalu__DOT__result_aax;
            ++(vlSelf->__Vcoverage[231]);
        } else {
            vlSelfRef.result = vlSelfRef.tinyalu__DOT__result_aax;
            ++(vlSelf->__Vcoverage[230]);
        }
    } else if ((1U & (IData)(vlSelfRef.op))) {
        vlSelfRef.result = vlSelfRef.tinyalu__DOT__result_aax;
        ++(vlSelf->__Vcoverage[229]);
    } else {
        vlSelfRef.result = vlSelfRef.tinyalu__DOT__prev_result;
        ++(vlSelf->__Vcoverage[228]);
    }
    ++(vlSelf->__Vcoverage[234]);
    if ((0U != (vlSelfRef.tinyalu__DOT__u_three_cycle__DOT__mult_pipe[0U] 
                ^ vlSelfRef.tinyalu__DOT__u_three_cycle__DOT____Vtogcov__mult_pipe[0U]))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSelf->__Vcoverage + 439, vlSelfRef.tinyalu__DOT__u_three_cycle__DOT__mult_pipe[0U], vlSelfRef.tinyalu__DOT__u_three_cycle__DOT____Vtogcov__mult_pipe[0U]);
        vlSelfRef.tinyalu__DOT__u_three_cycle__DOT____Vtogcov__mult_pipe[0U] 
            = vlSelfRef.tinyalu__DOT__u_three_cycle__DOT__mult_pipe[0U];
    }
    if ((0U != (vlSelfRef.tinyalu__DOT__u_three_cycle__DOT__mult_pipe[1U] 
                ^ vlSelfRef.tinyalu__DOT__u_three_cycle__DOT____Vtogcov__mult_pipe[1U]))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSelf->__Vcoverage + 471, vlSelfRef.tinyalu__DOT__u_three_cycle__DOT__mult_pipe[1U], vlSelfRef.tinyalu__DOT__u_three_cycle__DOT____Vtogcov__mult_pipe[1U]);
        vlSelfRef.tinyalu__DOT__u_three_cycle__DOT____Vtogcov__mult_pipe[1U] 
            = vlSelfRef.tinyalu__DOT__u_three_cycle__DOT__mult_pipe[1U];
    }
    if ((0U != (vlSelfRef.tinyalu__DOT__u_three_cycle__DOT__mult_pipe[2U] 
                ^ vlSelfRef.tinyalu__DOT__u_three_cycle__DOT____Vtogcov__mult_pipe[2U]))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSelf->__Vcoverage + 503, vlSelfRef.tinyalu__DOT__u_three_cycle__DOT__mult_pipe[2U], vlSelfRef.tinyalu__DOT__u_three_cycle__DOT____Vtogcov__mult_pipe[2U]);
        vlSelfRef.tinyalu__DOT__u_three_cycle__DOT____Vtogcov__mult_pipe[2U] 
            = vlSelfRef.tinyalu__DOT__u_three_cycle__DOT__mult_pipe[2U];
    }
    if ((vlSelfRef.tinyalu__DOT__u_three_cycle__DOT__done_pipe[0U] 
         ^ vlSelfRef.tinyalu__DOT__u_three_cycle__DOT____Vtogcov__done_pipe[0U])) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 535, vlSelfRef.tinyalu__DOT__u_three_cycle__DOT__done_pipe[0U], vlSelfRef.tinyalu__DOT__u_three_cycle__DOT____Vtogcov__done_pipe[0U]);
        vlSelfRef.tinyalu__DOT__u_three_cycle__DOT____Vtogcov__done_pipe[0U] 
            = vlSelfRef.tinyalu__DOT__u_three_cycle__DOT__done_pipe[0U];
    }
    if ((vlSelfRef.tinyalu__DOT__u_three_cycle__DOT__done_pipe[1U] 
         ^ vlSelfRef.tinyalu__DOT__u_three_cycle__DOT____Vtogcov__done_pipe[1U])) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 537, vlSelfRef.tinyalu__DOT__u_three_cycle__DOT__done_pipe[1U], vlSelfRef.tinyalu__DOT__u_three_cycle__DOT____Vtogcov__done_pipe[1U]);
        vlSelfRef.tinyalu__DOT__u_three_cycle__DOT____Vtogcov__done_pipe[1U] 
            = vlSelfRef.tinyalu__DOT__u_three_cycle__DOT__done_pipe[1U];
    }
    if ((vlSelfRef.tinyalu__DOT__u_three_cycle__DOT__done_pipe[2U] 
         ^ vlSelfRef.tinyalu__DOT__u_three_cycle__DOT____Vtogcov__done_pipe[2U])) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 539, vlSelfRef.tinyalu__DOT__u_three_cycle__DOT__done_pipe[2U], vlSelfRef.tinyalu__DOT__u_three_cycle__DOT____Vtogcov__done_pipe[2U]);
        vlSelfRef.tinyalu__DOT__u_three_cycle__DOT____Vtogcov__done_pipe[2U] 
            = vlSelfRef.tinyalu__DOT__u_three_cycle__DOT__done_pipe[2U];
    }
    if ((0U != (vlSelfRef.tinyalu__DOT__u_three_cycle__DOT__a_pipe[0U] 
                ^ vlSelfRef.tinyalu__DOT__u_three_cycle__DOT____Vtogcov__a_pipe[0U]))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSelf->__Vcoverage + 247, vlSelfRef.tinyalu__DOT__u_three_cycle__DOT__a_pipe[0U], vlSelfRef.tinyalu__DOT__u_three_cycle__DOT____Vtogcov__a_pipe[0U]);
        vlSelfRef.tinyalu__DOT__u_three_cycle__DOT____Vtogcov__a_pipe[0U] 
            = vlSelfRef.tinyalu__DOT__u_three_cycle__DOT__a_pipe[0U];
    }
    if ((0U != (vlSelfRef.tinyalu__DOT__u_three_cycle__DOT__a_pipe[1U] 
                ^ vlSelfRef.tinyalu__DOT__u_three_cycle__DOT____Vtogcov__a_pipe[1U]))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSelf->__Vcoverage + 279, vlSelfRef.tinyalu__DOT__u_three_cycle__DOT__a_pipe[1U], vlSelfRef.tinyalu__DOT__u_three_cycle__DOT____Vtogcov__a_pipe[1U]);
        vlSelfRef.tinyalu__DOT__u_three_cycle__DOT____Vtogcov__a_pipe[1U] 
            = vlSelfRef.tinyalu__DOT__u_three_cycle__DOT__a_pipe[1U];
    }
    if ((0U != (vlSelfRef.tinyalu__DOT__u_three_cycle__DOT__a_pipe[2U] 
                ^ vlSelfRef.tinyalu__DOT__u_three_cycle__DOT____Vtogcov__a_pipe[2U]))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSelf->__Vcoverage + 311, vlSelfRef.tinyalu__DOT__u_three_cycle__DOT__a_pipe[2U], vlSelfRef.tinyalu__DOT__u_three_cycle__DOT____Vtogcov__a_pipe[2U]);
        vlSelfRef.tinyalu__DOT__u_three_cycle__DOT____Vtogcov__a_pipe[2U] 
            = vlSelfRef.tinyalu__DOT__u_three_cycle__DOT__a_pipe[2U];
    }
    if ((0U != (vlSelfRef.tinyalu__DOT__u_three_cycle__DOT__b_pipe[0U] 
                ^ vlSelfRef.tinyalu__DOT__u_three_cycle__DOT____Vtogcov__b_pipe[0U]))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSelf->__Vcoverage + 343, vlSelfRef.tinyalu__DOT__u_three_cycle__DOT__b_pipe[0U], vlSelfRef.tinyalu__DOT__u_three_cycle__DOT____Vtogcov__b_pipe[0U]);
        vlSelfRef.tinyalu__DOT__u_three_cycle__DOT____Vtogcov__b_pipe[0U] 
            = vlSelfRef.tinyalu__DOT__u_three_cycle__DOT__b_pipe[0U];
    }
    if ((0U != (vlSelfRef.tinyalu__DOT__u_three_cycle__DOT__b_pipe[1U] 
                ^ vlSelfRef.tinyalu__DOT__u_three_cycle__DOT____Vtogcov__b_pipe[1U]))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSelf->__Vcoverage + 375, vlSelfRef.tinyalu__DOT__u_three_cycle__DOT__b_pipe[1U], vlSelfRef.tinyalu__DOT__u_three_cycle__DOT____Vtogcov__b_pipe[1U]);
        vlSelfRef.tinyalu__DOT__u_three_cycle__DOT____Vtogcov__b_pipe[1U] 
            = vlSelfRef.tinyalu__DOT__u_three_cycle__DOT__b_pipe[1U];
    }
    if ((0U != (vlSelfRef.tinyalu__DOT__u_three_cycle__DOT__b_pipe[2U] 
                ^ vlSelfRef.tinyalu__DOT__u_three_cycle__DOT____Vtogcov__b_pipe[2U]))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSelf->__Vcoverage + 407, vlSelfRef.tinyalu__DOT__u_three_cycle__DOT__b_pipe[2U], vlSelfRef.tinyalu__DOT__u_three_cycle__DOT____Vtogcov__b_pipe[2U]);
        vlSelfRef.tinyalu__DOT__u_three_cycle__DOT____Vtogcov__b_pipe[2U] 
            = vlSelfRef.tinyalu__DOT__u_three_cycle__DOT__b_pipe[2U];
    }
    if (((IData)(vlSelfRef.done) ^ (IData)(vlSelfRef.tinyalu__DOT____Vtogcov__done))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 76, vlSelfRef.done, vlSelfRef.tinyalu__DOT____Vtogcov__done);
        vlSelfRef.tinyalu__DOT____Vtogcov__done = vlSelfRef.done;
    }
    if ((0U != ((IData)(vlSelfRef.result) ^ (IData)(vlSelfRef.tinyalu__DOT____Vtogcov__result)))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSelf->__Vcoverage + 78, vlSelfRef.result, vlSelfRef.tinyalu__DOT____Vtogcov__result);
        vlSelfRef.tinyalu__DOT____Vtogcov__result = vlSelfRef.result;
    }
}

void Vtinyalu___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtinyalu___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtinyalu___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtinyalu___024root___eval_phase__act(Vtinyalu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtinyalu___024root___eval_phase__act\n"); );
    Vtinyalu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((((~ (IData)(vlSelfRef.reset_n)) 
                                                           & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__reset_n__1)) 
                                                          << 1U) 
                                                         | ((IData)(vlSelfRef.clk) 
                                                            & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__1))))));
        vlSelfRef.__Vtrigprevexpr___TOP__clk__1 = vlSelfRef.clk;
        vlSelfRef.__Vtrigprevexpr___TOP__reset_n__1 
            = vlSelfRef.reset_n;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtinyalu___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtinyalu___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vtinyalu___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtinyalu___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtinyalu___024root___eval_phase__nba(Vtinyalu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtinyalu___024root___eval_phase__nba\n"); );
    Vtinyalu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtinyalu___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_nba
            if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vtinyalu___024root___nba_sequent__TOP__0(vlSelf);
                vlSelfRef.__Vm_traceActivity[1U] = 1U;
            }
        }
        Vtinyalu___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtinyalu___024root___eval(Vtinyalu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtinyalu___024root___eval\n"); );
    Vtinyalu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vtinyalu___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("../rtl/tinyalu.sv", 6, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 10000 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = Vtinyalu___024root___eval_phase__ico(vlSelf);
    } while (vlSelfRef.__VicoPhaseResult);
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtinyalu___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("../rtl/tinyalu.sv", 6, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtinyalu___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("../rtl/tinyalu.sv", 6, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactPhaseResult = Vtinyalu___024root___eval_phase__act(vlSelf);
        } while (vlSelfRef.__VactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtinyalu___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vtinyalu___024root___eval_debug_assertions(Vtinyalu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtinyalu___024root___eval_debug_assertions\n"); );
    Vtinyalu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.reset_n & 0xfeU)))) {
        Verilated::overWidthError("reset_n");
    }
    if (VL_UNLIKELY(((vlSelfRef.start & 0xfeU)))) {
        Verilated::overWidthError("start");
    }
    if (VL_UNLIKELY(((vlSelfRef.op & 0xf8U)))) {
        Verilated::overWidthError("op");
    }
}
#endif  // VL_DEBUG
