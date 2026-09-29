// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vbuttons_tb__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vbuttons_tb::Vbuttons_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vbuttons_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vbuttons_tb::Vbuttons_tb(const char* _vcname__)
    : Vbuttons_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vbuttons_tb::~Vbuttons_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vbuttons_tb___024root___eval_debug_assertions(Vbuttons_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vbuttons_tb___024root___eval_static(Vbuttons_tb___024root* vlSelf);
void Vbuttons_tb___024root___eval_initial(Vbuttons_tb___024root* vlSelf);
void Vbuttons_tb___024root___eval_settle(Vbuttons_tb___024root* vlSelf);
void Vbuttons_tb___024root___eval(Vbuttons_tb___024root* vlSelf);

void Vbuttons_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vbuttons_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vbuttons_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vbuttons_tb___024root___eval_static(&(vlSymsp->TOP));
        Vbuttons_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vbuttons_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vbuttons_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vbuttons_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vbuttons_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vbuttons_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vbuttons_tb___024root___eval_final(Vbuttons_tb___024root* vlSelf);

VL_ATTR_COLD void Vbuttons_tb::final() {
    Vbuttons_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vbuttons_tb::hierName() const { return vlSymsp->name(); }
const char* Vbuttons_tb::modelName() const { return "Vbuttons_tb"; }
unsigned Vbuttons_tb::threads() const { return 1; }
void Vbuttons_tb::prepareClone() const { contextp()->prepareClone(); }
void Vbuttons_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vbuttons_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vbuttons_tb___024root__trace_decl_types(VerilatedVcd* tracep);

void Vbuttons_tb___024root__trace_init_top(Vbuttons_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vbuttons_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbuttons_tb___024root*>(voidSelf);
    Vbuttons_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vbuttons_tb___024root__trace_decl_types(tracep);
    Vbuttons_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vbuttons_tb___024root__trace_register(Vbuttons_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vbuttons_tb::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vbuttons_tb::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vbuttons_tb___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
