// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtinyalu.h for the primary calling header

#include "Vtinyalu__pch.h"

VL_ATTR_COLD void Vtinyalu___024root___eval_static(Vtinyalu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtinyalu___024root___eval_static\n"); );
    Vtinyalu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__A__0 = vlSelfRef.A;
    vlSelfRef.__Vtrigprevexpr___TOP__B__0 = vlSelfRef.B;
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__reset_n__0 = vlSelfRef.reset_n;
    vlSelfRef.__Vtrigprevexpr___TOP__start__0 = vlSelfRef.start;
    vlSelfRef.__Vtrigprevexpr___TOP__op__0 = vlSelfRef.op;
    vlSelfRef.__Vtrigprevexpr___TOP__clk__1 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__reset_n__1 = vlSelfRef.reset_n;
}

VL_ATTR_COLD void Vtinyalu___024root___eval_initial(Vtinyalu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtinyalu___024root___eval_initial\n"); );
    Vtinyalu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtinyalu___024root___eval_final(Vtinyalu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtinyalu___024root___eval_final\n"); );
    Vtinyalu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtinyalu___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtinyalu___024root___eval_phase__stl(Vtinyalu___024root* vlSelf);

VL_ATTR_COLD void Vtinyalu___024root___eval_settle(Vtinyalu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtinyalu___024root___eval_settle\n"); );
    Vtinyalu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtinyalu___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("../rtl\\tinyalu.sv", 6, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtinyalu___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD bool Vtinyalu___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtinyalu___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtinyalu___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtinyalu___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtinyalu___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtinyalu___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vtinyalu___024root___stl_sequent__TOP__0(Vtinyalu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtinyalu___024root___stl_sequent__TOP__0\n"); );
    Vtinyalu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U != ((IData)(vlSelfRef.A) ^ (IData)(vlSelfRef.tinyalu__DOT____Vtogcov__A)))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSelf->__Vcoverage + 0, vlSelfRef.A, vlSelfRef.tinyalu__DOT____Vtogcov__A);
        vlSelfRef.tinyalu__DOT____Vtogcov__A = vlSelfRef.A;
    }
    if ((0U != ((IData)(vlSelfRef.B) ^ (IData)(vlSelfRef.tinyalu__DOT____Vtogcov__B)))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSelf->__Vcoverage + 32, vlSelfRef.B, vlSelfRef.tinyalu__DOT____Vtogcov__B);
        vlSelfRef.tinyalu__DOT____Vtogcov__B = vlSelfRef.B;
    }
    if (((IData)(vlSelfRef.clk) ^ (IData)(vlSelfRef.tinyalu__DOT____Vtogcov__clk))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 64, vlSelfRef.clk, vlSelfRef.tinyalu__DOT____Vtogcov__clk);
        vlSelfRef.tinyalu__DOT____Vtogcov__clk = vlSelfRef.clk;
    }
    if (((IData)(vlSelfRef.reset_n) ^ (IData)(vlSelfRef.tinyalu__DOT____Vtogcov__reset_n))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 66, vlSelfRef.reset_n, vlSelfRef.tinyalu__DOT____Vtogcov__reset_n);
        vlSelfRef.tinyalu__DOT____Vtogcov__reset_n 
            = vlSelfRef.reset_n;
    }
    if (((IData)(vlSelfRef.start) ^ (IData)(vlSelfRef.tinyalu__DOT____Vtogcov__start))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 68, vlSelfRef.start, vlSelfRef.tinyalu__DOT____Vtogcov__start);
        vlSelfRef.tinyalu__DOT____Vtogcov__start = vlSelfRef.start;
    }
    if ((0U != ((IData)(vlSelfRef.op) ^ (IData)(vlSelfRef.tinyalu__DOT____Vtogcov__op)))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSelf->__Vcoverage + 70, vlSelfRef.op, vlSelfRef.tinyalu__DOT____Vtogcov__op);
        vlSelfRef.tinyalu__DOT____Vtogcov__op = vlSelfRef.op;
    }
    if (((IData)(vlSelfRef.tinyalu__DOT__done_aax) 
         ^ (IData)(vlSelfRef.tinyalu__DOT____Vtogcov__done_aax))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 114, vlSelfRef.tinyalu__DOT__done_aax, vlSelfRef.tinyalu__DOT____Vtogcov__done_aax);
        vlSelfRef.tinyalu__DOT____Vtogcov__done_aax 
            = vlSelfRef.tinyalu__DOT__done_aax;
    }
    if (((IData)(vlSelfRef.tinyalu__DOT__done_mult) 
         ^ (IData)(vlSelfRef.tinyalu__DOT____Vtogcov__done_mult))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 116, vlSelfRef.tinyalu__DOT__done_mult, vlSelfRef.tinyalu__DOT____Vtogcov__done_mult);
        vlSelfRef.tinyalu__DOT____Vtogcov__done_mult 
            = vlSelfRef.tinyalu__DOT__done_mult;
    }
    if ((0U != ((IData)(vlSelfRef.tinyalu__DOT__result_aax) 
                ^ (IData)(vlSelfRef.tinyalu__DOT____Vtogcov__result_aax)))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSelf->__Vcoverage + 118, vlSelfRef.tinyalu__DOT__result_aax, vlSelfRef.tinyalu__DOT____Vtogcov__result_aax);
        vlSelfRef.tinyalu__DOT____Vtogcov__result_aax 
            = vlSelfRef.tinyalu__DOT__result_aax;
    }
    if ((0U != ((IData)(vlSelfRef.tinyalu__DOT__result_mult) 
                ^ (IData)(vlSelfRef.tinyalu__DOT____Vtogcov__result_mult)))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSelf->__Vcoverage + 150, vlSelfRef.tinyalu__DOT__result_mult, vlSelfRef.tinyalu__DOT____Vtogcov__result_mult);
        vlSelfRef.tinyalu__DOT____Vtogcov__result_mult 
            = vlSelfRef.tinyalu__DOT__result_mult;
    }
    if ((0U != ((IData)(vlSelfRef.tinyalu__DOT__prev_result) 
                ^ (IData)(vlSelfRef.tinyalu__DOT____Vtogcov__prev_result)))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSelf->__Vcoverage + 182, vlSelfRef.tinyalu__DOT__prev_result, vlSelfRef.tinyalu__DOT____Vtogcov__prev_result);
        vlSelfRef.tinyalu__DOT____Vtogcov__prev_result 
            = vlSelfRef.tinyalu__DOT__prev_result;
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
    if ((4U == (IData)(vlSelfRef.op))) {
        vlSelfRef.tinyalu__DOT__start_single = 0U;
        vlSelfRef.tinyalu__DOT__start_mult = vlSelfRef.start;
        ++(vlSelf->__Vcoverage[225]);
    } else {
        vlSelfRef.tinyalu__DOT__start_single = vlSelfRef.start;
        vlSelfRef.tinyalu__DOT__start_mult = 0U;
        ++(vlSelf->__Vcoverage[226]);
    }
    ++(vlSelf->__Vcoverage[227]);
    if (((IData)(vlSelfRef.done) ^ (IData)(vlSelfRef.tinyalu__DOT____Vtogcov__done))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 76, vlSelfRef.done, vlSelfRef.tinyalu__DOT____Vtogcov__done);
        vlSelfRef.tinyalu__DOT____Vtogcov__done = vlSelfRef.done;
    }
    if ((0U != ((IData)(vlSelfRef.result) ^ (IData)(vlSelfRef.tinyalu__DOT____Vtogcov__result)))) {
        VL_COV_TOGGLE_CHG_ST_I(16, vlSelf->__Vcoverage + 78, vlSelfRef.result, vlSelfRef.tinyalu__DOT____Vtogcov__result);
        vlSelfRef.tinyalu__DOT____Vtogcov__result = vlSelfRef.result;
    }
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

