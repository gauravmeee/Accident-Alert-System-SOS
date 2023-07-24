# Accident-Alert-System-SOS-
**Project 1: Accident Alert System (SOS)**

This Project is comprise of 2 single individual sub projects.

**Project 1: Accident Alert System (SOS)**

**Introduction:**
The Accident Alert System is a cost-effective solution designed to detect accidents and send immediate alerts to emergency services and the victim's relatives/friends via SMS. The system uses Arduino UNO, MPU6050 (Six-Axis Gyro + Accelerometer), GPS (NEO6M), and GSM (SIM800L) modules.
www.teamraftaar.com

**Description:**
The system continuously monitors the vehicle's movements using the MPU6050 sensor, which detects sudden changes in acceleration and angular rotation. When an accident occurs, the Arduino triggers and sends the vehicle's current location (obtained from the GPS module) to the GSM module. The GSM module then sends an alert SMS to emergency services and the victim's contacts, requesting immediate help. The system uses LED indicators and a buzzer to display its status.

**Working:**
1. Continuous monitoring of vehicle movements using the MPU6050 sensor.
2. If an accident is detected (sudden changes in acceleration/rotation), Arduino triggers.
3. GPS module obtains the vehicle's location.
4. GSM module sends an alert SMS to emergency services and contacts.
5. LED and buzzer indicate the system's status.


**Conclusion:**
The Accident Alert System offers a low-cost solution to road accidents by promptly notifying emergency services and victim contacts. Its easy installation and compatibility with various vehicles make it an effective life-saving device.

**Project 2: Auto-Cutoff System**

**Abstract:**
The Auto-Cutoff System aims to enhance bike rider safety by preventing accidents caused by bike tilt. It utilizes an Arduino to detect the tilt angle using an accelerometer sensor and automatically cuts off the battery supply if the tilt exceeds a preset angle.

**Introduction:**
Accidents caused by bike tilt pose a significant risk to riders. The Auto-Cutoff System detects bike tilt using an accelerometer sensor and turns off the battery supply if the angle exceeds a safe threshold. No major modifications are required to implement this system.

**Methodology:**
1. ADXL335 accelerometer sensor measures bike tilt angle.
2. Arduino processes sensor data and controls battery supply.
3. If tilt angle exceeds the threshold (preset angle), microcontroller signals relay module.
4. Relay module cuts off the battery supply.

**Components:**
1. Arduino Uno R3 microcontroller
2. ADXL335 accelerometer sensor
3. Relay module
4. Jumper wires
5. 9V battery

**Result:**
The system successfully detected bike tilt and promptly cut off the battery supply when the angle exceeded the preset threshold (set to 45 degrees). The response time was quick and accurate.

**Conclusion:**
The Auto-Cutoff System using Arduino is an effective safety measure to prevent accidents caused by bike tilt. Its easy implementation and integration with the bike's electrical system make it a valuable addition to enhance rider safety. Further improvements can be made by adding additional sensors and integrating with the bike's GPS system for real-time location-based services.
