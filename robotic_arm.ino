#include <Servo.h>
#include <Wire.h>
#include <MPU6050.h>

MPU6050 mpu;
Servo servo1, servo2, servo3, servo4, servo5;

const int flexPins[] = {A0, A1, A2, A3, A4};
int flexValues[5];

void setup() {
    Serial.begin(9600);
    Wire.begin();
    mpu.initialize();

    servo1.attach(9);
    servo2.attach(10);
    servo3.attach(11);
    servo4.attach(12);
    servo5.attach(13);
}

void loop() {
    for (int i = 0; i < 5; i++) {
        flexValues[i] = analogRead(flexPins[i]);
    }

    int angle1 = map(flexValues[0], 300, 800, 0, 180);
    int angle2 = map(flexValues[1], 300, 800, 0, 180);
    int angle3 = map(flexValues[2], 300, 800, 0, 180);
    int angle4 = map(flexValues[3], 300, 800, 0, 180);
    int angle5 = map(flexValues[4], 300, 800, 0, 180);

    servo1.write(angle1);
    servo2.write(angle2);
    servo3.write(angle3);
    servo4.write(angle4);
    servo5.write(angle5);

    delay(50);
}