VL_ATTR_COLD bool Vtinyalu___024root___eval_phase__stl(Vtinyalu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtinyalu___024root___eval_phase__stl\n"); );
    Vtinyalu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__stl
        vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                          & vlSelfRef.__VstlTriggered[0U]) 
                                         | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtinyalu___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtinyalu___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                Vtinyalu___024root___stl_sequent__TOP__0(vlSelf);
            }
        }
    }
    return (__VstlExecute);
}

bool Vtinyalu___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtinyalu___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtinyalu___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vtinyalu___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @( A)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @( B)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @( clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @( reset_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @( start)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 5 is active: @( op)\n");
    }
    if ((1U & (IData)(triggers[1U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 64 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vtinyalu___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtinyalu___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtinyalu___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtinyalu___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge reset_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtinyalu___024root___ctor_var_reset(Vtinyalu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtinyalu___024root___ctor_var_reset\n"); );
    Vtinyalu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->A = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3969090544990846983ull);
    vlSelf->B = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 149303876845869574ull);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->reset_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14129604614540204776ull);
    vlSelf->start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9867861323841650631ull);
    vlSelf->op = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3630531923276091163ull);
    vlSelf->done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10296494685231209730ull);
    vlSelf->result = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16664408842984530663ull);
    vlSelf->tinyalu__DOT__start_single = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13027682862172100441ull);
    vlSelf->tinyalu__DOT__start_mult = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13880835653262840218ull);
    vlSelf->tinyalu__DOT__done_aax = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4241762260350492552ull);
    vlSelf->tinyalu__DOT__done_mult = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5491809620746966935ull);
    vlSelf->tinyalu__DOT__result_aax = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9612854248408187370ull);
    vlSelf->tinyalu__DOT__result_mult = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14288632963061214037ull);
    vlSelf->tinyalu__DOT__prev_result = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9131219712255858492ull);
    vlSelf->tinyalu__DOT__cov_add = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17704360173650162086ull);
    vlSelf->tinyalu__DOT__cov_and = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3010821874244367011ull);
    vlSelf->tinyalu__DOT__cov_xor = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5496554457412903897ull);
    vlSelf->tinyalu__DOT__cov_mul = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17642788310925471285ull);
    vlSelf->tinyalu__DOT__cov_nop = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6305051141056976908ull);
    vlSelf->tinyalu__DOT____Vtogcov__A = 0;
    vlSelf->tinyalu__DOT____Vtogcov__B = 0;
    vlSelf->tinyalu__DOT____Vtogcov__clk = 0;
    vlSelf->tinyalu__DOT____Vtogcov__reset_n = 0;
    vlSelf->tinyalu__DOT____Vtogcov__start = 0;
    vlSelf->tinyalu__DOT____Vtogcov__op = 0;
    vlSelf->tinyalu__DOT____Vtogcov__done = 0;
    vlSelf->tinyalu__DOT____Vtogcov__result = 0;
    vlSelf->tinyalu__DOT____Vtogcov__start_single = 0;
    vlSelf->tinyalu__DOT____Vtogcov__start_mult = 0;
    vlSelf->tinyalu__DOT____Vtogcov__done_aax = 0;
    vlSelf->tinyalu__DOT____Vtogcov__done_mult = 0;
    vlSelf->tinyalu__DOT____Vtogcov__result_aax = 0;
    vlSelf->tinyalu__DOT____Vtogcov__result_mult = 0;
    vlSelf->tinyalu__DOT____Vtogcov__prev_result = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tinyalu__DOT__u_three_cycle__DOT__a_pipe[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13162327041944600375ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tinyalu__DOT__u_three_cycle__DOT__b_pipe[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6593243955936543705ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tinyalu__DOT__u_three_cycle__DOT__mult_pipe[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8757187033477921495ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tinyalu__DOT__u_three_cycle__DOT__done_pipe[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16655703945033461851ull);
    }
    vlSelf->tinyalu__DOT__u_three_cycle__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12770296238004244003ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tinyalu__DOT__u_three_cycle__DOT____Vtogcov__a_pipe[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tinyalu__DOT__u_three_cycle__DOT____Vtogcov__b_pipe[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tinyalu__DOT__u_three_cycle__DOT____Vtogcov__mult_pipe[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tinyalu__DOT__u_three_cycle__DOT____Vtogcov__done_pipe[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__A__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__B__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__reset_n__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__start__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__op__0 = 0;
    vlSelf->__VicoDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__1 = 0;
    vlSelf->__Vtrigprevexpr___TOP__reset_n__1 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}

VL_ATTR_COLD void Vtinyalu___024root___configure_coverage(Vtinyalu___024root* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtinyalu___024root___configure_coverage\n"); );
    Vtinyalu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverToggleInsert(0, 15, 1, vlSelf->__Vcoverage + 0, first, true, "../rtl\\tinyalu.sv", 11, 37, ".tinyalu", "v_toggle/tinyalu", "A");
    vlSelf->__vlCoverToggleInsert(0, 15, 1, vlSelf->__Vcoverage + 32, first, true, "../rtl\\tinyalu.sv", 12, 37, ".tinyalu", "v_toggle/tinyalu", "B");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 64, first, true, "../rtl\\tinyalu.sv", 13, 37, ".tinyalu", "v_toggle/tinyalu", "clk");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 66, first, true, "../rtl\\tinyalu.sv", 14, 37, ".tinyalu", "v_toggle/tinyalu", "reset_n");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 68, first, true, "../rtl\\tinyalu.sv", 15, 37, ".tinyalu", "v_toggle/tinyalu", "start");
    vlSelf->__vlCoverToggleInsert(0, 2, 1, vlSelf->__Vcoverage + 70, first, true, "../rtl\\tinyalu.sv", 16, 37, ".tinyalu", "v_toggle/tinyalu", "op");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 76, first, true, "../rtl\\tinyalu.sv", 17, 37, ".tinyalu", "v_toggle/tinyalu", "done");
    vlSelf->__vlCoverToggleInsert(0, 15, 1, vlSelf->__Vcoverage + 78, first, true, "../rtl\\tinyalu.sv", 18, 37, ".tinyalu", "v_toggle/tinyalu", "result");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 110, first, true, "../rtl\\tinyalu.sv", 24, 30, ".tinyalu", "v_toggle/tinyalu", "start_single");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 112, first, true, "../rtl\\tinyalu.sv", 25, 30, ".tinyalu", "v_toggle/tinyalu", "start_mult");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 114, first, true, "../rtl\\tinyalu.sv", 27, 30, ".tinyalu", "v_toggle/tinyalu", "done_aax");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 116, first, true, "../rtl\\tinyalu.sv", 28, 30, ".tinyalu", "v_toggle/tinyalu", "done_mult");
    vlSelf->__vlCoverToggleInsert(0, 15, 1, vlSelf->__Vcoverage + 118, first, true, "../rtl\\tinyalu.sv", 30, 30, ".tinyalu", "v_toggle/tinyalu", "result_aax");
    vlSelf->__vlCoverToggleInsert(0, 15, 1, vlSelf->__Vcoverage + 150, first, true, "../rtl\\tinyalu.sv", 31, 30, ".tinyalu", "v_toggle/tinyalu", "result_mult");
    vlSelf->__vlCoverToggleInsert(0, 15, 1, vlSelf->__Vcoverage + 182, first, true, "../rtl\\tinyalu.sv", 32, 30, ".tinyalu", "v_toggle/tinyalu", "prev_result");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 214, first, true, "../rtl\\tinyalu.sv", 49, 31, ".tinyalu", "v_line/tinyalu", "case", "49", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 214, first, false, "../rtl\\tinyalu.sv", 49, 31, ".tinyalu", "v_line/tinyalu", "case", "49", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 215, first, true, "../rtl\\tinyalu.sv", 50, 31, ".tinyalu", "v_line/tinyalu", "case", "50", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 215, first, false, "../rtl\\tinyalu.sv", 50, 31, ".tinyalu", "v_line/tinyalu", "case", "50", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 216, first, true, "../rtl\\tinyalu.sv", 51, 31, ".tinyalu", "v_line/tinyalu", "case", "51", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 216, first, false, "../rtl\\tinyalu.sv", 51, 31, ".tinyalu", "v_line/tinyalu", "case", "51", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 217, first, true, "../rtl\\tinyalu.sv", 52, 31, ".tinyalu", "v_line/tinyalu", "case", "52", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 217, first, false, "../rtl\\tinyalu.sv", 52, 31, ".tinyalu", "v_line/tinyalu", "case", "52", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 218, first, true, "../rtl\\tinyalu.sv", 53, 25, ".tinyalu", "v_line/tinyalu", "case", "53", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 218, first, false, "../rtl\\tinyalu.sv", 53, 25, ".tinyalu", "v_line/tinyalu", "case", "53", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 219, first, true, "../rtl\\tinyalu.sv", 46, 18, ".tinyalu", "v_branch/tinyalu", "if", "46-48", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 219, first, false, "../rtl\\tinyalu.sv", 46, 18, ".tinyalu", "v_branch/tinyalu", "if", "46-48", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 220, first, true, "../rtl\\tinyalu.sv", 46, 19, ".tinyalu", "v_branch/tinyalu", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 220, first, false, "../rtl\\tinyalu.sv", 46, 19, ".tinyalu", "v_branch/tinyalu", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 221, first, true, "../rtl\\tinyalu.sv", 38, 13, ".tinyalu", "v_line/tinyalu", "elsif", "38-44", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 221, first, false, "../rtl\\tinyalu.sv", 38, 13, ".tinyalu", "v_line/tinyalu", "elsif", "38-44", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 222, first, true, "../rtl\\tinyalu.sv", 38, 17, ".tinyalu", "v_expr/tinyalu", "(reset_n==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 222, first, false, "../rtl\\tinyalu.sv", 38, 17, ".tinyalu", "v_expr/tinyalu", "(reset_n==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 223, first, true, "../rtl\\tinyalu.sv", 38, 17, ".tinyalu", "v_expr/tinyalu", "(reset_n==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 223, first, false, "../rtl\\tinyalu.sv", 38, 17, ".tinyalu", "v_expr/tinyalu", "(reset_n==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 224, first, true, "../rtl\\tinyalu.sv", 36, 5, ".tinyalu", "v_line/tinyalu", "block", "36-37", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 224, first, false, "../rtl\\tinyalu.sv", 36, 5, ".tinyalu", "v_line/tinyalu", "block", "36-37", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 225, first, true, "../rtl\\tinyalu.sv", 63, 9, ".tinyalu", "v_branch/tinyalu", "if", "63-65", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 225, first, false, "../rtl\\tinyalu.sv", 63, 9, ".tinyalu", "v_branch/tinyalu", "if", "63-65", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 226, first, true, "../rtl\\tinyalu.sv", 63, 10, ".tinyalu", "v_branch/tinyalu", "else", "66-68", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 226, first, false, "../rtl\\tinyalu.sv", 63, 10, ".tinyalu", "v_branch/tinyalu", "else", "66-68", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 227, first, true, "../rtl\\tinyalu.sv", 62, 5, ".tinyalu", "v_line/tinyalu", "block", "62", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 227, first, false, "../rtl\\tinyalu.sv", 62, 5, ".tinyalu", "v_line/tinyalu", "block", "62", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 228, first, true, "../rtl\\tinyalu.sv", 80, 23, ".tinyalu", "v_line/tinyalu", "case", "80", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 228, first, false, "../rtl\\tinyalu.sv", 80, 23, ".tinyalu", "v_line/tinyalu", "case", "80", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 229, first, true, "../rtl\\tinyalu.sv", 81, 23, ".tinyalu", "v_line/tinyalu", "case", "81", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 229, first, false, "../rtl\\tinyalu.sv", 81, 23, ".tinyalu", "v_line/tinyalu", "case", "81", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 230, first, true, "../rtl\\tinyalu.sv", 82, 23, ".tinyalu", "v_line/tinyalu", "case", "82", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 230, first, false, "../rtl\\tinyalu.sv", 82, 23, ".tinyalu", "v_line/tinyalu", "case", "82", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 231, first, true, "../rtl\\tinyalu.sv", 83, 23, ".tinyalu", "v_line/tinyalu", "case", "83", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 231, first, false, "../rtl\\tinyalu.sv", 83, 23, ".tinyalu", "v_line/tinyalu", "case", "83", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 232, first, true, "../rtl\\tinyalu.sv", 84, 23, ".tinyalu", "v_line/tinyalu", "case", "84", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 232, first, false, "../rtl\\tinyalu.sv", 84, 23, ".tinyalu", "v_line/tinyalu", "case", "84", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 233, first, true, "../rtl\\tinyalu.sv", 85, 17, ".tinyalu", "v_line/tinyalu", "case", "85", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 233, first, false, "../rtl\\tinyalu.sv", 85, 17, ".tinyalu", "v_line/tinyalu", "case", "85", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 234, first, true, "../rtl\\tinyalu.sv", 75, 5, ".tinyalu", "v_line/tinyalu", "block", "75-77,79", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 234, first, false, "../rtl\\tinyalu.sv", 75, 5, ".tinyalu", "v_line/tinyalu", "block", "75-77,79", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 235, first, true, "../rtl\\tinyalu.sv", 97, 23, ".tinyalu", "v_line/tinyalu", "case", "97", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 235, first, false, "../rtl\\tinyalu.sv", 97, 23, ".tinyalu", "v_line/tinyalu", "case", "97", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 236, first, true, "../rtl\\tinyalu.sv", 98, 23, ".tinyalu", "v_line/tinyalu", "case", "98", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 236, first, false, "../rtl\\tinyalu.sv", 98, 23, ".tinyalu", "v_line/tinyalu", "case", "98", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 237, first, true, "../rtl\\tinyalu.sv", 99, 23, ".tinyalu", "v_line/tinyalu", "case", "99", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 237, first, false, "../rtl\\tinyalu.sv", 99, 23, ".tinyalu", "v_line/tinyalu", "case", "99", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 238, first, true, "../rtl\\tinyalu.sv", 100, 23, ".tinyalu", "v_line/tinyalu", "case", "100", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 238, first, false, "../rtl\\tinyalu.sv", 100, 23, ".tinyalu", "v_line/tinyalu", "case", "100", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 239, first, true, "../rtl\\tinyalu.sv", 101, 23, ".tinyalu", "v_line/tinyalu", "case", "101", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 239, first, false, "../rtl\\tinyalu.sv", 101, 23, ".tinyalu", "v_line/tinyalu", "case", "101", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 240, first, true, "../rtl\\tinyalu.sv", 102, 17, ".tinyalu", "v_line/tinyalu", "case", "102", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 240, first, false, "../rtl\\tinyalu.sv", 102, 17, ".tinyalu", "v_line/tinyalu", "case", "102", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 241, first, true, "../rtl\\tinyalu.sv", 92, 5, ".tinyalu", "v_line/tinyalu", "block", "92-94,96", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 241, first, false, "../rtl\\tinyalu.sv", 92, 5, ".tinyalu", "v_line/tinyalu", "block", "92-94,96", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 242, first, true, "../rtl\\tinyalu.sv", 110, 9, ".tinyalu", "v_branch/tinyalu", "if", "110-111", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 242, first, false, "../rtl\\tinyalu.sv", 110, 9, ".tinyalu", "v_branch/tinyalu", "if", "110-111", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 243, first, true, "../rtl\\tinyalu.sv", 110, 10, ".tinyalu", "v_branch/tinyalu", "else", "113", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 243, first, false, "../rtl\\tinyalu.sv", 110, 10, ".tinyalu", "v_branch/tinyalu", "else", "113", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 244, first, true, "../rtl\\tinyalu.sv", 110, 13, ".tinyalu", "v_expr/tinyalu", "(reset_n==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 244, first, false, "../rtl\\tinyalu.sv", 110, 13, ".tinyalu", "v_expr/tinyalu", "(reset_n==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 245, first, true, "../rtl\\tinyalu.sv", 110, 13, ".tinyalu", "v_expr/tinyalu", "(reset_n==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 245, first, false, "../rtl\\tinyalu.sv", 110, 13, ".tinyalu", "v_expr/tinyalu", "(reset_n==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 246, first, true, "../rtl\\tinyalu.sv", 109, 5, ".tinyalu", "v_line/tinyalu", "block", "109", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 246, first, false, "../rtl\\tinyalu.sv", 109, 5, ".tinyalu", "v_line/tinyalu", "block", "109", "", "", "", "");
    vlSelf->__vlCoverToggleInsert(0, 15, 1, vlSelf->__Vcoverage + 0, first, true, "../rtl\\three_cycle.sv", 12, 37, ".tinyalu.u_three_cycle", "v_toggle/three_cycle", "A");
    vlSelf->__vlCoverToggleInsert(0, 15, 1, vlSelf->__Vcoverage + 32, first, true, "../rtl\\three_cycle.sv", 13, 37, ".tinyalu.u_three_cycle", "v_toggle/three_cycle", "B");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 64, first, true, "../rtl\\three_cycle.sv", 14, 37, ".tinyalu.u_three_cycle", "v_toggle/three_cycle", "clk");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 66, first, true, "../rtl\\three_cycle.sv", 15, 37, ".tinyalu.u_three_cycle", "v_toggle/three_cycle", "reset_n");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 112, first, true, "../rtl\\three_cycle.sv", 16, 37, ".tinyalu.u_three_cycle", "v_toggle/three_cycle", "start");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 116, first, true, "../rtl\\three_cycle.sv", 17, 37, ".tinyalu.u_three_cycle", "v_toggle/three_cycle", "done_mult");
    vlSelf->__vlCoverToggleInsert(0, 15, 1, vlSelf->__Vcoverage + 150, first, true, "../rtl\\three_cycle.sv", 18, 37, ".tinyalu.u_three_cycle", "v_toggle/three_cycle", "result_mult");
    vlSelf->__vlCoverToggleInsert(0, 15, 1, vlSelf->__Vcoverage + 247, first, true, "../rtl\\three_cycle.sv", 24, 30, ".tinyalu.u_three_cycle", "v_toggle/three_cycle", "a_pipe[0]");
    vlSelf->__vlCoverToggleInsert(0, 15, 1, vlSelf->__Vcoverage + 279, first, true, "../rtl\\three_cycle.sv", 24, 30, ".tinyalu.u_three_cycle", "v_toggle/three_cycle", "a_pipe[1]");
    vlSelf->__vlCoverToggleInsert(0, 15, 1, vlSelf->__Vcoverage + 311, first, true, "../rtl\\three_cycle.sv", 24, 30, ".tinyalu.u_three_cycle", "v_toggle/three_cycle", "a_pipe[2]");
    vlSelf->__vlCoverToggleInsert(0, 15, 1, vlSelf->__Vcoverage + 343, first, true, "../rtl\\three_cycle.sv", 25, 30, ".tinyalu.u_three_cycle", "v_toggle/three_cycle", "b_pipe[0]");
    vlSelf->__vlCoverToggleInsert(0, 15, 1, vlSelf->__Vcoverage + 375, first, true, "../rtl\\three_cycle.sv", 25, 30, ".tinyalu.u_three_cycle", "v_toggle/three_cycle", "b_pipe[1]");
    vlSelf->__vlCoverToggleInsert(0, 15, 1, vlSelf->__Vcoverage + 407, first, true, "../rtl\\three_cycle.sv", 25, 30, ".tinyalu.u_three_cycle", "v_toggle/three_cycle", "b_pipe[2]");
    vlSelf->__vlCoverToggleInsert(0, 15, 1, vlSelf->__Vcoverage + 439, first, true, "../rtl\\three_cycle.sv", 26, 30, ".tinyalu.u_three_cycle", "v_toggle/three_cycle", "mult_pipe[0]");
    vlSelf->__vlCoverToggleInsert(0, 15, 1, vlSelf->__Vcoverage + 471, first, true, "../rtl\\three_cycle.sv", 26, 30, ".tinyalu.u_three_cycle", "v_toggle/three_cycle", "mult_pipe[1]");
    vlSelf->__vlCoverToggleInsert(0, 15, 1, vlSelf->__Vcoverage + 503, first, true, "../rtl\\three_cycle.sv", 26, 30, ".tinyalu.u_three_cycle", "v_toggle/three_cycle", "mult_pipe[2]");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 535, first, true, "../rtl\\three_cycle.sv", 27, 30, ".tinyalu.u_three_cycle", "v_toggle/three_cycle", "done_pipe[0]");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 537, first, true, "../rtl\\three_cycle.sv", 27, 30, ".tinyalu.u_three_cycle", "v_toggle/three_cycle", "done_pipe[1]");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 539, first, true, "../rtl\\three_cycle.sv", 27, 30, ".tinyalu.u_three_cycle", "v_toggle/three_cycle", "done_pipe[2]");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 541, first, true, "../rtl\\three_cycle.sv", 36, 13, ".tinyalu.u_three_cycle", "v_line/three_cycle", "block", "36-40", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 541, first, false, "../rtl\\three_cycle.sv", 36, 13, ".tinyalu.u_three_cycle", "v_line/three_cycle", "block", "36-40", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 542, first, true, "../rtl\\three_cycle.sv", 52, 13, ".tinyalu.u_three_cycle", "v_line/three_cycle", "block", "52-56", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 542, first, false, "../rtl\\three_cycle.sv", 52, 13, ".tinyalu.u_three_cycle", "v_line/three_cycle", "block", "52-56", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 543, first, true, "../rtl\\three_cycle.sv", 35, 9, ".tinyalu.u_three_cycle", "v_branch/three_cycle", "if", "35-36,42-43", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 543, first, false, "../rtl\\three_cycle.sv", 35, 9, ".tinyalu.u_three_cycle", "v_branch/three_cycle", "if", "35-36,42-43", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 544, first, true, "../rtl\\three_cycle.sv", 35, 10, ".tinyalu.u_three_cycle", "v_branch/three_cycle", "else", "44,46-49,52,60-61", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 544, first, false, "../rtl\\three_cycle.sv", 35, 10, ".tinyalu.u_three_cycle", "v_branch/three_cycle", "else", "44,46-49,52,60-61", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 545, first, true, "../rtl\\three_cycle.sv", 35, 13, ".tinyalu.u_three_cycle", "v_expr/three_cycle", "(reset_n==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 545, first, false, "../rtl\\three_cycle.sv", 35, 13, ".tinyalu.u_three_cycle", "v_expr/three_cycle", "(reset_n==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 546, first, true, "../rtl\\three_cycle.sv", 35, 13, ".tinyalu.u_three_cycle", "v_expr/three_cycle", "(reset_n==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 546, first, false, "../rtl\\three_cycle.sv", 35, 13, ".tinyalu.u_three_cycle", "v_expr/three_cycle", "(reset_n==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 547, first, true, "../rtl\\three_cycle.sv", 34, 5, ".tinyalu.u_three_cycle", "v_line/three_cycle", "block", "34", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 547, first, false, "../rtl\\three_cycle.sv", 34, 5, ".tinyalu.u_three_cycle", "v_line/three_cycle", "block", "34", "", "", "", "");
    vlSelf->__vlCoverToggleInsert(0, 15, 1, vlSelf->__Vcoverage + 0, first, true, "../rtl\\single_cycle.sv", 10, 37, ".tinyalu.u_single_cycle", "v_toggle/single_cycle", "A");
    vlSelf->__vlCoverToggleInsert(0, 15, 1, vlSelf->__Vcoverage + 32, first, true, "../rtl\\single_cycle.sv", 11, 37, ".tinyalu.u_single_cycle", "v_toggle/single_cycle", "B");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 64, first, true, "../rtl\\single_cycle.sv", 12, 37, ".tinyalu.u_single_cycle", "v_toggle/single_cycle", "clk");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 66, first, true, "../rtl\\single_cycle.sv", 13, 37, ".tinyalu.u_single_cycle", "v_toggle/single_cycle", "reset_n");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 110, first, true, "../rtl\\single_cycle.sv", 14, 37, ".tinyalu.u_single_cycle", "v_toggle/single_cycle", "start");
    vlSelf->__vlCoverToggleInsert(0, 2, 1, vlSelf->__Vcoverage + 70, first, true, "../rtl\\single_cycle.sv", 15, 37, ".tinyalu.u_single_cycle", "v_toggle/single_cycle", "op");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, vlSelf->__Vcoverage + 114, first, true, "../rtl\\single_cycle.sv", 16, 37, ".tinyalu.u_single_cycle", "v_toggle/single_cycle", "done_aax");
    vlSelf->__vlCoverToggleInsert(0, 15, 1, vlSelf->__Vcoverage + 118, first, true, "../rtl\\single_cycle.sv", 17, 37, ".tinyalu.u_single_cycle", "v_toggle/single_cycle", "result_aax");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 548, first, true, "../rtl\\single_cycle.sv", 28, 23, ".tinyalu.u_single_cycle", "v_line/single_cycle", "case", "28", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 548, first, false, "../rtl\\single_cycle.sv", 28, 23, ".tinyalu.u_single_cycle", "v_line/single_cycle", "case", "28", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 549, first, true, "../rtl\\single_cycle.sv", 29, 23, ".tinyalu.u_single_cycle", "v_line/single_cycle", "case", "29", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 549, first, false, "../rtl\\single_cycle.sv", 29, 23, ".tinyalu.u_single_cycle", "v_line/single_cycle", "case", "29", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 550, first, true, "../rtl\\single_cycle.sv", 30, 23, ".tinyalu.u_single_cycle", "v_line/single_cycle", "case", "30", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 550, first, false, "../rtl\\single_cycle.sv", 30, 23, ".tinyalu.u_single_cycle", "v_line/single_cycle", "case", "30", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 551, first, true, "../rtl\\single_cycle.sv", 31, 17, ".tinyalu.u_single_cycle", "v_line/single_cycle", "case", "31", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 551, first, false, "../rtl\\single_cycle.sv", 31, 17, ".tinyalu.u_single_cycle", "v_line/single_cycle", "case", "31", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 552, first, true, "../rtl\\single_cycle.sv", 26, 18, ".tinyalu.u_single_cycle", "v_branch/single_cycle", "if", "26-27", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 552, first, false, "../rtl\\single_cycle.sv", 26, 18, ".tinyalu.u_single_cycle", "v_branch/single_cycle", "if", "26-27", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 553, first, true, "../rtl\\single_cycle.sv", 26, 19, ".tinyalu.u_single_cycle", "v_branch/single_cycle", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 553, first, false, "../rtl\\single_cycle.sv", 26, 19, ".tinyalu.u_single_cycle", "v_branch/single_cycle", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 554, first, true, "../rtl\\single_cycle.sv", 24, 9, ".tinyalu.u_single_cycle", "v_line/single_cycle", "elsif", "24-25", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 554, first, false, "../rtl\\single_cycle.sv", 24, 9, ".tinyalu.u_single_cycle", "v_line/single_cycle", "elsif", "24-25", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 555, first, true, "../rtl\\single_cycle.sv", 24, 13, ".tinyalu.u_single_cycle", "v_expr/single_cycle", "(reset_n==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 555, first, false, "../rtl\\single_cycle.sv", 24, 13, ".tinyalu.u_single_cycle", "v_expr/single_cycle", "(reset_n==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 556, first, true, "../rtl\\single_cycle.sv", 24, 13, ".tinyalu.u_single_cycle", "v_expr/single_cycle", "(reset_n==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 556, first, false, "../rtl\\single_cycle.sv", 24, 13, ".tinyalu.u_single_cycle", "v_expr/single_cycle", "(reset_n==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 557, first, true, "../rtl\\single_cycle.sv", 23, 5, ".tinyalu.u_single_cycle", "v_line/single_cycle", "block", "23", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 557, first, false, "../rtl\\single_cycle.sv", 23, 5, ".tinyalu.u_single_cycle", "v_line/single_cycle", "block", "23", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 558, first, true, "../rtl\\single_cycle.sv", 43, 32, ".tinyalu.u_single_cycle", "v_expr/single_cycle", "(start==1 && (op != $unit::OP_NOP)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 558, first, false, "../rtl\\single_cycle.sv", 43, 32, ".tinyalu.u_single_cycle", "v_expr/single_cycle", "(start==1 && (op != $unit::OP_NOP)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 559, first, true, "../rtl\\single_cycle.sv", 43, 32, ".tinyalu.u_single_cycle", "v_expr/single_cycle", "((op != $unit::OP_NOP)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 559, first, false, "../rtl\\single_cycle.sv", 43, 32, ".tinyalu.u_single_cycle", "v_expr/single_cycle", "((op != $unit::OP_NOP)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 560, first, true, "../rtl\\single_cycle.sv", 43, 32, ".tinyalu.u_single_cycle", "v_expr/single_cycle", "(start==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 560, first, false, "../rtl\\single_cycle.sv", 43, 32, ".tinyalu.u_single_cycle", "v_expr/single_cycle", "(start==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 561, first, true, "../rtl\\single_cycle.sv", 40, 9, ".tinyalu.u_single_cycle", "v_branch/single_cycle", "if", "40-41", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 561, first, false, "../rtl\\single_cycle.sv", 40, 9, ".tinyalu.u_single_cycle", "v_branch/single_cycle", "if", "40-41", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 562, first, true, "../rtl\\single_cycle.sv", 40, 10, ".tinyalu.u_single_cycle", "v_branch/single_cycle", "else", "42-43", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 562, first, false, "../rtl\\single_cycle.sv", 40, 10, ".tinyalu.u_single_cycle", "v_branch/single_cycle", "else", "42-43", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 563, first, true, "../rtl\\single_cycle.sv", 40, 13, ".tinyalu.u_single_cycle", "v_expr/single_cycle", "(reset_n==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 563, first, false, "../rtl\\single_cycle.sv", 40, 13, ".tinyalu.u_single_cycle", "v_expr/single_cycle", "(reset_n==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 564, first, true, "../rtl\\single_cycle.sv", 40, 13, ".tinyalu.u_single_cycle", "v_expr/single_cycle", "(reset_n==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 564, first, false, "../rtl\\single_cycle.sv", 40, 13, ".tinyalu.u_single_cycle", "v_expr/single_cycle", "(reset_n==1) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSelf->__Vcoverage + 565, first, true, "../rtl\\single_cycle.sv", 39, 5, ".tinyalu.u_single_cycle", "v_line/single_cycle", "block", "39", "", "", "", "");
    vlSelf->__vlCoverInsert(vlSymsp->__Vcoverage + 565, first, false, "../rtl\\single_cycle.sv", 39, 5, ".tinyalu.u_single_cycle", "v_line/single_cycle", "block", "39", "", "", "", "");
}
