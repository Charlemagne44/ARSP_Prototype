#include "Arduino.h"
#include "Panel.h"

Panel::Panel(int pin) {
    _pin = pin;
}

float Panel::getPanelVoltage() {
    return analogRead(_pin) * (5.0 / 1023.0);
}