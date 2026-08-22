// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vimgen_tb__pch.h"

//============================================================
// Constructors

Vimgen_tb::Vimgen_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vimgen_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vimgen_tb::Vimgen_tb(const char* _vcname__)
    : Vimgen_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vimgen_tb::~Vimgen_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vimgen_tb___024root___eval_debug_assertions(Vimgen_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vimgen_tb___024root___eval_static(Vimgen_tb___024root* vlSelf);
void Vimgen_tb___024root___eval_initial(Vimgen_tb___024root* vlSelf);
void Vimgen_tb___024root___eval_settle(Vimgen_tb___024root* vlSelf);
void Vimgen_tb___024root___eval(Vimgen_tb___024root* vlSelf);

void Vimgen_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vimgen_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vimgen_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vimgen_tb___024root___eval_static(&(vlSymsp->TOP));
        Vimgen_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vimgen_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vimgen_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vimgen_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vimgen_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vimgen_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vimgen_tb___024root___eval_final(Vimgen_tb___024root* vlSelf);

VL_ATTR_COLD void Vimgen_tb::final() {
    Vimgen_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vimgen_tb::hierName() const { return vlSymsp->name(); }
const char* Vimgen_tb::modelName() const { return "Vimgen_tb"; }
unsigned Vimgen_tb::threads() const { return 1; }
void Vimgen_tb::prepareClone() const { contextp()->prepareClone(); }
void Vimgen_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
