// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vimgen__pch.h"

//============================================================
// Constructors

Vimgen::Vimgen(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vimgen__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vimgen::Vimgen(const char* _vcname__)
    : Vimgen(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vimgen::~Vimgen() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vimgen___024root___eval_debug_assertions(Vimgen___024root* vlSelf);
#endif  // VL_DEBUG
void Vimgen___024root___eval_static(Vimgen___024root* vlSelf);
void Vimgen___024root___eval_initial(Vimgen___024root* vlSelf);
void Vimgen___024root___eval_settle(Vimgen___024root* vlSelf);
void Vimgen___024root___eval(Vimgen___024root* vlSelf);

void Vimgen::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vimgen::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vimgen___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vimgen___024root___eval_static(&(vlSymsp->TOP));
        Vimgen___024root___eval_initial(&(vlSymsp->TOP));
        Vimgen___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vimgen___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vimgen::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vimgen::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vimgen::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vimgen___024root___eval_final(Vimgen___024root* vlSelf);

VL_ATTR_COLD void Vimgen::final() {
    Vimgen___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vimgen::hierName() const { return vlSymsp->name(); }
const char* Vimgen::modelName() const { return "Vimgen"; }
unsigned Vimgen::threads() const { return 1; }
void Vimgen::prepareClone() const { contextp()->prepareClone(); }
void Vimgen::atClone() const {
    contextp()->threadPoolpOnClone();
}
