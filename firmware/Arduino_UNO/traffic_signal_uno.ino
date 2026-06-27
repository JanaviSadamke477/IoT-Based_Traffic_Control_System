#include "pins.h"
#include "traffic_light.h"
#include "servo_control.h"

void setup()
{
    initializePins();
    initializeServo();
}

void loop()
{
    normalTrafficCycle();

    checkLane1();

    checkLane2();
}
