/*
    Author: Mehmet Furkan KAYA
    Date: 21/01/2025
    Description: Addressable Led Controller
*/

#include <LEDController.h>  // Include the LED controller library

// Define the LED pin numbers and the number of LEDs for each strip
#define LED_PIN_1 7
#define LED_PIN_2 8
#define NUM_LEDS 144

// Create LEDController objects for two LED strips
LEDController led1(LED_PIN_1, NUM_LEDS);  // LED strip 1
LEDController led2(LED_PIN_2, NUM_LEDS);  // LED strip 2

void setup() {
  // Initialize both LED strips
  led1.init();  // Initialize LED strip 1
  led2.init();  // Initialize LED strip 2
}

void loop() {
  // Call the charging effect on LED strip 1 and the moving to charge station effect on LED strip 2
  led1.chargingEffect();  // Charging effect for LED strip 1
  led2.movingToChargeStationEffect();  // Moving to charge station effect for LED strip 2
}
