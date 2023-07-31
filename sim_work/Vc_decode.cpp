// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vc_decode.h"
#include "Vc_decode__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vc_decode::Vc_decode(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vc_decode__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vc_decode::Vc_decode(const char* _vcname__)
    : Vc_decode(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vc_decode::~Vc_decode() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vc_decode___024root___eval_debug_assertions(Vc_decode___024root* vlSelf);
#endif  // VL_DEBUG
void Vc_decode___024root___eval_static(Vc_decode___024root* vlSelf);
void Vc_decode___024root___eval_initial(Vc_decode___024root* vlSelf);
void Vc_decode___024root___eval_settle(Vc_decode___024root* vlSelf);
void Vc_decode___024root___eval(Vc_decode___024root* vlSelf);

void Vc_decode::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vc_decode::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vc_decode___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vc_decode___024root___eval_static(&(vlSymsp->TOP));
        Vc_decode___024root___eval_initial(&(vlSymsp->TOP));
        Vc_decode___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vc_decode___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vc_decode::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vc_decode::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vc_decode::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vc_decode___024root___eval_final(Vc_decode___024root* vlSelf);

VL_ATTR_COLD void Vc_decode::final() {
    Vc_decode___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vc_decode::hierName() const { return vlSymsp->name(); }
const char* Vc_decode::modelName() const { return "Vc_decode"; }
unsigned Vc_decode::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vc_decode::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vc_decode___024root__trace_init_top(Vc_decode___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vc_decode___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vc_decode___024root*>(voidSelf);
    Vc_decode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vc_decode___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vc_decode___024root__trace_register(Vc_decode___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vc_decode::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vc_decode::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vc_decode___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}