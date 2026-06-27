#ifndef TRAFFIC_LIGHT_H
#define TRAFFIC_LIGHT_H

#include "pins.h"
#include "servo_control.h"

# Normal Cycle
void normalTrafficCycle()
{
    digitalWrite(LED_R,HIGH);
    digitalWrite(LED2_G,HIGH);

    openLane1();
    openLane2();

    delay(11000);

    digitalWrite(LED_R,LOW);
    digitalWrite(LED2_G,LOW);

    delay(500);

    digitalWrite(LED_Y,HIGH);
    digitalWrite(LED2_Y,HIGH);

    closeLane1();
    closeLane2();

    delay(2000);

    digitalWrite(LED_Y,LOW);
    digitalWrite(LED2_Y,LOW);

    delay(500);

    digitalWrite(LED_G,HIGH);
    digitalWrite(LED2_R,HIGH);

    openLane1();

    delay(11000);

    digitalWrite(LED_G,LOW);
    digitalWrite(LED2_R,LOW);

    delay(500);
}

#Lane Detection

void checkLane1()
{
    if(digitalRead(IR1))
    {
        digitalWrite(LED_G,HIGH);
        digitalWrite(LED2_Y,HIGH);

        delay(2000);

        digitalWrite(LED2_Y,LOW);
        digitalWrite(LED2_R,HIGH);

        delay(7000);

        digitalWrite(LED_G,LOW);
        digitalWrite(LED2_R,LOW);
    }
}
void checkLane2()
{
    if(digitalRead(IR2))
    {
        digitalWrite(LED2_G,HIGH);
        digitalWrite(LED_Y,HIGH);

        delay(2000);

        digitalWrite(LED_Y,LOW);
        digitalWrite(LED_R,HIGH);

        delay(7000);

        digitalWrite(LED2_G,LOW);
        digitalWrite(LED_R,LOW);
    }
}
#endif
