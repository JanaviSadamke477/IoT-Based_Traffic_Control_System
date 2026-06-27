#ifndef PINS_H
#define PINS_H

#include <Arduino.h>
#include <Servo.h>

#define LED_R   2
#define LED_G   3
#define LED_Y   4

#define LED2_R  5
#define LED2_Y  6
#define LED2_G  7

#define IR1     8
#define IR2     9

#define SERVO1 10
#define SERVO2 11

Servo s1;
Servo s2;

void initializePins();

#endif
