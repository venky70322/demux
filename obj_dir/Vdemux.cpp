// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vdemux__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vdemux::Vdemux(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vdemux__Syms(contextp(), _vcname__, this)}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vdemux::Vdemux(const char* _vcname__)
    : Vdemux(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vdemux::~Vdemux() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vdemux___024root___eval_debug_assertions(Vdemux___024root* vlSelf);
#endif  // VL_DEBUG
void Vdemux___024root___eval_static(Vdemux___024root* vlSelf);
void Vdemux___024root___eval_initial(Vdemux___024root* vlSelf);
void Vdemux___024root___eval_settle(Vdemux___024root* vlSelf);
void Vdemux___024root___eval(Vdemux___024root* vlSelf);

void Vdemux::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vdemux::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vdemux___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vdemux___024root___eval_static(&(vlSymsp->TOP));
        Vdemux___024root___eval_initial(&(vlSymsp->TOP));
        Vdemux___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vdemux___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vdemux::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vdemux::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vdemux::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vdemux___024root___eval_final(Vdemux___024root* vlSelf);

VL_ATTR_COLD void Vdemux::final() {
    Vdemux___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vdemux::hierName() const { return vlSymsp->name(); }
const char* Vdemux::modelName() const { return "Vdemux"; }
unsigned Vdemux::threads() const { return 1; }
void Vdemux::prepareClone() const { contextp()->prepareClone(); }
void Vdemux::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vdemux::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vdemux___024root__trace_decl_types(VerilatedVcd* tracep);

void Vdemux___024root__trace_init_top(Vdemux___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vdemux___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdemux___024root*>(voidSelf);
    Vdemux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    Vdemux___024root__trace_decl_types(tracep);
    Vdemux___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vdemux___024root__trace_register(Vdemux___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vdemux::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vdemux::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP), name(), false, 3);
    Vdemux___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
