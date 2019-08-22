//
// File: CAN_Unpack.cpp
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
#include "CAN_Unpack.h"

// Include model header file for global data
#include "Simulink2S32V_SlopeEst.h"
#include "Simulink2S32V_SlopeEst_private.h"

// Start for atomic system: '<Root>/CAN_Unpack'
void Simulink2S32V__CAN_Unpack_Start(void)
{
  // Start for S-Function (scanunpack): '<S4>/CAN Unpack'

  //-----------S-Function Block: <S4>/CAN Unpack -----------------

  // Start for S-Function (scanunpack): '<S5>/CAN Unpack'

  //-----------S-Function Block: <S5>/CAN Unpack -----------------
}

// Output and update for atomic system: '<Root>/CAN_Unpack'
void Simulink2S32V_SlopeE_CAN_Unpack(CAN_MESSAGE rtu_CANRx_844, CAN_MESSAGE
  rtu_CANRx_842, real_T *rty_CANOut, real_T *rty_CANOut_j, real_T *rty_CANOut_b,
  real_T *rty_CANOut_m, real_T *rty_CANOut_i)
{
  // S-Function (scanunpack): '<S4>/CAN Unpack'
  {
    // S-Function (scanunpack): '<S4>/CAN Unpack'
    if ((8 == rtu_CANRx_844.Length) && (rtu_CANRx_844.ID != INVALID_CAN_ID) ) {
      if ((844U == rtu_CANRx_844.ID) && (0U == rtu_CANRx_844.Extended) ) {
        {
          // --------------- START Unpacking signal 0 ------------------
          //   startBit                = 3
          //   length                  = 2
          //   desiredSignalByteLayout = BIGENDIAN
          //   dataType                = UNSIGNED
          //   factor                  = 1.0
          //   offset                  = 0.0
          //  -----------------------------------------------------------------------
          //
          //  Signal is not connected or connected to terminator.
          //  No unpacking code generated.


          // --------------- START Unpacking signal 1 ------------------
          //   startBit                = 8
          //   length                  = 11
          //   desiredSignalByteLayout = BIGENDIAN
          //   dataType                = UNSIGNED
          //   factor                  = 1.0
          //   offset                  = 0.0
          //  -----------------------------------------------------------------------
          //
          //  Signal is not connected or connected to terminator.
          //  No unpacking code generated.


          // --------------- START Unpacking signal 2 ------------------
          //   startBit                = 56
          //   length                  = 12
          //   desiredSignalByteLayout = BIGENDIAN
          //   dataType                = SIGNED
          //   factor                  = 0.015625
          //   offset                  = 0.0
          //  -----------------------------------------------------------------------
          {
            {
              real64_T outValue = 0;

              {
                {
                  int16_T unpackedValue = 0;

                  {
                    uint16_T tempValue = (uint16_T) (0);

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtu_CANRx_844.Data[7]) & (uint16_T)( (uint16_T) (1)<<
                        0)) >> 0)<<0);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtu_CANRx_844.Data[7]) & (uint16_T)( (uint16_T) (1)<<
                        1)) >> 1)<<1);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtu_CANRx_844.Data[7]) & (uint16_T)( (uint16_T) (1)<<
                        2)) >> 2)<<2);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtu_CANRx_844.Data[7]) & (uint16_T)( (uint16_T) (1)<<
                        3)) >> 3)<<3);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtu_CANRx_844.Data[7]) & (uint16_T)( (uint16_T) (1)<<
                        4)) >> 4)<<4);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtu_CANRx_844.Data[7]) & (uint16_T)( (uint16_T) (1)<<
                        5)) >> 5)<<5);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtu_CANRx_844.Data[7]) & (uint16_T)( (uint16_T) (1)<<
                        6)) >> 6)<<6);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtu_CANRx_844.Data[7]) & (uint16_T)( (uint16_T) (1)<<
                        7)) >> 7)<<7);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtu_CANRx_844.Data[6]) & (uint16_T)( (uint16_T) (1)<<
                        0)) >> 0)<<8);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtu_CANRx_844.Data[6]) & (uint16_T)( (uint16_T) (1)<<
                        1)) >> 1)<<9);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtu_CANRx_844.Data[6]) & (uint16_T)( (uint16_T) (1)<<
                        2)) >> 2)<<10);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtu_CANRx_844.Data[6]) & (uint16_T)( (uint16_T) (1)<<
                        3)) >> 3)<<11);
                    }

                    unpackedValue = (int16_T) tempValue;
                  }

                  {
                    uint16_T tempValue = (uint16_T) unpackedValue;
                    uint16_T mask = (uint16_T)(1);
                    uint16_T bitValue = tempValue & (uint16_T)(mask << (12-1));
                    if (bitValue != 0U) {
                      {
                        tempValue = tempValue | (uint16_T)(mask << (16-0-1));
                      }

                      {
                        tempValue = tempValue | (uint16_T)(mask << (16-1-1));
                      }

                      {
                        tempValue = tempValue | (uint16_T)(mask << (16-2-1));
                      }

                      {
                        tempValue = tempValue | (uint16_T)(mask << (16-3-1));
                      }

                      unpackedValue = (int16_T) tempValue;
                    }
                  }

                  outValue = (real64_T) (unpackedValue);
                }
              }

              {
                real64_T result = (real64_T) outValue;
                result = result * 0.015625;
                (*rty_CANOut_b) = result;
              }
            }
          }

          // --------------- START Unpacking signal 3 ------------------
          //   startBit                = 7
          //   length                  = 1
          //   desiredSignalByteLayout = BIGENDIAN
          //   dataType                = UNSIGNED
          //   factor                  = 1.0
          //   offset                  = 0.0
          //  -----------------------------------------------------------------------
          //
          //  Signal is not connected or connected to terminator.
          //  No unpacking code generated.


          // --------------- START Unpacking signal 4 ------------------
          //   startBit                = 40
          //   length                  = 10
          //   desiredSignalByteLayout = BIGENDIAN
          //   dataType                = SIGNED
          //   factor                  = 0.03
          //   offset                  = 0.0
          //  -----------------------------------------------------------------------
          {
            {
              real64_T outValue = 0;

              {
                {
                  int16_T unpackedValue = 0;

                  {
                    uint16_T tempValue = (uint16_T) (0);

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtu_CANRx_844.Data[5]) & (uint16_T)( (uint16_T) (1)<<
                        0)) >> 0)<<0);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtu_CANRx_844.Data[5]) & (uint16_T)( (uint16_T) (1)<<
                        1)) >> 1)<<1);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtu_CANRx_844.Data[5]) & (uint16_T)( (uint16_T) (1)<<
                        2)) >> 2)<<2);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtu_CANRx_844.Data[5]) & (uint16_T)( (uint16_T) (1)<<
                        3)) >> 3)<<3);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtu_CANRx_844.Data[5]) & (uint16_T)( (uint16_T) (1)<<
                        4)) >> 4)<<4);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtu_CANRx_844.Data[5]) & (uint16_T)( (uint16_T) (1)<<
                        5)) >> 5)<<5);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtu_CANRx_844.Data[5]) & (uint16_T)( (uint16_T) (1)<<
                        6)) >> 6)<<6);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtu_CANRx_844.Data[5]) & (uint16_T)( (uint16_T) (1)<<
                        7)) >> 7)<<7);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtu_CANRx_844.Data[4]) & (uint16_T)( (uint16_T) (1)<<
                        0)) >> 0)<<8);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtu_CANRx_844.Data[4]) & (uint16_T)( (uint16_T) (1)<<
                        1)) >> 1)<<9);
                    }

                    unpackedValue = (int16_T) tempValue;
                  }

                  {
                    uint16_T tempValue = (uint16_T) unpackedValue;
                    uint16_T mask = (uint16_T)(1);
                    uint16_T bitValue = tempValue & (uint16_T)(mask << (10-1));
                    if (bitValue != 0U) {
                      {
                        tempValue = tempValue | (uint16_T)(mask << (16-0-1));
                      }

                      {
                        tempValue = tempValue | (uint16_T)(mask << (16-1-1));
                      }

                      {
                        tempValue = tempValue | (uint16_T)(mask << (16-2-1));
                      }

                      {
                        tempValue = tempValue | (uint16_T)(mask << (16-3-1));
                      }

                      {
                        tempValue = tempValue | (uint16_T)(mask << (16-4-1));
                      }

                      {
                        tempValue = tempValue | (uint16_T)(mask << (16-5-1));
                      }

                      unpackedValue = (int16_T) tempValue;
                    }
                  }

                  outValue = (real64_T) (unpackedValue);
                }
              }

              {
                real64_T result = (real64_T) outValue;
                result = result * 0.03;
                (*rty_CANOut_j) = result;
              }
            }
          }

          // --------------- START Unpacking signal 5 ------------------
          //   startBit                = 6
          //   length                  = 1
          //   desiredSignalByteLayout = BIGENDIAN
          //   dataType                = UNSIGNED
          //   factor                  = 1.0
          //   offset                  = 0.0
          //  -----------------------------------------------------------------------
          //
          //  Signal is not connected or connected to terminator.
          //  No unpacking code generated.


          // --------------- START Unpacking signal 6 ------------------
          //   startBit                = 24
          //   length                  = 12
          //   desiredSignalByteLayout = BIGENDIAN
          //   dataType                = SIGNED
          //   factor                  = 0.0625
          //   offset                  = 0.0
          //  -----------------------------------------------------------------------
          {
            {
              real64_T outValue = 0;

              {
                {
                  int16_T unpackedValue = 0;

                  {
                    uint16_T tempValue = (uint16_T) (0);

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtu_CANRx_844.Data[3]) & (uint16_T)( (uint16_T) (1)<<
                        0)) >> 0)<<0);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtu_CANRx_844.Data[3]) & (uint16_T)( (uint16_T) (1)<<
                        1)) >> 1)<<1);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtu_CANRx_844.Data[3]) & (uint16_T)( (uint16_T) (1)<<
                        2)) >> 2)<<2);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtu_CANRx_844.Data[3]) & (uint16_T)( (uint16_T) (1)<<
                        3)) >> 3)<<3);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtu_CANRx_844.Data[3]) & (uint16_T)( (uint16_T) (1)<<
                        4)) >> 4)<<4);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtu_CANRx_844.Data[3]) & (uint16_T)( (uint16_T) (1)<<
                        5)) >> 5)<<5);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtu_CANRx_844.Data[3]) & (uint16_T)( (uint16_T) (1)<<
                        6)) >> 6)<<6);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtu_CANRx_844.Data[3]) & (uint16_T)( (uint16_T) (1)<<
                        7)) >> 7)<<7);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtu_CANRx_844.Data[2]) & (uint16_T)( (uint16_T) (1)<<
                        0)) >> 0)<<8);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtu_CANRx_844.Data[2]) & (uint16_T)( (uint16_T) (1)<<
                        1)) >> 1)<<9);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtu_CANRx_844.Data[2]) & (uint16_T)( (uint16_T) (1)<<
                        2)) >> 2)<<10);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtu_CANRx_844.Data[2]) & (uint16_T)( (uint16_T) (1)<<
                        3)) >> 3)<<11);
                    }

                    unpackedValue = (int16_T) tempValue;
                  }

                  {
                    uint16_T tempValue = (uint16_T) unpackedValue;
                    uint16_T mask = (uint16_T)(1);
                    uint16_T bitValue = tempValue & (uint16_T)(mask << (12-1));
                    if (bitValue != 0U) {
                      {
                        tempValue = tempValue | (uint16_T)(mask << (16-0-1));
                      }

                      {
                        tempValue = tempValue | (uint16_T)(mask << (16-1-1));
                      }

                      {
                        tempValue = tempValue | (uint16_T)(mask << (16-2-1));
                      }

                      {
                        tempValue = tempValue | (uint16_T)(mask << (16-3-1));
                      }

                      unpackedValue = (int16_T) tempValue;
                    }
                  }

                  outValue = (real64_T) (unpackedValue);
                }
              }

              {
                real64_T result = (real64_T) outValue;
                result = result * 0.0625;
                (*rty_CANOut) = result;
              }
            }
          }

          // --------------- START Unpacking signal 7 ------------------
          //   startBit                = 5
          //   length                  = 1
          //   desiredSignalByteLayout = BIGENDIAN
          //   dataType                = UNSIGNED
          //   factor                  = 1.0
          //   offset                  = 0.0
          //  -----------------------------------------------------------------------
          //
          //  Signal is not connected or connected to terminator.
          //  No unpacking code generated.

        }
      }
    }
  }

  // S-Function (scanunpack): '<S5>/CAN Unpack'
  {
    // S-Function (scanunpack): '<S5>/CAN Unpack'
    if ((8 == rtu_CANRx_842.Length) && (rtu_CANRx_842.ID != INVALID_CAN_ID) ) {
      if ((842U == rtu_CANRx_842.ID) && (0U == rtu_CANRx_842.Extended) ) {
        {
          // --------------- START Unpacking signal 0 ------------------
          //   startBit                = 8
          //   length                  = 14
          //   desiredSignalByteLayout = BIGENDIAN
          //   dataType                = UNSIGNED
          //   factor                  = 0.03125
          //   offset                  = 0.0
          //  -----------------------------------------------------------------------
          {
            {
              real64_T outValue = 0;

              {
                {
                  uint16_T unpackedValue = 0;

                  {
                    uint16_T tempValue = (uint16_T) (0);

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtu_CANRx_842.Data[1]) & (uint16_T)( (uint16_T) (1)<<
                        0)) >> 0)<<0);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtu_CANRx_842.Data[1]) & (uint16_T)( (uint16_T) (1)<<
                        1)) >> 1)<<1);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtu_CANRx_842.Data[1]) & (uint16_T)( (uint16_T) (1)<<
                        2)) >> 2)<<2);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtu_CANRx_842.Data[1]) & (uint16_T)( (uint16_T) (1)<<
                        3)) >> 3)<<3);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtu_CANRx_842.Data[1]) & (uint16_T)( (uint16_T) (1)<<
                        4)) >> 4)<<4);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtu_CANRx_842.Data[1]) & (uint16_T)( (uint16_T) (1)<<
                        5)) >> 5)<<5);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtu_CANRx_842.Data[1]) & (uint16_T)( (uint16_T) (1)<<
                        6)) >> 6)<<6);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtu_CANRx_842.Data[1]) & (uint16_T)( (uint16_T) (1)<<
                        7)) >> 7)<<7);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtu_CANRx_842.Data[0]) & (uint16_T)( (uint16_T) (1)<<
                        0)) >> 0)<<8);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtu_CANRx_842.Data[0]) & (uint16_T)( (uint16_T) (1)<<
                        1)) >> 1)<<9);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtu_CANRx_842.Data[0]) & (uint16_T)( (uint16_T) (1)<<
                        2)) >> 2)<<10);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtu_CANRx_842.Data[0]) & (uint16_T)( (uint16_T) (1)<<
                        3)) >> 3)<<11);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtu_CANRx_842.Data[0]) & (uint16_T)( (uint16_T) (1)<<
                        4)) >> 4)<<12);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtu_CANRx_842.Data[0]) & (uint16_T)( (uint16_T) (1)<<
                        5)) >> 5)<<13);
                    }

                    unpackedValue = tempValue;
                  }

                  outValue = (real64_T) (unpackedValue);
                }
              }

              {
                real64_T result = (real64_T) outValue;
                result = result * 0.03125;
                (*rty_CANOut_m) = result;
              }
            }
          }

          // --------------- START Unpacking signal 1 ------------------
          //   startBit                = 6
          //   length                  = 1
          //   desiredSignalByteLayout = BIGENDIAN
          //   dataType                = UNSIGNED
          //   factor                  = 1.0
          //   offset                  = 0.0
          //  -----------------------------------------------------------------------
          //
          //  Signal is not connected or connected to terminator.
          //  No unpacking code generated.


          // --------------- START Unpacking signal 2 ------------------
          //   startBit                = 24
          //   length                  = 14
          //   desiredSignalByteLayout = BIGENDIAN
          //   dataType                = UNSIGNED
          //   factor                  = 0.03125
          //   offset                  = 0.0
          //  -----------------------------------------------------------------------
          {
            {
              real64_T outValue = 0;

              {
                {
                  uint16_T unpackedValue = 0;

                  {
                    uint16_T tempValue = (uint16_T) (0);

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtu_CANRx_842.Data[3]) & (uint16_T)( (uint16_T) (1)<<
                        0)) >> 0)<<0);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtu_CANRx_842.Data[3]) & (uint16_T)( (uint16_T) (1)<<
                        1)) >> 1)<<1);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtu_CANRx_842.Data[3]) & (uint16_T)( (uint16_T) (1)<<
                        2)) >> 2)<<2);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtu_CANRx_842.Data[3]) & (uint16_T)( (uint16_T) (1)<<
                        3)) >> 3)<<3);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtu_CANRx_842.Data[3]) & (uint16_T)( (uint16_T) (1)<<
                        4)) >> 4)<<4);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtu_CANRx_842.Data[3]) & (uint16_T)( (uint16_T) (1)<<
                        5)) >> 5)<<5);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtu_CANRx_842.Data[3]) & (uint16_T)( (uint16_T) (1)<<
                        6)) >> 6)<<6);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtu_CANRx_842.Data[3]) & (uint16_T)( (uint16_T) (1)<<
                        7)) >> 7)<<7);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtu_CANRx_842.Data[2]) & (uint16_T)( (uint16_T) (1)<<
                        0)) >> 0)<<8);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtu_CANRx_842.Data[2]) & (uint16_T)( (uint16_T) (1)<<
                        1)) >> 1)<<9);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtu_CANRx_842.Data[2]) & (uint16_T)( (uint16_T) (1)<<
                        2)) >> 2)<<10);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtu_CANRx_842.Data[2]) & (uint16_T)( (uint16_T) (1)<<
                        3)) >> 3)<<11);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtu_CANRx_842.Data[2]) & (uint16_T)( (uint16_T) (1)<<
                        4)) >> 4)<<12);
                    }

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        ((rtu_CANRx_842.Data[2]) & (uint16_T)( (uint16_T) (1)<<
                        5)) >> 5)<<13);
                    }

                    unpackedValue = tempValue;
                  }

                  outValue = (real64_T) (unpackedValue);
                }
              }

              {
                real64_T result = (real64_T) outValue;
                result = result * 0.03125;
                (*rty_CANOut_i) = result;
              }
            }
          }

          // --------------- START Unpacking signal 3 ------------------
          //   startBit                = 22
          //   length                  = 1
          //   desiredSignalByteLayout = BIGENDIAN
          //   dataType                = UNSIGNED
          //   factor                  = 1.0
          //   offset                  = 0.0
          //  -----------------------------------------------------------------------
          //
          //  Signal is not connected or connected to terminator.
          //  No unpacking code generated.


          // --------------- START Unpacking signal 4 ------------------
          //   startBit                = 32
          //   length                  = 3
          //   desiredSignalByteLayout = BIGENDIAN
          //   dataType                = UNSIGNED
          //   factor                  = 1.0
          //   offset                  = 0.0
          //  -----------------------------------------------------------------------
          //
          //  Signal is not connected or connected to terminator.
          //  No unpacking code generated.


          // --------------- START Unpacking signal 5 ------------------
          //   startBit                = 35
          //   length                  = 3
          //   desiredSignalByteLayout = BIGENDIAN
          //   dataType                = UNSIGNED
          //   factor                  = 1.0
          //   offset                  = 0.0
          //  -----------------------------------------------------------------------
          //
          //  Signal is not connected or connected to terminator.
          //  No unpacking code generated.

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
