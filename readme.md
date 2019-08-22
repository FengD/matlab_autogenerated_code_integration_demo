## The integration of the Matlab-Simulink auto-generated code(C/C++) on linux demo

##  Description of the project

`The algorithm of the example is used to calculate the slope of the road`.

* All the files in the include/simulink_include are generated automatically.
* All the files in the src, execpt main.cpp are generated automatically.

The code below shows the change you need to do in `Simulink2S32V_SlopeEst.cpp`.
``` c++
// the step function
void Simulink2S32V_demoModelClass::step()
{
  int8_T slopesign;
  if ((&Simulink2S32V_SlopeEst_M)->Timing.TaskCounters.TID[1] == 0) {
    // add this below
    Simulink2S32V_SlopeE_CAN_Unpack(getSimulinkCanMsgByIdInMem(844), getSimulinkCanMsgByIdInMem(842),
      &Simulink2S32V_SlopeEst_B.CANUnpack_o7,
      &Simulink2S32V_SlopeEst_B.CANUnpack_o5,
      &Simulink2S32V_SlopeEst_B.CANUnpack_o3,
      &Simulink2S32V_SlopeEst_B.CANUnpack_o1,
      &Simulink2S32V_SlopeEst_B.CANUnpack_o3_o);
  }

  Simulink2S32V_SlopeEst_Sim_Main(&Simulink2S32V_SlopeEst_M,
    Simulink2S32V_SlopeEst_B.CANUnpack_o7, Simulink2S32V_SlopeEst_B.CANUnpack_o1,
    Simulink2S32V_SlopeEst_B.CANUnpack_o3_o,
    Simulink2S32V_SlopeEst_B.CANUnpack_o5, &Simulink2S32V_SlopeEst_B.slopeEnable,
    &slopesign, &Simulink2S32V_SlopeEst_B.Sim_Main,
    &Simulink2S32V_SlopeEst_DW.Sim_Main);

  Simulink2S32V_SlopeEst_CAN_Pack(Simulink2S32V_SlopeEst_B.slopeEnable);
  // add this below
  updateMemBySimulinkCanMsg(&canTx292);
  
  rate_scheduler((&Simulink2S32V_SlopeEst_M));
}

```
