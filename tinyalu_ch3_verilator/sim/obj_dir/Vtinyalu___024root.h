// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtinyalu.h for the primary calling header

#ifndef VERILATED_VTINYALU___024ROOT_H_
#define VERILATED_VTINYALU___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"


class Vtinyalu__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtinyalu___024root final {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset_n,0,0);
    VL_IN8(start,0,0);
    VL_IN8(op,2,0);
    VL_OUT8(done,0,0);
    CData/*0:0*/ tinyalu__DOT__start_single;
    CData/*0:0*/ tinyalu__DOT__start_mult;
    CData/*0:0*/ tinyalu__DOT__done_aax;
    CData/*0:0*/ tinyalu__DOT__done_mult;
    CData/*0:0*/ tinyalu__DOT____Vtogcov__clk;
    CData/*0:0*/ tinyalu__DOT____Vtogcov__reset_n;
    CData/*0:0*/ tinyalu__DOT____Vtogcov__start;
    CData/*2:0*/ tinyalu__DOT____Vtogcov__op;
    CData/*0:0*/ tinyalu__DOT____Vtogcov__done;
    CData/*0:0*/ tinyalu__DOT____Vtogcov__start_single;
    CData/*0:0*/ tinyalu__DOT____Vtogcov__start_mult;
    CData/*0:0*/ tinyalu__DOT____Vtogcov__done_aax;
    CData/*0:0*/ tinyalu__DOT____Vtogcov__done_mult;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__reset_n__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__start__0;
    CData/*2:0*/ __Vtrigprevexpr___TOP__op__0;
    CData/*0:0*/ __VicoDidInit;
    CData/*0:0*/ __VicoPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__1;
    CData/*0:0*/ __Vtrigprevexpr___TOP__reset_n__1;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    VL_IN16(A,15,0);
    VL_IN16(B,15,0);
    VL_OUT16(result,15,0);
    SData/*15:0*/ tinyalu__DOT__result_aax;
    SData/*15:0*/ tinyalu__DOT__result_mult;
    SData/*15:0*/ tinyalu__DOT__prev_result;
    SData/*15:0*/ tinyalu__DOT____Vtogcov__A;
    SData/*15:0*/ tinyalu__DOT____Vtogcov__B;
    SData/*15:0*/ tinyalu__DOT____Vtogcov__result;
    SData/*15:0*/ tinyalu__DOT____Vtogcov__result_aax;
    SData/*15:0*/ tinyalu__DOT____Vtogcov__result_mult;
    SData/*15:0*/ tinyalu__DOT____Vtogcov__prev_result;
    SData/*15:0*/ __Vtrigprevexpr___TOP__A__0;
    SData/*15:0*/ __Vtrigprevexpr___TOP__B__0;
    IData/*31:0*/ tinyalu__DOT__cov_add;
    IData/*31:0*/ tinyalu__DOT__cov_and;
    IData/*31:0*/ tinyalu__DOT__cov_xor;
    IData/*31:0*/ tinyalu__DOT__cov_mul;
    IData/*31:0*/ tinyalu__DOT__cov_nop;
    IData/*31:0*/ tinyalu__DOT__u_three_cycle__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<SData/*15:0*/, 3> tinyalu__DOT__u_three_cycle__DOT__a_pipe;
    VlUnpacked<SData/*15:0*/, 3> tinyalu__DOT__u_three_cycle__DOT__b_pipe;
    VlUnpacked<SData/*15:0*/, 3> tinyalu__DOT__u_three_cycle__DOT__mult_pipe;
    VlUnpacked<CData/*0:0*/, 3> tinyalu__DOT__u_three_cycle__DOT__done_pipe;
    VlUnpacked<SData/*15:0*/, 3> tinyalu__DOT__u_three_cycle__DOT____Vtogcov__a_pipe;
    VlUnpacked<SData/*15:0*/, 3> tinyalu__DOT__u_three_cycle__DOT____Vtogcov__b_pipe;
    VlUnpacked<SData/*15:0*/, 3> tinyalu__DOT__u_three_cycle__DOT____Vtogcov__mult_pipe;
    VlUnpacked<CData/*0:0*/, 3> tinyalu__DOT__u_three_cycle__DOT____Vtogcov__done_pipe;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 2> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtinyalu__Syms* vlSymsp;
    const char* vlNamep;
    uint32_t __Vcoverage[566]{};

    // CONSTRUCTORS
    Vtinyalu___024root(Vtinyalu__Syms* symsp, const char* namep);
    ~Vtinyalu___024root();
    VL_UNCOPYABLE(Vtinyalu___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
    void __vlCoverToggleInsert(int begin, int end, bool ranged, uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp);
};


#endif  // guard
