// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vbranch_tb__pch.h"

//============================================================
// Constructors

Vbranch_tb::Vbranch_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vbranch_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vbranch_tb::Vbranch_tb(const char* _vcname__)
    : Vbranch_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vbranch_tb::~Vbranch_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vbranch_tb___024root___eval_debug_assertions(Vbranch_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vbranch_tb___024root___eval_static(Vbranch_tb___024root* vlSelf);
void Vbranch_tb___024root___eval_initial(Vbranch_tb___024root* vlSelf);
void Vbranch_tb___024root___eval_settle(Vbranch_tb___024root* vlSelf);
void Vbranch_tb___024root___eval(Vbranch_tb___024root* vlSelf);

void Vbranch_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vbranch_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vbranch_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vbranch_tb___024root___eval_static(&(vlSymsp->TOP));
        Vbranch_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vbranch_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vbranch_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vbranch_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vbranch_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vbranch_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vbranch_tb___024root___eval_final(Vbranch_tb___024root* vlSelf);

VL_ATTR_COLD void Vbranch_tb::final() {
    Vbranch_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vbranch_tb::hierName() const { return vlSymsp->name(); }
const char* Vbranch_tb::modelName() const { return "Vbranch_tb"; }
unsigned Vbranch_tb::threads() const { return 1; }
void Vbranch_tb::prepareClone() const { contextp()->prepareClone(); }
void Vbranch_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
