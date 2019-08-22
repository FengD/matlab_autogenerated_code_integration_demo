
#include <stddef.h>
#include <stdio.h>
#include "Simulink2S32V_SlopeEst.h"
#include "rtwtypes.h"

#define CAN1_TX_IDLIST_SIZE 1
#define CAN1_RX_IDLIST_SIZE 2

long can1TxIdList[CAN1_TX_IDLIST_SIZE] = {292};
long can1RxIdList[CAN1_RX_IDLIST_SIZE] = {842, 844};

static Simulink2S32V_demoModelClass Simulink2S32V_SlopeEst_Obj;// Instance of model class

void oneStepFunc () {
  static boolean_T OverrunFlag = false;

  // Disable interrupts here

  // Check for overrun
  if (OverrunFlag) {
    rtmSetErrorStatus(Simulink2S32V_SlopeEst_Obj.getRTM(), "Overrun");
    return;
  }

  OverrunFlag = true;

  // Save FPU context here (if necessary)
  // Re-enable timer or interrupt here
  // Set model inputs here

  // Step the model for base rate
  Simulink2S32V_SlopeEst_Obj.step();

  // Get model outputs here

  // Indicate task complete
  OverrunFlag = false;

  // Disable interrupts here
  // Restore FPU context here (if necessary)
  // Enable interrupts here
}

void initializeFunc () {
  Simulink2S32V_SlopeEst_Obj.initialize();
}

void ternimateFunc () {
    Simulink2S32V_SlopeEst_Obj.terminate();
}

int main() {
  init();
  createCanMsgInMemByList(can1TxIdList, CAN1_TX_IDLIST_SIZE);
  createCanMsgInMemByList(can1RxIdList, CAN1_RX_IDLIST_SIZE);

  createAndJoinCanRxThread(1, can1RxIdList, CAN1_RX_IDLIST_SIZE);
  createAndJoinCanTxThread(1, can1TxIdList, CAN1_TX_IDLIST_SIZE, 10000);

  createAndJoinSimulinkThread(&oneStepFunc, &initializeFunc, &ternimateFunc, 10000);
  return 0;
}
