//
// File: Sim_Main.cpp
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
#include "Sim_Main.h"

// Include model header file for global data
#include "Simulink2S32V_SlopeEst.h"
#include "Simulink2S32V_SlopeEst_private.h"

// Named constants for Chart: '<S6>/SlopeDelay'
#define Simulink2S32V_S_IN_entered_flat ((uint8_T)2U)
#define Simulink2S32_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#define Simulink2S32_IN_entered_upslope ((uint8_T)3U)
#define Simulink2S32_IN_leaving_upslope ((uint8_T)7U)
#define Simulink2S3_IN_entering_upslope ((uint8_T)5U)
#define Simulink2S_IN_entered_downslope ((uint8_T)1U)
#define Simulink2S_IN_leaving_downslope ((uint8_T)6U)
#define Simulink2_IN_entering_downslope ((uint8_T)4U)

// System initialize for atomic system: '<Root>/Sim_Main'
void Simulink2S32V_Slo_Sim_Main_Init(int8_T *rty_SimOut_i,
  B_Sim_Main_Simulink2S32V_Slop_T *localB, DW_Sim_Main_Simulink2S32V_Slo_T
  *localDW)
{
  // InitializeConditions for S-Function (sfix_udelay): '<S8>/Tapped Delay1'
  memset(&localDW->TappedDelay1_X[0], 0, 24U * sizeof(real_T));

  // InitializeConditions for S-Function (sfix_udelay): '<S8>/Tapped Delay2'
  memset(&localDW->TappedDelay2_X[0], 0, 24U * sizeof(real_T));

  // InitializeConditions for S-Function (sfix_udelay): '<S8>/Tapped Delay'
  memset(&localDW->TappedDelay_X[0], 0, 24U * sizeof(real_T));

  // SystemInitialize for Chart: '<S6>/SlopeDelay'
  localDW->is_active_c81_Simulink2S32V_Slo = 0U;
  localDW->is_c81_Simulink2S32V_SlopeEst = Simulink2S32_IN_NO_ACTIVE_CHILD;
  localDW->timetick = 0U;
  localDW->slope_mean = 0.0;
  localB->slope_out = 0.0;
  *rty_SimOut_i = 0;
}

