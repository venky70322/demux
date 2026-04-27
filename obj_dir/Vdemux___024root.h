// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdemux.h for the primary calling header

#ifndef VERILATED_VDEMUX___024ROOT_H_
#define VERILATED_VDEMUX___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vdemux___024unit;


class Vdemux__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdemux___024root final {
  public:
    // CELLS
    Vdemux___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb__DOT__din;
    CData/*1:0*/ tb__DOT__sel;
    CData/*3:0*/ tb__DOT__y;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb__DOT__din__0;
    CData/*1:0*/ __Vtrigprevexpr___TOP__tb__DOT__sel__0;
    CData/*3:0*/ __Vtrigprevexpr___TOP__tb__DOT__y__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;

    // INTERNAL VARIABLES
    Vdemux__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vdemux___024root(Vdemux__Syms* symsp, const char* namep);
    ~Vdemux___024root();
    VL_UNCOPYABLE(Vdemux___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
