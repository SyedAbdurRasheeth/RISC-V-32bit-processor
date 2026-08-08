// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vimgen.h for the primary calling header

#include "Vimgen__pch.h"
#include "Vimgen__Syms.h"
#include "Vimgen___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vimgen___024root___dump_triggers__act(Vimgen___024root* vlSelf);
#endif  // VL_DEBUG

void Vimgen___024root___eval_triggers__act(Vimgen___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vimgen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vimgen___024root___eval_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, vlSelfRef.__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vimgen___024root___dump_triggers__act(vlSelf);
    }
#endif
}
