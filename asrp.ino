#include "PhotoResistor.h"

#define LOOP_INTERVAL 3000

PhotoResistor photoResistor(A0);

void setup() {
    Serial.begin(9600);
}

void loop() {
    delay(LOOP_INTERVAL);
}