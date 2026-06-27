#ifndef SERVO_CONTROL_H
#define SERVO_CONTROL_H

#include "pins.h"

void initializeServo()
{
    s1.attach(SERVO1);
    s2.attach(SERVO2);

    s1.write(0);
    s2.write(0);
}

void openLane1()
{
    s1.write(0);
}

void closeLane1()
{
    s1.write(60);
}

void openLane2()
{
    s2.write(0);
}

void closeLane2()
{
    s2.write(60);
}

#endif
