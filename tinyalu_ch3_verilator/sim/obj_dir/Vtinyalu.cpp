// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtinyalu__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vtinyalu::Vtinyalu(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtinyalu__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset_n{vlSymsp->TOP.reset_n}
    , start{vlSymsp->TOP.start}
    , op{vlSymsp->TOP.op}
    , done{vlSymsp->TOP.done}
    , A{vlSymsp->TOP.A}
    , B{vlSymsp->TOP.B}
    , result{vlSymsp->TOP.result}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vtinyalu::Vtinyalu(const char* _vcname__)
    : Vtinyalu(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtinyalu::~Vtinyalu() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtinyalu___024root___eval_debug_assertions(Vtinyalu___024root* vlSelf);
#endif  // VL_DEBUG
void Vtinyalu___024root___eval_static(Vtinyalu___024root* vlSelf);
void Vtinyalu___024root___eval_initial(Vtinyalu___024root* vlSelf);
void Vtinyalu___024root___eval_settle(Vtinyalu___024root* vlSelf);
void Vtinyalu___024root___eval(Vtinyalu___024root* vlSelf);

void Vtinyalu::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtinyalu::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtinyalu___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtinyalu___024root___eval_static(&(vlSymsp->TOP));
        Vtinyalu___024root___eval_initial(&(vlSymsp->TOP));
        Vtinyalu___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtinyalu___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtinyalu::eventsPending() { return false; }

uint64_t Vtinyalu::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vtinyalu::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtinyalu___024root___eval_final(Vtinyalu___024root* vlSelf);

VL_ATTR_COLD void Vtinyalu::final() {
    contextp()->executingFinal(true);
    Vtinyalu___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtinyalu::hierName() const { return vlSymsp->name(); }
const char* Vtinyalu::modelName() const { return "Vtinyalu"; }
unsigned Vtinyalu::threads() const { return 1; }
void Vtinyalu::prepareClone() const { contextp()->prepareClone(); }
void Vtinyalu::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vtinyalu::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false}};
};

//============================================================
// Trace configuration

void Vtinyalu___024root__trace_decl_types(VerilatedVcd* tracep);

void Vtinyalu___024root__trace_init_top(Vtinyalu___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtinyalu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtinyalu___024root*>(voidSelf);
    Vtinyalu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    Vtinyalu___024root__trace_decl_types(tracep);
    Vtinyalu___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtinyalu___024root__trace_register(Vtinyalu___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtinyalu::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtinyalu::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP), name(), false, 35);
    Vtinyalu___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
