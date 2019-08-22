//
// File: Simulink2S32V_SlopeEst.h
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
#ifndef RTW_HEADER_Simulink2S32V_SlopeEst_h_
#define RTW_HEADER_Simulink2S32V_SlopeEst_h_
#include <string.h>
#ifndef Simulink2S32V_SlopeEst_COMMON_INCLUDES_
# define Simulink2S32V_SlopeEst_COMMON_INCLUDES_
#include <string.h>
#include "rtwtypes.h"
#include "can_message.h"
#include "api.h"
#endif                                 // Simulink2S32V_SlopeEst_COMMON_INCLUDES_

#include "Simulink2S32V_SlopeEst_types.h"

// Child system includes
#include "CAN_Pack.h"
#include "CAN_Unpack.h"
#include "Sim_Main.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

// user code (top of export header file)
#include "can_message.h"

// Block signals (auto storage)
typedef struct {
  real_T slopeEnable;                  // '<S6>/slopeEnable'
  real_T CANUnpack_o3;                 // '<S4>/CAN Unpack'
  real_T CANUnpack_o5;                 // '<S4>/CAN Unpack'
  real_T CANUnpack_o7;                 // '<S4>/CAN Unpack'
  real_T CANUnpack_o1;                 // '<S5>/CAN Unpack'
  real_T CANUnpack_o3_o;               // '<S5>/CAN Unpack'
  B_Sim_Main_Simulink2S32V_Slop_T Sim_Main;// '<Root>/Sim_Main'
  B_CAN_Unpack_Simulink2S32V_Sl_T CAN_Unpack;// '<Root>/CAN_Unpack'
} B_Simulink2S32V_SlopeEst_T;

// Block states (auto storage) for system '<Root>'
typedef struct {
  DW_Sim_Main_Simulink2S32V_Slo_T Sim_Main;// '<Root>/Sim_Main'
  DW_CAN_Unpack_Simulink2S32V_S_T CAN_Unpack;// '<Root>/CAN_Unpack'
  DW_CAN_Pack_Simulink2S32V_Slo_T CAN_Pack;// '<Root>/CAN_Pack'
} DW_Simulink2S32V_SlopeEst_T;

// Constant parameters (auto storage)
typedef struct {
  // Pooled Parameter (Expression: LLC_Slope_AX_Filter_Coef)
  //  Referenced by:
  //    '<S8>/Constant'
  //    '<S8>/Constant2'

  real_T pooled4[25];

  // Expression: LLC_Slope_Range_Degree
  //  Referenced by: '<S8>/Sloperange'

  real_T Sloperange_tableData[11];
} ConstP_Simulink2S32V_SlopeEst_T;

// Real-time Model Data Structure
struct tag_RTM_Simulink2S32V_SlopeEs_T {
  const char_T * volatile errorStatus;

  //
  //  Timing:
  //  The following substructure contains information regarding
  //  the timing information for the model.

  struct {
    struct {
      uint8_T TID[2];
    } TaskCounters;
  } Timing;
};

#ifdef __cplusplus

extern "C" {

#endif

#ifdef __cplusplus

}
#endif

// Constant parameters (auto storage)
extern const ConstP_Simulink2S32V_SlopeEst_T Simulink2S32V_SlopeEst_ConstP;

// Exported data declaration

// Declaration for custom storage class: Default
extern CAN_DATATYPE canTx292;

// Class declaration for model Simulink2S32V_SlopeEst
class Simulink2S32V_demoModelClass {
  // public data and function members
 public:
  // model initialize function
  void initialize();

  // model step function
  void step();

  // model terminate function
  void terminate();

  // Constructor
  Simulink2S32V_demoModelClass();

  // Destructor
  ~Simulink2S32V_demoModelClass();

  // Real-Time Model get method
  RT_MODEL_Simulink2S32V_SlopeE_T * getRTM();

  // private data and function members
 private:
  // Block signals
  B_Simulink2S32V_SlopeEst_T Simulink2S32V_SlopeEst_B;

  // Block states
  DW_Simulink2S32V_SlopeEst_T Simulink2S32V_SlopeEst_DW;

  // Real-Time Model
  RT_MODEL_Simulink2S32V_SlopeE_T Simulink2S32V_SlopeEst_M;
};

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<S2>/Rate Transition' : Eliminated since input and output rates are identical
//  Block '<S2>/Rate Transition1' : Eliminated since input and output rates are identical


//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'Simulink2S32V_SlopeEst'
//  '<S1>'   : 'Simulink2S32V_SlopeEst/CAN_Pack'
//  '<S2>'   : 'Simulink2S32V_SlopeEst/CAN_Unpack'
//  '<S3>'   : 'Simulink2S32V_SlopeEst/Sim_Main'
//  '<S4>'   : 'Simulink2S32V_SlopeEst/CAN_Unpack/Enabled Subsystem'
//  '<S5>'   : 'Simulink2S32V_SlopeEst/CAN_Unpack/Enabled Subsystem13'
//  '<S6>'   : 'Simulink2S32V_SlopeEst/Sim_Main/EstimateSlope'
//  '<S7>'   : 'Simulink2S32V_SlopeEst/Sim_Main/EstimateSlope/ATB_YawRtFilter2Order10HZ'
//  '<S8>'   : 'Simulink2S32V_SlopeEst/Sim_Main/EstimateSlope/SlopeCalculate'
//  '<S9>'   : 'Simulink2S32V_SlopeEst/Sim_Main/EstimateSlope/SlopeDelay'
//  '<S10>'  : 'Simulink2S32V_SlopeEst/Sim_Main/EstimateSlope/SlopeCalculate/Compare To Constant1'
//  '<S11>'  : 'Simulink2S32V_SlopeEst/Sim_Main/EstimateSlope/SlopeCalculate/Compare To Constant2'
//  '<S12>'  : 'Simulink2S32V_SlopeEst/Sim_Main/EstimateSlope/SlopeCalculate/Compare To Constant3'
//  '<S13>'  : 'Simulink2S32V_SlopeEst/Sim_Main/EstimateSlope/SlopeCalculate/Difference'
//  '<S14>'  : 'Simulink2S32V_SlopeEst/Sim_Main/EstimateSlope/SlopeCalculate/Subsystem'

#endif                                 // RTW_HEADER_Simulink2S32V_SlopeEst_h_

//
// File trailer for generated code.
//
// [EOF]
//
