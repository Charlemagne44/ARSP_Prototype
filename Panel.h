/*
    Panel.h - Library for measuring voltage values from a solar panel
*/
#ifndef Panel_h
#define Panel_h

class Panel {
    public:
        Panel(int pin);
        float getPanelVoltage();
    private:
        int _pin;
};

#endif