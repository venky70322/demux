// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdemux.h for the primary calling header

#include "Vdemux__pch.h"

void Vdemux___024root___ctor_var_reset(Vdemux___024root* vlSelf);

Vdemux___024root::Vdemux___024root(Vdemux__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vdemux___024root___ctor_var_reset(this);
}

void Vdemux___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vdemux___024root::~Vdemux___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
