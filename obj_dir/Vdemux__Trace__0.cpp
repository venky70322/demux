// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vdemux__Syms.h"


void Vdemux___024root__trace_chg_0_sub_0(Vdemux___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vdemux___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdemux___024root__trace_chg_0\n"); );
    // Body
    Vdemux___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdemux___024root*>(voidSelf);
    Vdemux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vdemux___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vdemux___024root__trace_chg_0_sub_0(Vdemux___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdemux___024root__trace_chg_0_sub_0\n"); );
    Vdemux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    bufp->chgBit(oldp+0,(vlSelfRef.tb__DOT__din));
    bufp->chgCData(oldp+1,(vlSelfRef.tb__DOT__sel),2);
    bufp->chgCData(oldp+2,(vlSelfRef.tb__DOT__y),4);
}

void Vdemux___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdemux___024root__trace_cleanup\n"); );
    // Locals
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    Vdemux___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdemux___024root*>(voidSelf);
    Vdemux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
