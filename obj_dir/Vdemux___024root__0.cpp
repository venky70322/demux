// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdemux.h for the primary calling header

#include "Vdemux__pch.h"

VlCoroutine Vdemux___024root___eval_initial__TOP__Vtiming__0(Vdemux___024root* vlSelf);

void Vdemux___024root___eval_initial(Vdemux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdemux___024root___eval_initial\n"); );
    Vdemux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vdemux___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VlCoroutine Vdemux___024root___eval_initial__TOP__Vtiming__0(Vdemux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdemux___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vdemux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP____024unit.__VmonitorNum = 1U;
    vlSelfRef.tb__DOT__din = 1U;
    vlSelfRef.tb__DOT__sel = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                         nullptr, "tb.v", 
                                         23);
    vlSelfRef.tb__DOT__sel = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                         nullptr, "tb.v", 
                                         24);
    vlSelfRef.tb__DOT__sel = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                         nullptr, "tb.v", 
                                         25);
    vlSelfRef.tb__DOT__sel = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                         nullptr, "tb.v", 
                                         26);
    vlSelfRef.tb__DOT__din = 0U;
    vlSelfRef.tb__DOT__sel = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                         nullptr, "tb.v", 
                                         30);
    vlSelfRef.tb__DOT__sel = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                         nullptr, "tb.v", 
                                         31);
    vlSelfRef.tb__DOT__sel = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                         nullptr, "tb.v", 
                                         32);
    vlSelfRef.tb__DOT__sel = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                         nullptr, "tb.v", 
                                         33);
    VL_FINISH_MT("tb.v", 35, "");
    co_return;
}

void Vdemux___024root___eval_triggers_vec__act(Vdemux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdemux___024root___eval_triggers_vec__act\n"); );
    Vdemux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    (((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                       << 3U) 
                                                      | (((IData)(vlSelfRef.tb__DOT__y) 
                                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__y__0)) 
                                                         << 2U)) 
                                                     | ((((IData)(vlSelfRef.tb__DOT__sel) 
                                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__sel__0)) 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.tb__DOT__din) 
                                                           != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__din__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__din__0 
        = vlSelfRef.tb__DOT__din;
    vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__sel__0 
        = vlSelfRef.tb__DOT__sel;
    vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__y__0 
        = vlSelfRef.tb__DOT__y;
}

bool Vdemux___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdemux___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vdemux___024root___act_sequent__TOP__0(Vdemux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdemux___024root___act_sequent__TOP__0\n"); );
    Vdemux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb__DOT__y = 0U;
    vlSelfRef.tb__DOT__y = ((2U & (IData)(vlSelfRef.tb__DOT__sel))
                             ? ((1U & (IData)(vlSelfRef.tb__DOT__sel))
                                 ? ((7U & (IData)(vlSelfRef.tb__DOT__y)) 
                                    | ((IData)(vlSelfRef.tb__DOT__din) 
                                       << 3U)) : ((0x0bU 
                                                   & (IData)(vlSelfRef.tb__DOT__y)) 
                                                  | ((IData)(vlSelfRef.tb__DOT__din) 
                                                     << 2U)))
                             : ((1U & (IData)(vlSelfRef.tb__DOT__sel))
                                 ? ((0x0dU & (IData)(vlSelfRef.tb__DOT__y)) 
                                    | ((IData)(vlSelfRef.tb__DOT__din) 
                                       << 1U)) : ((0x0eU 
                                                   & (IData)(vlSelfRef.tb__DOT__y)) 
                                                  | (IData)(vlSelfRef.tb__DOT__din))));
}

void Vdemux___024root___eval_act(Vdemux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdemux___024root___eval_act\n"); );
    Vdemux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((8ULL & vlSelfRef.__VactTriggered[0U])) {
        Vdemux___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vdemux___024root___nba_sequent__TOP__0(Vdemux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdemux___024root___nba_sequent__TOP__0\n"); );
    Vdemux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)) 
                      & (1U == vlSymsp->TOP____024unit.__VmonitorNum))))) {
        VL_WRITEF_NX("Time=%0t | din=%b sel=%b | y=%b\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,1,(IData)(vlSelfRef.tb__DOT__din),
                     2,vlSelfRef.tb__DOT__sel,4,(IData)(vlSelfRef.tb__DOT__y));
    }
}

void Vdemux___024root___eval_nba(Vdemux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdemux___024root___eval_nba\n"); );
    Vdemux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((7ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vdemux___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vdemux___024root___timing_resume(Vdemux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdemux___024root___timing_resume\n"); );
    Vdemux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((8ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vdemux___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdemux___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdemux___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vdemux___024root___eval_phase__act(Vdemux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdemux___024root___eval_phase__act\n"); );
    Vdemux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vdemux___024root___eval_triggers_vec__act(vlSelf);
    Vdemux___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vdemux___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vdemux___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vdemux___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vdemux___024root___timing_resume(vlSelf);
        Vdemux___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vdemux___024root___eval_phase__inact(Vdemux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdemux___024root___eval_phase__inact\n"); );
    Vdemux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb.v", 3, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vdemux___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdemux___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vdemux___024root___eval_phase__nba(Vdemux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdemux___024root___eval_phase__nba\n"); );
    Vdemux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vdemux___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vdemux___024root___eval_nba(vlSelf);
        Vdemux___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vdemux___024root___eval(Vdemux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdemux___024root___eval\n"); );
    Vdemux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vdemux___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("tb.v", 3, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("tb.v", 3, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 100 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vdemux___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("tb.v", 3, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 100 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vdemux___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vdemux___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vdemux___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vdemux___024root___eval_debug_assertions(Vdemux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdemux___024root___eval_debug_assertions\n"); );
    Vdemux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
