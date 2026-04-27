// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vdemux__Syms.h"


VL_ATTR_COLD void Vdemux___024root__trace_init_sub__TOP__0(Vdemux___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdemux___024root__trace_init_sub__TOP__0\n"); );
    Vdemux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("tb", VerilatedTracePrefixType::SCOPE_MODULE);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"din",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1,0,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    tracep->pushPrefix("uut", VerilatedTracePrefixType::SCOPE_MODULE);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vdemux___024root__trace_init_top(Vdemux___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdemux___024root__trace_init_top\n"); );
    Vdemux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vdemux___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vdemux___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vdemux___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdemux___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdemux___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vdemux___024root__trace_register(Vdemux___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdemux___024root__trace_register\n"); );
    Vdemux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vdemux___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vdemux___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vdemux___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vdemux___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vdemux___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdemux___024root__trace_const_0\n"); );
    // Body
    Vdemux___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdemux___024root*>(voidSelf);
    Vdemux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vdemux___024root__trace_full_0_sub_0(Vdemux___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vdemux___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdemux___024root__trace_full_0\n"); );
    // Body
    Vdemux___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdemux___024root*>(voidSelf);
    Vdemux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vdemux___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vdemux___024root__trace_full_0_sub_0(Vdemux___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdemux___024root__trace_full_0_sub_0\n"); );
    Vdemux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+0,(vlSelfRef.tb__DOT__din));
    bufp->fullCData(oldp+1,(vlSelfRef.tb__DOT__sel),2);
    bufp->fullCData(oldp+2,(vlSelfRef.tb__DOT__y),4);
}
