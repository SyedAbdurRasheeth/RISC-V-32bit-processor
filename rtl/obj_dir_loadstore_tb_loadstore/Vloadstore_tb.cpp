// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vloadstore_tb__pch.h"

//============================================================
// Constructors

Vloadstore_tb::Vloadstore_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vloadstore_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vloadstore_tb::Vloadstore_tb(const char* _vcname__)
    : Vloadstore_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vloadstore_tb::~Vloadstore_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vloadstore_tb___024root___eval_debug_assertions(Vloadstore_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vloadstore_tb___024root___eval_static(Vloadstore_tb___024root* vlSelf);
void Vloadstore_tb___024root___eval_initial(Vloadstore_tb___024root* vlSelf);
void Vloadstore_tb___024root___eval_settle(Vloadstore_tb___024root* vlSelf);
void Vloadstore_tb___024root___eval(Vloadstore_tb___024root* vlSelf);

void Vloadstore_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vloadstore_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vloadstore_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vloadstore_tb___024root___eval_static(&(vlSymsp->TOP));
        Vloadstore_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vloadstore_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vloadstore_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vloadstore_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vloadstore_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vloadstore_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vloadstore_tb___024root___eval_final(Vloadstore_tb___024root* vlSelf);

VL_ATTR_COLD void Vloadstore_tb::final() {
    Vloadstore_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vloadstore_tb::hierName() const { return vlSymsp->name(); }
const char* Vloadstore_tb::modelName() const { return "Vloadstore_tb"; }
unsigned Vloadstore_tb::threads() const { return 1; }
void Vloadstore_tb::prepareClone() const { contextp()->prepareClone(); }
void Vloadstore_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
