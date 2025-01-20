#ifndef LEDCONTROLLER_H
#define LEDCONTROLLER_H

#include "FastLED-master/src/FastLED.h"

class LEDController {
public:
    LEDController(int pin, int numLEDs);
    void init();
    void chargingEffect();
    void movingToChargeStationEffect();
    void loadEffect();
    void unloadEffect();
    void goEffect();
    void stopEffect();

private:
    int _pin;
    int _numLEDs;
    CRGB* _leds;
};

#endif
