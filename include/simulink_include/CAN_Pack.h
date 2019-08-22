//
// File: CAN_Pack.h
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
#ifndef RTW_HEADER_CAN_Pack_h_
#define RTW_HEADER_CAN_Pack_h_
#ifndef Simulink2S32V_SlopeEst_COMMON_INCLUDES_
# define Simulink2S32V_SlopeEst_COMMON_INCLUDES_
#include <string.h>
#include "rtwtypes.h"
#include "can_message.h"
#endif                                 // Simulink2S32V_SlopeEst_COMMON_INCLUDES_ 

#include "Simulink2S32V_SlopeEst_types.h"

// Block states (auto storage) for system '<Root>/CAN_Pack'
typedef struct {
  int_T CANPack_ModeSignalID;          // '<S1>/CAN Pack'
} DW_CAN_Pack_Simulink2S32V_Slo_T;

extern void Simulink2S32V_SlopeEst_CAN_Pack(real_T rtu_SimOut);

#endif                                 // RTW_HEADER_CAN_Pack_h_

//
// File trailer for generated code.
//
// [EOF]
//
