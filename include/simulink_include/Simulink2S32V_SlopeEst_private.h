//
// File: Simulink2S32V_SlopeEst_private.h
//
// Code generated for Simulink model 'Simulink2S32V_SlopeEst'.
//
// Model version                  : 1.71
// Simulink Coder version         : 8.12 (R2017a) 16-Feb-2017
// C/C++ source code generated on : Fri Apr 19 13:11:26 2019
//
// Target selection: ert.tlc
// Embedded hardware selection: Custom Processor->Custom
// Emulation hardware selection:
//    Differs from embedded hardware (MATLAB Host)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_Simulink2S32V_SlopeEst_private_h_
#define RTW_HEADER_Simulink2S32V_SlopeEst_private_h_
#include "rtwtypes.h"

extern CAN_DATATYPE CAN_DATATYPE_GROUND;
extern uint32_T plook_evenag(real_T u, real_T bp0, real_T bpSpace, real_T
  *fraction);
extern real_T intrp1d_la_pw(uint32_T bpIndex, real_T frac, const real_T table[],
  uint32_T maxIndex);

#endif                                 // RTW_HEADER_Simulink2S32V_SlopeEst_private_h_

//
// File trailer for generated code.
//
// [EOF]
//
