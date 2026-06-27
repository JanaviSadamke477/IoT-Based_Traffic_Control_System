#ifndef CONFIG_H
#define CONFIG_H

#include <WiFi.h>
#include <BlynkSimpleEsp32.h>

#include "secrets.h"

#define SOUND_PIN 4

#define WIFI_LED 2

#define BAUD_RATE 115200

#define EMERGENCY_CLEAR_TIME 30000

#define DETECTION_COOLDOWN 3000

#define EVENT_COOLDOWN 61000

BlynkTimer timer;

void setupPins();

void connectWiFi();

void connectBlynk();

void initializeSystem();

void detectSiren();

void checkEmergency();

void updateDashboard();

#endif
