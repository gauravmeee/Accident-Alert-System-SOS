# Innovative Project : Integrated Bike Safety Solutions

This innovative project consists of two individual sub-projects aimed at enhancing safety for bike riders and providing an accident alert system. The first sub-project, the Auto-Cutoff System, utilizes an Arduino and accelerometer sensor to detect bike tilt and automatically cut off the battery supply to prevent accidents. The second sub-project, the Accident Alert System (SOS), combines Arduino, MPU6050, GPS, and GSM modules to detect accidents and send immediate alerts to emergency services and contacts via SMS. Both sub-projects offer cost-effective solutions to mitigate the risks associated with bike accidents. For more details, please refer to the link attached at the end of the file

**Project 1: Accident Alert System (SOS)** 

**Code** https://github.com/gauravmeee/Accident-Alert-System-SOS-/blob/ab2b0ae5876c9fb737102f21dbb8b8e25b5ebaad/Accident%20alert%20system%20sos.ino

The Accident Alert System is a cost-effective solution designed to detect accidents and send immediate alerts to emergency services and the victim's relatives/friends via SMS. The system uses Arduino UNO, MPU6050 (Six-Axis Gyro + Accelerometer), GPS (NEO6M), and GSM (SIM800L) modules.

The system continuously monitors the vehicle's movements using the MPU6050 sensor, which detects sudden changes in acceleration and angular rotation. When an accident occurs, the Arduino triggers and sends the vehicle's current location (obtained from the GPS module) to the GSM module. The GSM module then sends an alert SMS to emergency services and the victim's contacts, requesting immediate help. The system uses LED indicators and a buzzer to display its status.

**Conclusion**
The Accident Alert System offers a low-cost solution to road accidents by promptly notifying emergency services and victim contacts. Its easy installation and compatibility with various vehicles make it an effective life-saving device.

**Project 2: Auto-Cutoff System**

**Code** https://github.com/gauravmeee/Accident-Alert-System-SOS-/blob/ab2b0ae5876c9fb737102f21dbb8b8e25b5ebaad/Auto%20Cutoff%20System.ino

The Auto-Cutoff System aims to enhance bike rider safety by preventing accidents caused by bike tilt. It utilizes an Arduino to detect the tilt angle using an accelerometer sensor and automatically cuts off the battery supply if the tilt exceeds a preset angle.

Accidents caused by bike tilt pose a significant risk to riders. The Auto-Cutoff System detects bike tilt using an accelerometer sensor and turns off the battery supply if the angle exceeds a safe threshold. No major modifications are required to implement this system.

The system successfully detected bike tilt and promptly cut off the battery supply when the angle exceeded the preset threshold (set to 45 degrees). The response time was quick and accurate.

**Conclusion:**
The Auto-Cutoff System using Arduino is an effective safety measure to prevent accidents caused by bike tilt. Its easy implementation and integration with the bike's electrical system make it a valuable addition to enhance rider safety. Further improvements can be made by adding additional sensors and integrating with the bike's GPS system for real-time location-based services.

The Complete Report of the Project is Attached in the Given Link https://docs.google.com/document/d/1ASGAeJunTyxg7bkuEC-adObe6EjQOvE_SNtzHPPaNgU/edit?usp=sharing
