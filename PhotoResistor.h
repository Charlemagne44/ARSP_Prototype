/*
    PhotoResistor.h - Library for interpreting analogue values from a 
    phototransistor within a circuit
*/
#ifndef PhotoResistor_h
#define PhotoResistor_h

class PhotoResistor {
    public:
        PhotoResistor(int pin);
        int getVoltageAnalogVal();
        int getLightIntensity();
    private:
        int _pin;
};

#endif