// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vjump_test_tb__pch.h"

//============================================================
// Constructors

Vjump_test_tb::Vjump_test_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vjump_test_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
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
