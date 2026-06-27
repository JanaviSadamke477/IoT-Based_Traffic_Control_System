# System Architecture

The IoT-Based Traffic Control System follows a three-layer architecture.

## 1. Sensing Layer

Components

- IR Sensors
- Sound Sensor

Functions

- Detect vehicle density
- Detect ambulance sirens

---

## 2. Processing Layer

Controllers

### ESP32

- WiFi Communication
- Blynk Integration
- Emergency Detection
- Decision Making

### Arduino UNO

- Traffic Signal Control
- Servo Motor Control
- LED Control

---

## 3. Application Layer

Platform

Blynk IoT Cloud

Functions

- Real-time Monitoring
- Manual Override
- Emergency Notification
- Mobile Dashboard

---

## Communication

ESP32 ↔ Arduino UNO

Protocol

UART Serial Communication
