#include "Arduino.h"
#include "PhotoResistor.h"


PhotoResistor::PhotoResistor(int pin) {
    _pin = pin;
}

int PhotoResistor::getVoltageAnalogVal() {
    return analogRead(_pin);
}

int PhotoResistor::getLightIntensity() {
    /*
        Return the intensity of the light on a scale of 1 to 5
        1 being the lowest, 5 being the brightest
    */
   int analogVal = getVoltageAnalogVal();
   if (analogVal < 10) {
    return 1;
   } else if (analogVal < 200) {
    return 2;
   } else if (analogVal < 500) {
    return 3;
   } else if (analogVal < 800) {
    return 4;
   } else {
    return 5;
   }
}