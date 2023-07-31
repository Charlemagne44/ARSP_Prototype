#include "PhotoResistor.h"

#define LOOP_INTERVAL 30000

PhotoResistor leftPhotoResistor(7);
PhotoResistor rightPhotoResistor(8);

void setup() {
    Serial.begin(9600);
}

void loop() {
    // Gather the intensity detected from the photo resistors on a scale of 1-5
    int leftIntensity = leftPhotoResistor.getLightIntensity();
    int rightIntensity = leftPhotoResistor.getLightIntensity();
    Serial.print("left photoresistor intensity: ");
    Serial.println(leftIntensity);
    Serial.print("Right photoresistor intensity: ");
    Serial.println(rightIntensity);
    
    delay(LOOP_INTERVAL);
}