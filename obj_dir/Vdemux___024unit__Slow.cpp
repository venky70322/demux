// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdemux.h for the primary calling header

#include "Vdemux__pch.h"

void Vdemux___024unit___ctor_var_reset(Vdemux___024unit* vlSelf);

Vdemux___024unit::Vdemux___024unit() = default;
Vdemux___024unit::~Vdemux___024unit() = default;

void Vdemux___024unit::ctor(Vdemux__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vdemux___024unit___ctor_var_reset(this);
}

void Vdemux___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vdemux___024unit::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
