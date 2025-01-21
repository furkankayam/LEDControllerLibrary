#include "LEDController.h"

LEDController::LEDController(int pin, int numLEDs) {
    _pin = pin;
    _numLEDs = numLEDs;
    _leds = new CRGB[_numLEDs];
}

void LEDController::init() {
  if (_pin == 1) {
    FastLED.addLeds<WS2812, 1, GRB>(_leds, _numLEDs);
  } else if (_pin == 2) {
    FastLED.addLeds<WS2812, 2, GRB>(_leds, _numLEDs);
  } else if (_pin == 3) {
    FastLED.addLeds<WS2812, 3, GRB>(_leds, _numLEDs);
  } else if (_pin == 4) {
    FastLED.addLeds<WS2812, 4, GRB>(_leds, _numLEDs);
  } else if (_pin == 5) {
    FastLED.addLeds<WS2812, 5, GRB>(_leds, _numLEDs);
  } else if (_pin == 6) {
    FastLED.addLeds<WS2812, 6, GRB>(_leds, _numLEDs);
  } else if (_pin == 7) {
    FastLED.addLeds<WS2812, 7, GRB>(_leds, _numLEDs);
  } else if (_pin == 8) {
    FastLED.addLeds<WS2812, 8, GRB>(_leds, _numLEDs);
  } else if (_pin == 9) {
    FastLED.addLeds<WS2812, 9, GRB>(_leds, _numLEDs);
  } else if (_pin == 10) {
    FastLED.addLeds<WS2812, 10, GRB>(_leds, _numLEDs);
  } else if (_pin == 11) {
    FastLED.addLeds<WS2812, 11, GRB>(_leds, _numLEDs);
  } else if (_pin == 12) {
    FastLED.addLeds<WS2812, 12, GRB>(_leds, _numLEDs);
  } else if (_pin == 13) {
    FastLED.addLeds<WS2812, 13, GRB>(_leds, _numLEDs);
  } else if (_pin == 14) {
    FastLED.addLeds<WS2812, 14, GRB>(_leds, _numLEDs);
  } else if (_pin == 15) {
    FastLED.addLeds<WS2812, 15, GRB>(_leds, _numLEDs);
  } else if (_pin == 16) {
    FastLED.addLeds<WS2812, 16, GRB>(_leds, _numLEDs);
  } else if (_pin == 17) {
    FastLED.addLeds<WS2812, 17, GRB>(_leds, _numLEDs);
  } else if (_pin == 18) {
    FastLED.addLeds<WS2812, 18, GRB>(_leds, _numLEDs);
  } else if (_pin == 19) {
    FastLED.addLeds<WS2812, 19, GRB>(_leds, _numLEDs);
  } else if (_pin == 20) {
    FastLED.addLeds<WS2812, 20, GRB>(_leds, _numLEDs);
  } else if (_pin == 21) {
    FastLED.addLeds<WS2812, 21, GRB>(_leds, _numLEDs);
  } else if (_pin == 22) {
    FastLED.addLeds<WS2812, 22, GRB>(_leds, _numLEDs);
  } else if (_pin == 23) {
    FastLED.addLeds<WS2812, 23, GRB>(_leds, _numLEDs);
  } else if (_pin == 24) {
    FastLED.addLeds<WS2812, 24, GRB>(_leds, _numLEDs);
  } else if (_pin == 25) {
    FastLED.addLeds<WS2812, 25, GRB>(_leds, _numLEDs);
  } else if (_pin == 26) {
    FastLED.addLeds<WS2812, 26, GRB>(_leds, _numLEDs);
  } else if (_pin == 27) {
    FastLED.addLeds<WS2812, 27, GRB>(_leds, _numLEDs);
  } else if (_pin == 28) {
    FastLED.addLeds<WS2812, 28, GRB>(_leds, _numLEDs);
  } else if (_pin == 29) {
    FastLED.addLeds<WS2812, 29, GRB>(_leds, _numLEDs);
  } else if (_pin == 30) {
    FastLED.addLeds<WS2812, 30, GRB>(_leds, _numLEDs);
  } else if (_pin == 31) {
    FastLED.addLeds<WS2812, 31, GRB>(_leds, _numLEDs);
  } else if (_pin == 32) {
    FastLED.addLeds<WS2812, 32, GRB>(_leds, _numLEDs);
  } else if (_pin == 33) {
    FastLED.addLeds<WS2812, 33, GRB>(_leds, _numLEDs);
  } else if (_pin == 34) {
    FastLED.addLeds<WS2812, 34, GRB>(_leds, _numLEDs);
  } else if (_pin == 35) {
    FastLED.addLeds<WS2812, 35, GRB>(_leds, _numLEDs);
  } else if (_pin == 36) {
    FastLED.addLeds<WS2812, 36, GRB>(_leds, _numLEDs);
  } else if (_pin == 37) {
    FastLED.addLeds<WS2812, 37, GRB>(_leds, _numLEDs);
  } else if (_pin == 38) {
    FastLED.addLeds<WS2812, 38, GRB>(_leds, _numLEDs);
  } else if (_pin == 39) {
    FastLED.addLeds<WS2812, 39, GRB>(_leds, _numLEDs);
  } else if (_pin == 40) {
    FastLED.addLeds<WS2812, 40, GRB>(_leds, _numLEDs);
  } else if (_pin == 41) {
    FastLED.addLeds<WS2812, 41, GRB>(_leds, _numLEDs);
  } else if (_pin == 42) {
    FastLED.addLeds<WS2812, 42, GRB>(_leds, _numLEDs);
  } else if (_pin == 43) {
    FastLED.addLeds<WS2812, 43, GRB>(_leds, _numLEDs);
  } else if (_pin == 44) {
    FastLED.addLeds<WS2812, 44, GRB>(_leds, _numLEDs);
  } else if (_pin == 45) {
    FastLED.addLeds<WS2812, 45, GRB>(_leds, _numLEDs);
  } else if (_pin == 46) {
    FastLED.addLeds<WS2812, 46, GRB>(_leds, _numLEDs);
  } else if (_pin == 47) {
    FastLED.addLeds<WS2812, 47, GRB>(_leds, _numLEDs);
  } else if (_pin == 48) {
    FastLED.addLeds<WS2812, 48, GRB>(_leds, _numLEDs);
  } else if (_pin == 49) {
    FastLED.addLeds<WS2812, 49, GRB>(_leds, _numLEDs);
  } else if (_pin == 50) {
    FastLED.addLeds<WS2812, 50, GRB>(_leds, _numLEDs);
  } else if (_pin == 51) {
    FastLED.addLeds<WS2812, 51, GRB>(_leds, _numLEDs);
  } else if (_pin == 52) {
    FastLED.addLeds<WS2812, 52, GRB>(_leds, _numLEDs);
  } else if (_pin == 53) {
    FastLED.addLeds<WS2812, 53, GRB>(_leds, _numLEDs);
  } else {
    Serial.println("Geçersiz pin değeri!");
  }
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
