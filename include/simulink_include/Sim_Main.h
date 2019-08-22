//
// File: Sim_Main.h
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
#ifndef RTW_HEADER_Sim_Main_h_
#define RTW_HEADER_Sim_Main_h_
#include <cmath>
#include <string.h>
#ifndef Simulink2S32V_SlopeEst_COMMON_INCLUDES_
# define Simulink2S32V_SlopeEst_COMMON_INCLUDES_
#include <string.h>
#include "rtwtypes.h"
#include "can_message.h"
#endif                                 // Simulink2S32V_SlopeEst_COMMON_INCLUDES_ 

#include "Simulink2S32V_SlopeEst_types.h"
#include "rt_nonfinite.h"

// Block signals for system '<Root>/Sim_Main'
typedef struct {
  real_T SumB31;                       // '<S7>/SumB31'
  real_T Abs;                          // '<S8>/Abs'
  real_T TappedDelay1[25];             // '<S8>/Tapped Delay1'
  real_T TappedDelay2[25];             // '<S8>/Tapped Delay2'
  real_T Diff;                         // '<S13>/Diff'
  real_T Sloperange;                   // '<S8>/Sloperange'
  real_T Product2;                     // '<S8>/Product2'
  real_T UnaryMinus1;                  // '<S8>/Unary Minus1'
  real_T slope_out;                    // '<S6>/SlopeDelay'
  int32_T Subtract4;                   // '<S14>/Subtract4'
  boolean_T Compare;                   // '<S11>/Compare'
  boolean_T Compare_l;                 // '<S12>/Compare'
} B_Sim_Main_Simulink2S32V_Slop_T;

// Block states (auto storage) for system '<Root>/Sim_Main'
typedef struct {
  real_T Delay11_DSTATE;               // '<S7>/Delay11'
  real_T Delay21_DSTATE;               // '<S7>/Delay21'
  real_T TappedDelay1_X[24];           // '<S8>/Tapped Delay1'
  real_T TappedDelay2_X[24];           // '<S8>/Tapped Delay2'
  real_T UD_DSTATE;                    // '<S13>/UD'
  real_T TappedDelay_X[24];            // '<S8>/Tapped Delay'
  real_T UnitDelay_DSTATE;             // '<S8>/Unit Delay'
  real_T slope_mean;                   // '<S6>/SlopeDelay'
  uint32_T timetick;                   // '<S6>/SlopeDelay'
  uint8_T is_active_c81_Simulink2S32V_Slo;// '<S6>/SlopeDelay'
  uint8_T is_c81_Simulink2S32V_SlopeEst;// '<S6>/SlopeDelay'
  boolean_T Subsystem_MODE;            // '<S8>/Subsystem'
} DW_Sim_Main_Simulink2S32V_Slo_T;

extern void Simulink2S32V_Slo_Sim_Main_Init(int8_T *rty_SimOut_i,
  B_Sim_Main_Simulink2S32V_Slop_T *localB, DW_Sim_Main_Simulink2S32V_Slo_T
  *localDW);
extern void Simulink2S32V_SlopeEst_Sim_Main(RT_MODEL_Simulink2S32V_SlopeE_T *
  const Simulink2S32V_SlopeEst_M, real_T rtu_CANRx, real_T rtu_CANRx_i, real_T
  rtu_CANRx_d, real_T rtu_CANRx_o, real_T *rty_SimOut, int8_T *rty_SimOut_i,
  B_Sim_Main_Simulink2S32V_Slop_T *localB, DW_Sim_Main_Simulink2S32V_Slo_T
  *localDW);

#endif                                 // RTW_HEADER_Sim_Main_h_

//
// File trailer for generated code.
//
// [EOF]
//
