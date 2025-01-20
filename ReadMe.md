# 🚨 LEDController Library

This is a library for controlling multiple LEDs with various effects, including charging, moving to a charging station, and more. It's designed to be used with Arduino boards and provides simple functions for LED control.

## Features
- **Charging Effect**: Fades LEDs to simulate a charging effect.
- **Moving to Charge Station Effect**: Changes LED colors to simulate moving to a charging station.
- **Load and Unload Effects**: Visual effects for loading/unloading.
- **Go and Stop Effects**: Simple visual effects for movement states.
- **Compatible with WS2812 LEDs**: Easy integration with WS2812 or similar LED strips.

## Installation

To use this library in your Arduino project:

1. Download or clone this repository.
2. In the Arduino IDE, go to **Sketch > Include Library > Add .ZIP Library**.
3. Select the downloaded `.zip` file.

Or, if you prefer to manually install it:

1. Download the library and unzip it.
2. Move the unzipped folder to your Arduino libraries folder (usually located at **Documents/Arduino/libraries**).

## Usage

Include the library in your Arduino sketch and initialize the LED controller:

```cpp
#include <LEDController.h>

LEDController led1(7, 144); // Pin 7, 144 LEDs
LEDController led2(8, 144); // Pin 8, 144 LEDs

void setup() {
  led1.init(); // Initialize LED1
  led2.init(); // Initialize LED2
}

void loop() {
  led1.chargingEffect(); // Display charging effect on LED1
  led2.movingToChargeStationEffect(); // Display moving effect on LED2
}
```

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details

Created by [Mehmet Furkan KAYA](https://www.linkedin.com/in/mehmet-furkan-kaya/)