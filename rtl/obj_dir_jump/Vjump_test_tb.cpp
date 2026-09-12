// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vjump_test_tb__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vjump_test_tb::Vjump_test_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vjump_test_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vjump_test_tb::Vjump_test_tb(const char* _vcname__)
    : Vjump_test_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vjump_test_tb::~Vjump_test_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vjump_test_tb___024root___eval_debug_assertions(Vjump_test_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vjump_test_tb___024root___eval_static(Vjump_test_tb___024root* vlSelf);
void Vjump_test_tb___024root___eval_initial(Vjump_test_tb___024root* vlSelf);
void Vjump_test_tb___024root___eval_settle(Vjump_test_tb___024root* vlSelf);
void Vjump_test_tb___024root___eval(Vjump_test_tb___024root* vlSelf);

void Vjump_test_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vjump_test_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vjump_test_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vjump_test_tb___024root___eval_static(&(vlSymsp->TOP));
        Vjump_test_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vjump_test_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vjump_test_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vjump_test_tb::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vjump_test_tb::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vjump_test_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vjump_test_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vjump_test_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vjump_test_tb___024root___eval_final(Vjump_test_tb___024root* vlSelf);

VL_ATTR_COLD void Vjump_test_tb::final() {
    Vjump_test_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vjump_test_tb::hierName() const { return vlSymsp->name(); }
const char* Vjump_test_tb::modelName() const { return "Vjump_test_tb"; }
unsigned Vjump_test_tb::threads() const { return 1; }
void Vjump_test_tb::prepareClone() const { contextp()->prepareClone(); }
void Vjump_test_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vjump_test_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vjump_test_tb___024root__trace_decl_types(VerilatedVcd* tracep);

void Vjump_test_tb___024root__trace_init_top(Vjump_test_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vjump_test_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vjump_test_tb___024root*>(voidSelf);
    Vjump_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vjump_test_tb___024root__trace_decl_types(tracep);
    Vjump_test_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vjump_test_tb___024root__trace_register(Vjump_test_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vjump_test_tb::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vjump_test_tb::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vjump_test_tb___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
