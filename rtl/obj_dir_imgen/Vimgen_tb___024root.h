// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vimgen_tb.h for the primary calling header

#ifndef VERILATED_VIMGEN_TB___024ROOT_H_
#define VERILATED_VIMGEN_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vimgen_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vimgen_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ imgen_tb__DOT__instruction;
    IData/*31:0*/ imgen_tb__DOT__im_out;
    IData/*31:0*/ imgen_tb__DOT__total;
    IData/*31:0*/ imgen_tb__DOT__passed;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vimgen_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vimgen_tb___024root(Vimgen_tb__Syms* symsp, const char* v__name);
    ~Vimgen_tb___024root();
    VL_UNCOPYABLE(Vimgen_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
