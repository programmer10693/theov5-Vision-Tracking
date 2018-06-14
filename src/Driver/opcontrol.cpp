#include "main.hpp"
#include "DriverBaseControl.hpp"
#include "DriverArmP.hpp"
#include "DriverScreenDrawing.hpp"
#include "DriverVisionTracking.hpp"





void opcontrol() {

Task driverBaseTask(driverBaseControl, NULL, TASK_PRIORITY_DEFAULT, TASK_STACK_DEPTH_DEFAULT, "DriverBaseControl");
Task driverArmPTask(armP, NULL, TASK_PRIORITY_DEFAULT, TASK_STACK_DEPTH_DEFAULT, "ArmP");
Task driverMonitorVisionTask(monitorVisionTask, NULL, TASK_PRIORITY_DEFAULT, TASK_STACK_DEPTH_DEFAULT, "VisionPolling");
//Task driverVisionDrawingTask(screenDrawTask, NULL, TASK_PRIORITY_DEFAULT, TASK_STACK_DEPTH_DEFAULT, "VisionDrawing");

  while (true)
  {
    delay(100);


  }
}
