2. Auto Cutoff System
//team Raftaar asme innovation project 2023
#include <Wire.h>
#include <MPU6050.h>
MPU6050 mpu;
int16_t accelerometer_x, accelerometer_y, accelerometer_z;
int16_t gyroscope_x, gyroscope_y, gyroscope_z;
double angle_x, angle_y, angle_z;
double roll, pitch;
const int relay_pin = 7;
const int tilt_threshold = 30;
void setup() {
 Serial.begin(9600);
 Wire.begin();
 mpu.initialize();
 pinMode(relay_pin, OUTPUT);
}
void loop() {
 mpu.getMotion6(&accelerometer_x, &accelerometer_y, &accelerometer_z,
&gyroscope_x, &gyroscope_y, &gyroscope_z);
 angle_x = atan2(accelerometer_y, accelerometer_z) * 180 / M_PI;
 angle_y = atan2(-accelerometer_x, sqrt(accelerometer_y * accelerometer_y +
accelerometer_z * accelerometer_z)) * 180 / M_PI;
 roll = 0.98 * (roll + gyroscope_x * 0.001) + 0.02 * angle_x;
 pitch = 0.98 * (pitch + gyroscope_y * 0.001) + 0.02 * angle_y;
 if (pitch > tilt_threshold || pitch < -tilt_threshold || roll > tilt_threshold || roll < -
tilt_threshold) {
 digitalWrite(relay_pin, HIGH);
 Serial.println("Tilt angle exceeded threshold. Engine cut off.");
 }
 else {
 digitalWrite(relay_pin, LOW);
 }
 delay(100);
}
