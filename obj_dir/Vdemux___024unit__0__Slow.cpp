// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdemux.h for the primary calling header

#include "Vdemux__pch.h"

VL_ATTR_COLD void Vdemux___024unit___ctor_var_reset(Vdemux___024unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vdemux___024unit___ctor_var_reset\n"); );
    Vdemux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__VmonitorNum = 0;
    vlSelf->__VmonitorOff = 0;
}
