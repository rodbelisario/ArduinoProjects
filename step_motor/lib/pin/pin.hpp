#ifndef PIN_HPP
#define PIN_HPP

#include <Arduino.h>

class Pin
{

private:
    int _pin;    // Pin number
    int _mode;   // Pin operation mode (INPUT | OUTPUT)
    bool _state; // Pin state (ON | OFF)

public:
    Pin();
    Pin(int pin, int mode); // Create pin defining it's pin and mode on Arduino

    // Métodos setters:
    void setMode(int mode); // Define operation mode and return true if all goes well

    // Métodos getters:
    int getRealPin();   // Get the real pin number of the Pin class
    int getPinMode();   // Get the pin mode of the a Pin class
    bool getPinState(); // Get pin state

    bool on();              // Activate the pin
    bool off();             // Deactivate the pin
    void blink(int period); // Set pin to blink on defined period

    virtual ~Pin();
};

#endif //PIN_HPP