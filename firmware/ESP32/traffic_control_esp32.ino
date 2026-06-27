#include "config.h"

void setup()
{
    Serial.begin(115200);

    setupPins();

    connectWiFi();

    connectBlynk();

    initializeSystem();
}

void loop()
{
    Blynk.run();

    timer.run();

    detectSiren();

    checkEmergency();

    updateDashboard();
}
