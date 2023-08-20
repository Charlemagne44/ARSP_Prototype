/*
    Motor.h - Library for basic servo motor functions
*/
#ifndef Motor_h
#define Motor_h

class Motor {
    public:
        Motor(int pin);
        void moveMotor(float degrees);
    private:
        int _pin;
};

#endif