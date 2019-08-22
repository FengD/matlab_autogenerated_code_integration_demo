//
// File: Simulink2S32V_SlopeEst.cpp
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
#include "Simulink2S32V_SlopeEst.h"
#include "Simulink2S32V_SlopeEst_private.h"

// Exported data definition

// Definition for custom storage class: Default
CAN_DATATYPE canTx292;
static void rate_scheduler(RT_MODEL_Simulink2S32V_SlopeE_T *const
  Simulink2S32V_SlopeEst_M);
uint32_T plook_evenag(real_T u, real_T bp0, real_T bpSpace, real_T *fraction)
{
  uint32_T bpIndex;
  real_T invSpc;

  // Prelookup - Index and Fraction
  // Index Search method: 'even'
  // Use previous index: 'off'
  // Use last breakpoint for index at or above upper limit: 'on'
  // Remove protection against out-of-range input in generated code: 'on'

  invSpc = 1.0 / bpSpace;
  bpIndex = (uint32_T)((u - bp0) * invSpc);
  *fraction = (u - ((real_T)bpIndex * bpSpace + bp0)) * invSpc;
  return bpIndex;
}

real_T intrp1d_la_pw(uint32_T bpIndex, real_T frac, const real_T table[],
                     uint32_T maxIndex)
{
  real_T y;

  // Interpolation 1-D
  // Interpolation method: 'Linear'
  // Use last breakpoint for index at or above upper limit: 'on'
  // Overflow mode: 'portable wrapping'

  if (bpIndex == maxIndex) {
    y = table[bpIndex];
  } else {
    y = (table[bpIndex + 1U] - table[bpIndex]) * frac + table[bpIndex];
  }

  return y;
}

//
//   This function updates active task flag for each subrate.
// The function is called at model base rate, hence the
// generated code self-manages all its subrates.
//
static void rate_scheduler(RT_MODEL_Simulink2S32V_SlopeE_T *const
  Simulink2S32V_SlopeEst_M)
{
  // Compute which subrates run during the next base time step.  Subrates
  //  are an integer multiple of the base rate counter.  Therefore, the subtask
  //  counter is reset when it reaches its limit (zero means run).

  (Simulink2S32V_SlopeEst_M->Timing.TaskCounters.TID[1])++;
  if ((Simulink2S32V_SlopeEst_M->Timing.TaskCounters.TID[1]) > 1) {// Sample time: [0.02s, 0.0s]
    Simulink2S32V_SlopeEst_M->Timing.TaskCounters.TID[1] = 0;
  }
}

// Model step function
void Simulink2S32V_demoModelClass::step()
{
  int8_T slopesign;
  if ((&Simulink2S32V_SlopeEst_M)->Timing.TaskCounters.TID[1] == 0) {
    // Outputs for Atomic SubSystem: '<Root>/CAN_Unpack'
    Simulink2S32V_SlopeE_CAN_Unpack(getSimulinkCanMsgByIdInMem(844), getSimulinkCanMsgByIdInMem(842),
      &Simulink2S32V_SlopeEst_B.CANUnpack_o7,
      &Simulink2S32V_SlopeEst_B.CANUnpack_o5,
      &Simulink2S32V_SlopeEst_B.CANUnpack_o3,
      &Simulink2S32V_SlopeEst_B.CANUnpack_o1,
      &Simulink2S32V_SlopeEst_B.CANUnpack_o3_o);

    // End of Outputs for SubSystem: '<Root>/CAN_Unpack'
  }

  // Outputs for Atomic SubSystem: '<Root>/Sim_Main'
  Simulink2S32V_SlopeEst_Sim_Main(&Simulink2S32V_SlopeEst_M,
    Simulink2S32V_SlopeEst_B.CANUnpack_o7, Simulink2S32V_SlopeEst_B.CANUnpack_o1,
    Simulink2S32V_SlopeEst_B.CANUnpack_o3_o,
    Simulink2S32V_SlopeEst_B.CANUnpack_o5, &Simulink2S32V_SlopeEst_B.slopeEnable,
    &slopesign, &Simulink2S32V_SlopeEst_B.Sim_Main,
    &Simulink2S32V_SlopeEst_DW.Sim_Main);

  // End of Outputs for SubSystem: '<Root>/Sim_Main'

  // Outputs for Atomic SubSystem: '<Root>/CAN_Pack'
  Simulink2S32V_SlopeEst_CAN_Pack(Simulink2S32V_SlopeEst_B.slopeEnable);
  
  updateMemBySimulinkCanMsg(&canTx292);
  // End of Outputs for SubSystem: '<Root>/CAN_Pack'
  rate_scheduler((&Simulink2S32V_SlopeEst_M));
}

// Model initialize function
void Simulink2S32V_demoModelClass::initialize()
{
  // Registration code

  // initialize non-finites
  rt_InitInfAndNaN(sizeof(real_T));

  // initialize real-time model
  (void) memset((void *)(&Simulink2S32V_SlopeEst_M), 0,
                sizeof(RT_MODEL_Simulink2S32V_SlopeE_T));

  // block I/O
  (void) memset(((void *) &Simulink2S32V_SlopeEst_B), 0,
                sizeof(B_Simulink2S32V_SlopeEst_T));

  // custom signals
  canTx292 = CAN_DATATYPE_GROUND;

  // states (dwork)
  (void) memset((void *)&Simulink2S32V_SlopeEst_DW, 0,
                sizeof(DW_Simulink2S32V_SlopeEst_T));

  {
    int8_T slopesign;

    // Start for Atomic SubSystem: '<Root>/CAN_Unpack'
    Simulink2S32V__CAN_Unpack_Start();

    // End of Start for SubSystem: '<Root>/CAN_Unpack'

    // SystemInitialize for Atomic SubSystem: '<Root>/Sim_Main'
    Simulink2S32V_Slo_Sim_Main_Init(&slopesign,
      &Simulink2S32V_SlopeEst_B.Sim_Main, &Simulink2S32V_SlopeEst_DW.Sim_Main);

    // End of SystemInitialize for SubSystem: '<Root>/Sim_Main'
  }
}

// Model terminate function
void Simulink2S32V_demoModelClass::terminate()
{
  // (no terminate code required)
}

// Constructor
Simulink2S32V_demoModelClass::Simulink2S32V_demoModelClass()
{
}

// Destructor
Simulink2S32V_demoModelClass::~Simulink2S32V_demoModelClass()
{
  // Currently there is no destructor body generated.
}

// Real-Time Model get method
RT_MODEL_Simulink2S32V_SlopeE_T * Simulink2S32V_demoModelClass::getRTM()
{
  return (&Simulink2S32V_SlopeEst_M);
}

//
// File trailer for generated code.
//
// [EOF]
//
