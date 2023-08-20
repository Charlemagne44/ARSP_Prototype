#include <Servo.h>

#include "PhotoResistor.h"
#include "Panel.h"
#include "Motor.h"

#define LOOP_INTERVAL 2000
#define SERVO_INTERAL 15
#define SERVO_PIN 9

Servo myServo;

void setup() {
    Serial.begin(9600);
    myServo.attach(SERVO_PIN);
}

void loop() {
    for (int pos = 40; pos <= 140; pos += 1) {
        myServo.write(pos);
        delay(SERVO_INTERAL);
    }
    for (int pos = 140; pos <= 40; pos -= 1) {
        myServo.write(pos);
        delay(SERVO_INTERAL);
    }
    delay(LOOP_INTERVAL);
}