// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtinyalu.h for the primary calling header

#ifndef VERILATED_VTINYALU___024UNIT_H_
#define VERILATED_VTINYALU___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"


class Vtinyalu__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtinyalu___024unit final {
  public:

    // INTERNAL VARIABLES
    Vtinyalu__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtinyalu___024unit();
    ~Vtinyalu___024unit();
    void ctor(Vtinyalu__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtinyalu___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
    void __vlCoverToggleInsert(int begin, int end, bool ranged, uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp);
};


#endif  // guard
