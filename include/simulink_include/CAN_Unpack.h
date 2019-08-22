//
// File: CAN_Unpack.h
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
#ifndef RTW_HEADER_CAN_Unpack_h_
#define RTW_HEADER_CAN_Unpack_h_
#ifndef Simulink2S32V_SlopeEst_COMMON_INCLUDES_
# define Simulink2S32V_SlopeEst_COMMON_INCLUDES_
#include <string.h>
#include "rtwtypes.h"
#include "can_message.h"
#endif                                 // Simulink2S32V_SlopeEst_COMMON_INCLUDES_ 

#include "Simulink2S32V_SlopeEst_types.h"

// Block signals for system '<Root>/CAN_Unpack'
typedef struct {
  real_T CANUnpack_o1;                 // '<S4>/CAN Unpack'
  real_T CANUnpack_o2;                 // '<S4>/CAN Unpack'
  real_T CANUnpack_o4;                 // '<S4>/CAN Unpack'
  real_T CANUnpack_o6;                 // '<S4>/CAN Unpack'
  real_T CANUnpack_o8;                 // '<S4>/CAN Unpack'
  real_T CANUnpack_o2_e;               // '<S5>/CAN Unpack'
  real_T CANUnpack_o4_d;               // '<S5>/CAN Unpack'
  real_T CANUnpack_o5;                 // '<S5>/CAN Unpack'
  real_T CANUnpack_o6_h;               // '<S5>/CAN Unpack'
} B_CAN_Unpack_Simulink2S32V_Sl_T;

// Block states (auto storage) for system '<Root>/CAN_Unpack'
typedef struct {
  int_T CANUnpack_ModeSignalID;        // '<S4>/CAN Unpack'
  int_T CANUnpack_StatusPortID;        // '<S4>/CAN Unpack'
  int_T CANUnpack_ModeSignalID_b;      // '<S5>/CAN Unpack'
  int_T CANUnpack_StatusPortID_b;      // '<S5>/CAN Unpack'
} DW_CAN_Unpack_Simulink2S32V_S_T;

extern void Simulink2S32V__CAN_Unpack_Start(void);
extern void Simulink2S32V_SlopeE_CAN_Unpack(CAN_MESSAGE rtu_CANRx_844,
  CAN_MESSAGE rtu_CANRx_842, real_T *rty_CANOut, real_T *rty_CANOut_j, real_T
  *rty_CANOut_b, real_T *rty_CANOut_m, real_T *rty_CANOut_i);

#endif                                 // RTW_HEADER_CAN_Unpack_h_

//
// File trailer for generated code.
//
// [EOF]
//
