#include "LEDController.h"

LEDController::LEDController(int pin, int numLEDs) {
    _pin = pin;
    _numLEDs = numLEDs;
    _leds = new CRGB[_numLEDs];
}

void LEDController::init() {
    const int pin = _pin;
    FastLED.addLeds<WS2812, pin, GRB>(_leds, _numLEDs);
}

void LEDController::chargingEffect() {
    for (int i = 0; i < 255; i++) {
        CRGB color = CRGB(0, 255 - i, 0);
        fill_solid(_leds, _numLEDs, color);
        FastLED.show();
    }
    for (int i = 255; i >= 0; i--) {
        CRGB color = CRGB(0, 255 - i, 0);
        fill_solid(_leds, _numLEDs, color);
        FastLED.show();
    }
}

void LEDController::movingToChargeStationEffect() {
    for (int i = 0; i < 150; i++) {
        CRGB color = CRGB(255, i, 0);
        fill_solid(_leds, _numLEDs, color);
        FastLED.show();
    }
    for (int i = 150; i >= 0; i--) {
        CRGB color = CRGB(255, i, 0);
        fill_solid(_leds, _numLEDs, color);
        FastLED.show();
    }
}

void LEDController::loadEffect() {
    CRGB color = CRGB(0, 0, 255);
    int delayMs = 10;
    int mid = _numLEDs / 2;
    for (int i = 0; i < mid; i++) {
        if (i < mid) _leds[i] = color;
        if (_numLEDs - 1 - i >= mid) _leds[_numLEDs - 1 - i] = color;
        FastLED.show();
        delay(delayMs);
    }
    fill_solid(_leds, _numLEDs, CRGB(0, 0, 0));
    FastLED.show();
}

void LEDController::unloadEffect() {
    CRGB color = CRGB(0, 0, 255);
    int delayMs = 10;
    int mid = _numLEDs / 2;
    for (int i = mid - 1; i >= 0; i--) {
        _leds[i] = color;
        _leds[_numLEDs - 1 - i] = color;
        FastLED.show();
        delay(delayMs);
    }
    fill_solid(_leds, _numLEDs, CRGB(0, 0, 0));
    FastLED.show();
}

void LEDController::goEffect() {
    CRGB color = CRGB(255, 255, 100);
    fill_solid(_leds, _numLEDs, color);
    FastLED.show();
}

void LEDController::stopEffect() {
    CRGB color = CRGB(255, 0, 0);
    int delayMs = 250;
    fill_solid(_leds, _numLEDs, color);
    FastLED.show();
    delay(delayMs);
    fill_solid(_leds, _numLEDs, CRGB(0, 0, 0));
    FastLED.show();
    delay(delayMs);
}
