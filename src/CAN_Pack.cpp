//
// File: CAN_Pack.cpp
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
#include "CAN_Pack.h"

// Include model header file for global data
#include "Simulink2S32V_SlopeEst.h"
#include "Simulink2S32V_SlopeEst_private.h"

// Output and update for atomic system: '<Root>/CAN_Pack'
void Simulink2S32V_SlopeEst_CAN_Pack(real_T rtu_SimOut)
{
  // S-Function (scanpack): '<S1>/CAN Pack'
  // S-Function (scanpack): '<S1>/CAN Pack'
  canTx292.ID = 292U;
  canTx292.Length = 4U;
  canTx292.Extended = 0U;
  canTx292.Remote = 0;
  canTx292.Data[0] = 0;
  canTx292.Data[1] = 0;
  canTx292.Data[2] = 0;
  canTx292.Data[3] = 0;
  canTx292.Data[4] = 0;
  canTx292.Data[5] = 0;
  canTx292.Data[6] = 0;
  canTx292.Data[7] = 0;

  {
    // --------------- START Packing signal 0 ------------------
    //   startBit                = 0
    //   length                  = 32
    //   desiredSignalByteLayout = LITTLEENDIAN
    //   dataType                = UNSIGNED
    //   factor                  = 0.01
    //   offset                  = -20.0
    //   minimum                 = 0.0
    //   maximum                 = 0.0
    //  -----------------------------------------------------------------------
    {
      {
        real64_T outValue = 0;

        {
          real64_T result = rtu_SimOut;

          // full scaling operation
          result = (result - -20.0) / 0.01;
          outValue = result;
        }

        {
          {
            uint32_T packedValue;
            if (outValue > (real64_T)(4294967295U)) {
              packedValue = (uint32_T) 4294967295U;
            } else if (outValue < (real64_T)(0)) {
              packedValue = (uint32_T) 0;
            } else {
              packedValue = (uint32_T) (outValue);
            }

            {
              {
                canTx292.Data[0] = canTx292.Data[0] | (uint8_T)((uint8_T)
                  ((uint32_T)(packedValue & (uint32_T)(((uint32_T)(1)) << 0)) >>
                   0)<<0);
              }

              {
                canTx292.Data[0] = canTx292.Data[0] | (uint8_T)((uint8_T)
                  ((uint32_T)(packedValue & (uint32_T)(((uint32_T)(1)) << 1)) >>
                   1)<<1);
              }

              {
                canTx292.Data[0] = canTx292.Data[0] | (uint8_T)((uint8_T)
                  ((uint32_T)(packedValue & (uint32_T)(((uint32_T)(1)) << 2)) >>
                   2)<<2);
              }

              {
                canTx292.Data[0] = canTx292.Data[0] | (uint8_T)((uint8_T)
                  ((uint32_T)(packedValue & (uint32_T)(((uint32_T)(1)) << 3)) >>
                   3)<<3);
              }

              {
                canTx292.Data[0] = canTx292.Data[0] | (uint8_T)((uint8_T)
                  ((uint32_T)(packedValue & (uint32_T)(((uint32_T)(1)) << 4)) >>
                   4)<<4);
              }

              {
                canTx292.Data[0] = canTx292.Data[0] | (uint8_T)((uint8_T)
                  ((uint32_T)(packedValue & (uint32_T)(((uint32_T)(1)) << 5)) >>
                   5)<<5);
              }

              {
                canTx292.Data[0] = canTx292.Data[0] | (uint8_T)((uint8_T)
                  ((uint32_T)(packedValue & (uint32_T)(((uint32_T)(1)) << 6)) >>
                   6)<<6);
              }

              {
                canTx292.Data[0] = canTx292.Data[0] | (uint8_T)((uint8_T)
                  ((uint32_T)(packedValue & (uint32_T)(((uint32_T)(1)) << 7)) >>
                   7)<<7);
              }

              {
                canTx292.Data[1] = canTx292.Data[1] | (uint8_T)((uint8_T)
                  ((uint32_T)(packedValue & (uint32_T)(((uint32_T)(1)) << 8)) >>
                   8)<<0);
              }

              {
                canTx292.Data[1] = canTx292.Data[1] | (uint8_T)((uint8_T)
                  ((uint32_T)(packedValue & (uint32_T)(((uint32_T)(1)) << 9)) >>
                   9)<<1);
              }

              {
                canTx292.Data[1] = canTx292.Data[1] | (uint8_T)((uint8_T)
                  ((uint32_T)(packedValue & (uint32_T)(((uint32_T)(1)) << 10)) >>
                   10)<<2);
              }

              {
                canTx292.Data[1] = canTx292.Data[1] | (uint8_T)((uint8_T)
                  ((uint32_T)(packedValue & (uint32_T)(((uint32_T)(1)) << 11)) >>
                   11)<<3);
              }

              {
                canTx292.Data[1] = canTx292.Data[1] | (uint8_T)((uint8_T)
                  ((uint32_T)(packedValue & (uint32_T)(((uint32_T)(1)) << 12)) >>
                   12)<<4);
              }

              {
                canTx292.Data[1] = canTx292.Data[1] | (uint8_T)((uint8_T)
                  ((uint32_T)(packedValue & (uint32_T)(((uint32_T)(1)) << 13)) >>
                   13)<<5);
              }

              {
                canTx292.Data[1] = canTx292.Data[1] | (uint8_T)((uint8_T)
                  ((uint32_T)(packedValue & (uint32_T)(((uint32_T)(1)) << 14)) >>
                   14)<<6);
              }

              {
                canTx292.Data[1] = canTx292.Data[1] | (uint8_T)((uint8_T)
                  ((uint32_T)(packedValue & (uint32_T)(((uint32_T)(1)) << 15)) >>
                   15)<<7);
              }

              {
                canTx292.Data[2] = canTx292.Data[2] | (uint8_T)((uint8_T)
                  ((uint32_T)(packedValue & (uint32_T)(((uint32_T)(1)) << 16)) >>
                   16)<<0);
              }

              {
                canTx292.Data[2] = canTx292.Data[2] | (uint8_T)((uint8_T)
                  ((uint32_T)(packedValue & (uint32_T)(((uint32_T)(1)) << 17)) >>
                   17)<<1);
              }

              {
                canTx292.Data[2] = canTx292.Data[2] | (uint8_T)((uint8_T)
                  ((uint32_T)(packedValue & (uint32_T)(((uint32_T)(1)) << 18)) >>
                   18)<<2);
              }

              {
                canTx292.Data[2] = canTx292.Data[2] | (uint8_T)((uint8_T)
                  ((uint32_T)(packedValue & (uint32_T)(((uint32_T)(1)) << 19)) >>
                   19)<<3);
              }

              {
                canTx292.Data[2] = canTx292.Data[2] | (uint8_T)((uint8_T)
                  ((uint32_T)(packedValue & (uint32_T)(((uint32_T)(1)) << 20)) >>
                   20)<<4);
              }

              {
                canTx292.Data[2] = canTx292.Data[2] | (uint8_T)((uint8_T)
                  ((uint32_T)(packedValue & (uint32_T)(((uint32_T)(1)) << 21)) >>
                   21)<<5);
              }

              {
                canTx292.Data[2] = canTx292.Data[2] | (uint8_T)((uint8_T)
                  ((uint32_T)(packedValue & (uint32_T)(((uint32_T)(1)) << 22)) >>
                   22)<<6);
              }

              {
                canTx292.Data[2] = canTx292.Data[2] | (uint8_T)((uint8_T)
                  ((uint32_T)(packedValue & (uint32_T)(((uint32_T)(1)) << 23)) >>
                   23)<<7);
              }

              {
                canTx292.Data[3] = canTx292.Data[3] | (uint8_T)((uint8_T)
                  ((uint32_T)(packedValue & (uint32_T)(((uint32_T)(1)) << 24)) >>
                   24)<<0);
              }

              {
                canTx292.Data[3] = canTx292.Data[3] | (uint8_T)((uint8_T)
                  ((uint32_T)(packedValue & (uint32_T)(((uint32_T)(1)) << 25)) >>
                   25)<<1);
              }

              {
                canTx292.Data[3] = canTx292.Data[3] | (uint8_T)((uint8_T)
                  ((uint32_T)(packedValue & (uint32_T)(((uint32_T)(1)) << 26)) >>
                   26)<<2);
              }

              {
                canTx292.Data[3] = canTx292.Data[3] | (uint8_T)((uint8_T)
                  ((uint32_T)(packedValue & (uint32_T)(((uint32_T)(1)) << 27)) >>
                   27)<<3);
              }

              {
                canTx292.Data[3] = canTx292.Data[3] | (uint8_T)((uint8_T)
                  ((uint32_T)(packedValue & (uint32_T)(((uint32_T)(1)) << 28)) >>
                   28)<<4);
              }

              {
                canTx292.Data[3] = canTx292.Data[3] | (uint8_T)((uint8_T)
                  ((uint32_T)(packedValue & (uint32_T)(((uint32_T)(1)) << 29)) >>
                   29)<<5);
              }

              {
                canTx292.Data[3] = canTx292.Data[3] | (uint8_T)((uint8_T)
                  ((uint32_T)(packedValue & (uint32_T)(((uint32_T)(1)) << 30)) >>
                   30)<<6);
              }

              {
                canTx292.Data[3] = canTx292.Data[3] | (uint8_T)((uint8_T)
                  ((uint32_T)(packedValue & (uint32_T)(((uint32_T)(1)) << 31)) >>
                   31)<<7);
              }
            }
          }
        }
      }
    }
  }
}

//
// File trailer for generated code.
//
// [EOF]
//