// Output and update for atomic system: '<Root>/Sim_Main'
void Simulink2S32V_SlopeEst_Sim_Main(RT_MODEL_Simulink2S32V_SlopeE_T * const
  Simulink2S32V_SlopeEst_M, real_T rtu_CANRx, real_T rtu_CANRx_i, real_T
  rtu_CANRx_d, real_T rtu_CANRx_o, real_T *rty_SimOut, int8_T *rty_SimOut_i,
  B_Sim_Main_Simulink2S32V_Slop_T *localB, DW_Sim_Main_Simulink2S32V_Slo_T
  *localDW)
{
  uint32_T bpIdx;
  real_T rtb_Delay11;
  real_T rtb_Gain_a;
  real_T rtb_SumA31;
  real_T rtb_Gain1;
  real_T rtb_TappedDelay[25];
  int32_T rtb_Product4;
  real_T Product;
  real_T rtb_DotProduct_0;
  real_T tmp;
  real_T tmp_0;
  if (Simulink2S32V_SlopeEst_M->Timing.TaskCounters.TID[1] == 0) {
    // Delay: '<S7>/Delay11'
    rtb_Delay11 = localDW->Delay11_DSTATE;

    // Sum: '<S7>/SumA31' incorporates:
    //   Delay: '<S7>/Delay11'
    //   Delay: '<S7>/Delay21'
    //   Gain: '<S7>/a(2)(1)'
    //   Gain: '<S7>/a(3)(1)'
    //   Gain: '<S7>/s(1)'
    //   Sum: '<S7>/SumA21'

    rtb_SumA31 = (0.020083365564211236 * rtu_CANRx - -1.5610180758007182 *
                  localDW->Delay11_DSTATE) - 0.64135153805756318 *
      localDW->Delay21_DSTATE;

    // Sum: '<S7>/SumB31' incorporates:
    //   Delay: '<S7>/Delay11'
    //   Delay: '<S7>/Delay21'
    //   Gain: '<S7>/b(2)(1)'
    //   Sum: '<S7>/SumB21'

    localB->SumB31 = (2.0 * localDW->Delay11_DSTATE + rtb_SumA31) +
      localDW->Delay21_DSTATE;

    // Gain: '<S3>/Gain' incorporates:
    //   Sum: '<S3>/Sum'

    rtb_Gain_a = (rtu_CANRx_i + rtu_CANRx_d) * 0.5;

    // Abs: '<S8>/Abs'
    localB->Abs = std::abs(rtb_Gain_a);

    // S-Function (sfix_udelay): '<S8>/Tapped Delay1'
    memcpy(&localB->TappedDelay1[0], &localDW->TappedDelay1_X[0], 24U * sizeof
           (real_T));
    localB->TappedDelay1[24] = rtu_CANRx_o;
  }

  // DotProduct: '<S8>/Dot Product' incorporates:
  //   Constant: '<S8>/Constant'

  rtb_DotProduct_0 = 0.0;
  for (rtb_Product4 = 0; rtb_Product4 < 25; rtb_Product4++) {
    rtb_DotProduct_0 += localB->TappedDelay1[rtb_Product4] *
      Simulink2S32V_SlopeEst_ConstP.pooled4[rtb_Product4];
  }

  if (Simulink2S32V_SlopeEst_M->Timing.TaskCounters.TID[1] == 0) {
    // S-Function (sfix_udelay): '<S8>/Tapped Delay2'
    memcpy(&localB->TappedDelay2[0], &localDW->TappedDelay2_X[0], 24U * sizeof
           (real_T));
    localB->TappedDelay2[24] = localB->SumB31;
  }

  // DotProduct: '<S8>/Dot Product2' incorporates:
  //   Constant: '<S8>/Constant2'

  tmp = 0.0;
  for (rtb_Product4 = 0; rtb_Product4 < 25; rtb_Product4++) {
    tmp += localB->TappedDelay2[rtb_Product4] *
      Simulink2S32V_SlopeEst_ConstP.pooled4[rtb_Product4];
  }

  // Gain: '<S8>/Gain1' incorporates:
  //   DotProduct: '<S8>/Dot Product2'

  rtb_Gain1 = 0.017444444444444446 * tmp;
  if (Simulink2S32V_SlopeEst_M->Timing.TaskCounters.TID[1] == 0) {
    // Sum: '<S13>/Diff' incorporates:
    //   UnitDelay: '<S13>/UD'
    //
    //  Block description for '<S13>/Diff':
    //
    //   Add in CPU
    //
    //  Block description for '<S13>/UD':
    //
    //   Store in Global RAM

    localB->Diff = localB->Abs - localDW->UD_DSTATE;

    // RelationalOperator: '<S11>/Compare' incorporates:
    //   Constant: '<S11>/Constant'

    localB->Compare = (localB->Abs > 0.0);

    // Outputs for Enabled SubSystem: '<S8>/Subsystem' incorporates:
    //   EnablePort: '<S14>/Enable'

    if (localB->Compare) {
      if (!localDW->Subsystem_MODE) {
        localDW->Subsystem_MODE = true;
      }
    } else {
      if (localDW->Subsystem_MODE) {
        localDW->Subsystem_MODE = false;
      }
    }

    // End of Outputs for SubSystem: '<S8>/Subsystem'
  }

  // Product: '<S8>/Product'
  Product = localB->Diff * 100.0;

  // S-Function (sfix_udelay): '<S8>/Tapped Delay'
  memcpy(&rtb_TappedDelay[0], &localDW->TappedDelay_X[0], 24U * sizeof(real_T));
  rtb_TappedDelay[24] = Product;

  // Outputs for Enabled SubSystem: '<S8>/Subsystem' incorporates:
  //   EnablePort: '<S14>/Enable'

  if (localDW->Subsystem_MODE) {
    // DotProduct: '<S8>/Dot Product1' incorporates:
    //   Constant: '<S8>/Constant'

    tmp = 0.0;
    for (rtb_Product4 = 0; rtb_Product4 < 25; rtb_Product4++) {
      tmp += Simulink2S32V_SlopeEst_ConstP.pooled4[rtb_Product4] *
        rtb_TappedDelay[rtb_Product4];
    }

    // Product: '<S14>/Product5'
    tmp_0 = std::floor(1.1999969482421875 * rtb_Gain1 * 65536.0);
    if (rtIsNaN(tmp_0) || rtIsInf(tmp_0)) {
      tmp_0 = 0.0;
    } else {
      tmp_0 = std::fmod(tmp_0, 4.294967296E+9);
    }

    tmp_0 = std::floor((real_T)(tmp_0 < 0.0 ? -(int32_T)(uint32_T)-tmp_0 :
      (int32_T)(uint32_T)tmp_0) * 1.52587890625E-5 * rtb_Gain1 * 65536.0);
    if (rtIsNaN(tmp_0) || rtIsInf(tmp_0)) {
      tmp_0 = 0.0;
    } else {
      tmp_0 = std::fmod(tmp_0, 4.294967296E+9);
    }

    // Product: '<S14>/Product4' incorporates:
    //   DotProduct: '<S8>/Dot Product1'
    //   Product: '<S14>/Divide2'
    //   Sum: '<S14>/Subtract3'

    tmp = std::floor(localB->Abs / localB->Abs * tmp * 65536.0);
    if (rtIsNaN(tmp) || rtIsInf(tmp)) {
      tmp = 0.0;
    } else {
      tmp = std::fmod(tmp, 4.294967296E+9);
    }

    // Sum: '<S14>/Subtract4' incorporates:
    //   DotProduct: '<S8>/Dot Product'
    //   Product: '<S14>/Product4'
    //   Product: '<S14>/Product5'

    tmp = std::floor((((real_T)(tmp_0 < 0.0 ? -(int32_T)(uint32_T)-tmp_0 :
      (int32_T)(uint32_T)tmp_0) * 1.52587890625E-5 - (real_T)(tmp < 0.0 ?
      -(int32_T)(uint32_T)-tmp : (int32_T)(uint32_T)tmp) * 1.52587890625E-5) +
                      rtb_DotProduct_0) * 65536.0);
    if (rtIsNaN(tmp) || rtIsInf(tmp)) {
      tmp = 0.0;
    } else {
      tmp = std::fmod(tmp, 4.294967296E+9);
    }

    localB->Subtract4 = tmp < 0.0 ? -(int32_T)(uint32_T)-tmp : (int32_T)
      (uint32_T)tmp;

    // End of Sum: '<S14>/Subtract4'
  }

  // End of Outputs for SubSystem: '<S8>/Subsystem'
  if (Simulink2S32V_SlopeEst_M->Timing.TaskCounters.TID[1] == 0) {
    // RelationalOperator: '<S12>/Compare' incorporates:
    //   Constant: '<S12>/Constant'

    localB->Compare_l = (rtb_Gain_a >= 0.0);

    // Saturate: '<S8>/Saturation'
    if (localB->Abs > 55.0) {
      tmp = 55.0;
    } else if (localB->Abs < 0.0) {
      tmp = 0.0;
    } else {
      tmp = localB->Abs;
    }

    // End of Saturate: '<S8>/Saturation'

    // Lookup_n-D: '<S8>/Sloperange'
    bpIdx = plook_evenag(tmp, 0.0, 5.5555572509765634, &rtb_Gain_a);
    localB->Sloperange = intrp1d_la_pw(bpIdx, rtb_Gain_a, *(real_T (*)[11])&
      Simulink2S32V_SlopeEst_ConstP.Sloperange_tableData[0], 10U);

    // Product: '<S8>/Product2' incorporates:
    //   Gain: '<S8>/Gain'

    localB->Product2 = 3.0 * localB->Abs * localB->Sloperange;

    // UnaryMinus: '<S8>/Unary Minus1'
    localB->UnaryMinus1 = -localB->Sloperange;
  }

  // Switch: '<S8>/Switch3' incorporates:
  //   Constant: '<S8>/g[mps2]1'

  if (localB->Compare_l) {
    // MinMax: '<S8>/MinMax3'
    if ((3.0 < localB->Product2) || rtIsNaN(localB->Product2)) {
      tmp = 3.0;
    } else {
      tmp = localB->Product2;
    }

    // End of MinMax: '<S8>/MinMax3'

    // Product: '<S8>/Product1' incorporates:
    //   Constant: '<S8>/CtlSteptime[s]'

    rtb_Gain_a = tmp * 0.01;

    // Switch: '<S8>/Switch2'
    if (localB->Compare) {
      rtb_DotProduct_0 = (real_T)localB->Subtract4 * 1.52587890625E-5;
    }

    // End of Switch: '<S8>/Switch2'

    // Gain: '<S8>/rad2deg' incorporates:
    //   Constant: '<S8>/g[mps2]'
    //   Product: '<S8>/Divide1'

    rtb_DotProduct_0 = rtb_DotProduct_0 / 9.8 * 57.298688498550185;

    // Switch: '<S8>/Switch1' incorporates:
    //   Abs: '<S8>/Abs1'
    //   Constant: '<S10>/Constant'
    //   RelationalOperator: '<S10>/Compare'
    //   UnitDelay: '<S8>/Unit Delay'

    if (std::abs(rtb_DotProduct_0) >= 20.0) {
      rtb_DotProduct_0 = localDW->UnitDelay_DSTATE;
    }

    // End of Switch: '<S8>/Switch1'

    // Sum: '<S8>/Subtract1' incorporates:
    //   UnitDelay: '<S8>/Unit Delay'

    rtb_DotProduct_0 -= localDW->UnitDelay_DSTATE;

    // MinMax: '<S8>/MinMax2'
    if (!((rtb_DotProduct_0 < rtb_Gain_a) || rtIsNaN(rtb_Gain_a))) {
      rtb_DotProduct_0 = rtb_Gain_a;
    }

    // End of MinMax: '<S8>/MinMax2'

    // MinMax: '<S8>/MinMax1' incorporates:
    //   UnaryMinus: '<S8>/Unary Minus2'

    if (!((rtb_DotProduct_0 > -rtb_Gain_a) || rtIsNaN(-rtb_Gain_a))) {
      rtb_DotProduct_0 = -rtb_Gain_a;
    }

    // End of MinMax: '<S8>/MinMax1'

    // Sum: '<S8>/Subtract2' incorporates:
    //   UnitDelay: '<S8>/Unit Delay'

    rtb_DotProduct_0 += localDW->UnitDelay_DSTATE;

    // MinMax: '<S8>/MinMax5'
    if (!((rtb_DotProduct_0 < localB->Sloperange) || rtIsNaN(localB->Sloperange)))
    {
      rtb_DotProduct_0 = localB->Sloperange;
    }

    // End of MinMax: '<S8>/MinMax5'

    // MinMax: '<S8>/MinMax4'
    if (!((rtb_DotProduct_0 > localB->UnaryMinus1) || rtIsNaN
          (localB->UnaryMinus1))) {
      rtb_DotProduct_0 = localB->UnaryMinus1;
    }

    // End of MinMax: '<S8>/MinMax4'
  } else {
    rtb_DotProduct_0 = 0.0;
  }

  // End of Switch: '<S8>/Switch3'

  // Chart: '<S6>/SlopeDelay'
  // Gateway: Sim_Main/EstimateSlope/SlopeDelay
  // During: Sim_Main/EstimateSlope/SlopeDelay
  if (localDW->is_active_c81_Simulink2S32V_Slo == 0U) {
    // Entry: Sim_Main/EstimateSlope/SlopeDelay
    localDW->is_active_c81_Simulink2S32V_Slo = 1U;

    // Entry Internal: Sim_Main/EstimateSlope/SlopeDelay
    // Transition: '<S9>:45'
    localDW->is_c81_Simulink2S32V_SlopeEst = Simulink2S32V_S_IN_entered_flat;

    // Entry 'entered_flat': '<S9>:27'
    localDW->timetick = 0U;
    *rty_SimOut_i = 0;
    localB->slope_out = 0.0;
  } else {
    switch (localDW->is_c81_Simulink2S32V_SlopeEst) {
     case Simulink2S_IN_entered_downslope:
      // During 'entered_downslope': '<S9>:38'
      if (rtb_DotProduct_0 > -1.0) {
        // Transition: '<S9>:40'
        localDW->is_c81_Simulink2S32V_SlopeEst = Simulink2S_IN_leaving_downslope;

        // Entry 'leaving_downslope': '<S9>:44'
        localDW->timetick = 10U;
      } else {
        localDW->timetick = 0U;
        *rty_SimOut_i = -1;
        if (rtb_DotProduct_0 < -1.0) {
          localB->slope_out = rtb_DotProduct_0;
        } else {
          localB->slope_out = -1.0;
        }
      }
      break;

     case Simulink2S32V_S_IN_entered_flat:
      // During 'entered_flat': '<S9>:27'
      if (rtb_DotProduct_0 <= -1.0) {
        // Transition: '<S9>:43'
        localDW->is_c81_Simulink2S32V_SlopeEst = Simulink2_IN_entering_downslope;

        // Entry 'entering_downslope': '<S9>:37'
        localDW->timetick = 10U;
        *rty_SimOut_i = 0;
        localB->slope_out = 0.0;
        localDW->slope_mean = 0.0;
      } else {
        if (rtb_DotProduct_0 >= 1.0) {
          // Transition: '<S9>:31'
          localDW->is_c81_Simulink2S32V_SlopeEst =
            Simulink2S3_IN_entering_upslope;

          // Entry 'entering_upslope': '<S9>:28'
          localDW->timetick = 10U;
          *rty_SimOut_i = 0;
          localB->slope_out = 0.0;
          localDW->slope_mean = 0.0;
        }
      }
      break;

     case Simulink2S32_IN_entered_upslope:
      // During 'entered_upslope': '<S9>:29'
      if (rtb_DotProduct_0 < 1.0) {
        // Transition: '<S9>:34'
        localDW->is_c81_Simulink2S32V_SlopeEst = Simulink2S32_IN_leaving_upslope;

        // Entry 'leaving_upslope': '<S9>:30'
        localDW->timetick = 10U;
      } else {
        localDW->timetick = 0U;
        *rty_SimOut_i = 1;
        if (rtb_DotProduct_0 > 1.0) {
          localB->slope_out = rtb_DotProduct_0;
        } else {
          localB->slope_out = 1.0;
        }
      }
      break;

     case Simulink2_IN_entering_downslope:
      // During 'entering_downslope': '<S9>:37'
      if ((rtb_DotProduct_0 <= -1.0) && (rtb_DotProduct_0 <= localDW->slope_mean
           / (real_T)localDW->timetick * 10.0) && (localDW->timetick == 500U)) {
        // Transition: '<S9>:39'
        localDW->is_c81_Simulink2S32V_SlopeEst = Simulink2S_IN_entered_downslope;

        // Entry 'entered_downslope': '<S9>:38'
        localDW->timetick = 0U;
        *rty_SimOut_i = -1;
        localB->slope_out = rtb_DotProduct_0;
      } else if (rtb_DotProduct_0 > -1.0) {
        // Transition: '<S9>:42'
        localDW->is_c81_Simulink2S32V_SlopeEst = Simulink2S32V_S_IN_entered_flat;

        // Entry 'entered_flat': '<S9>:27'
        localDW->timetick = 0U;
        *rty_SimOut_i = 0;
        localB->slope_out = 0.0;
      } else {
        bpIdx = localDW->timetick + /*MW:OvSatOk*/ 10U;
        if (bpIdx < localDW->timetick) {
          bpIdx = MAX_uint32_T;
        }

        localDW->timetick = bpIdx;
        localDW->slope_mean += rtb_DotProduct_0;
      }
      break;

     case Simulink2S3_IN_entering_upslope:
      // During 'entering_upslope': '<S9>:28'
      if (rtb_DotProduct_0 < 1.0) {
        // Transition: '<S9>:32'
        localDW->is_c81_Simulink2S32V_SlopeEst = Simulink2S32V_S_IN_entered_flat;

        // Entry 'entered_flat': '<S9>:27'
        localDW->timetick = 0U;
        *rty_SimOut_i = 0;
        localB->slope_out = 0.0;
      } else if ((rtb_DotProduct_0 >= 1.0) && (rtb_DotProduct_0 >=
                  localDW->slope_mean / (real_T)localDW->timetick * 10.0) &&
                 (localDW->timetick >= 1000U)) {
        // Transition: '<S9>:33'
        localDW->is_c81_Simulink2S32V_SlopeEst = Simulink2S32_IN_entered_upslope;

        // Entry 'entered_upslope': '<S9>:29'
        localDW->timetick = 0U;
        *rty_SimOut_i = 1;
        localB->slope_out = rtb_DotProduct_0;
      } else {
        bpIdx = localDW->timetick + /*MW:OvSatOk*/ 10U;
        if (bpIdx < localDW->timetick) {
          bpIdx = MAX_uint32_T;
        }

        localDW->timetick = bpIdx;
        localDW->slope_mean += rtb_DotProduct_0;
      }
      break;

     case Simulink2S_IN_leaving_downslope:
      // During 'leaving_downslope': '<S9>:44'
      if (rtb_DotProduct_0 <= -1.0) {
        // Transition: '<S9>:41'
        localDW->is_c81_Simulink2S32V_SlopeEst = Simulink2S_IN_entered_downslope;

        // Entry 'entered_downslope': '<S9>:38'
        localDW->timetick = 0U;
        *rty_SimOut_i = -1;
        localB->slope_out = rtb_DotProduct_0;
      } else if ((rtb_DotProduct_0 > -1.0) && (localDW->timetick == 100U)) {
        // Transition: '<S9>:46'
        localDW->is_c81_Simulink2S32V_SlopeEst = Simulink2S32V_S_IN_entered_flat;

        // Entry 'entered_flat': '<S9>:27'
        localDW->timetick = 0U;
        *rty_SimOut_i = 0;
        localB->slope_out = 0.0;
      } else {
        bpIdx = localDW->timetick + /*MW:OvSatOk*/ 10U;
        if (bpIdx < localDW->timetick) {
          bpIdx = MAX_uint32_T;
        }

        localDW->timetick = bpIdx;
      }
      break;

     default:
      // During 'leaving_upslope': '<S9>:30'
      if (rtb_DotProduct_0 >= 1.0) {
        // Transition: '<S9>:35'
        localDW->is_c81_Simulink2S32V_SlopeEst = Simulink2S32_IN_entered_upslope;

        // Entry 'entered_upslope': '<S9>:29'
        localDW->timetick = 0U;
        *rty_SimOut_i = 1;
        localB->slope_out = rtb_DotProduct_0;
      } else if ((rtb_DotProduct_0 < 1.0) && (localDW->timetick == 100U)) {
        // Transition: '<S9>:36'
        localDW->is_c81_Simulink2S32V_SlopeEst = Simulink2S32V_S_IN_entered_flat;

        // Entry 'entered_flat': '<S9>:27'
        localDW->timetick = 0U;
        *rty_SimOut_i = 0;
        localB->slope_out = 0.0;
      } else {
        bpIdx = localDW->timetick + /*MW:OvSatOk*/ 10U;
        if (bpIdx < localDW->timetick) {
          bpIdx = MAX_uint32_T;
        }

        localDW->timetick = bpIdx;
      }
      break;
    }
  }

  // End of Chart: '<S6>/SlopeDelay'

  // Gain: '<S6>/slopeEnable'
  *rty_SimOut = localB->slope_out;
  if (Simulink2S32V_SlopeEst_M->Timing.TaskCounters.TID[1] == 0) {
    // Update for Delay: '<S7>/Delay11'
    localDW->Delay11_DSTATE = rtb_SumA31;

    // Update for Delay: '<S7>/Delay21'
    localDW->Delay21_DSTATE = rtb_Delay11;
    for (rtb_Product4 = 0; rtb_Product4 < 23; rtb_Product4++) {
      // Update for S-Function (sfix_udelay): '<S8>/Tapped Delay1'
      localDW->TappedDelay1_X[rtb_Product4] = localDW->
        TappedDelay1_X[rtb_Product4 + 1];

      // Update for S-Function (sfix_udelay): '<S8>/Tapped Delay2'
      localDW->TappedDelay2_X[rtb_Product4] = localDW->
        TappedDelay2_X[rtb_Product4 + 1];
    }

    // Update for S-Function (sfix_udelay): '<S8>/Tapped Delay1'
    localDW->TappedDelay1_X[23] = rtu_CANRx_o;

    // Update for S-Function (sfix_udelay): '<S8>/Tapped Delay2'
    localDW->TappedDelay2_X[23] = localB->SumB31;

    // Update for UnitDelay: '<S13>/UD'
    //
    //  Block description for '<S13>/UD':
    //
    //   Store in Global RAM

    localDW->UD_DSTATE = localB->Abs;
  }

  // Update for S-Function (sfix_udelay): '<S8>/Tapped Delay'
  for (rtb_Product4 = 0; rtb_Product4 < 23; rtb_Product4++) {
    localDW->TappedDelay_X[rtb_Product4] = localDW->TappedDelay_X[rtb_Product4 +
      1];
  }

  localDW->TappedDelay_X[23] = Product;

  // End of Update for S-Function (sfix_udelay): '<S8>/Tapped Delay'

  // Update for UnitDelay: '<S8>/Unit Delay'
  localDW->UnitDelay_DSTATE = rtb_DotProduct_0;
}

//
// File trailer for generated code.
//
// [EOF]
//
