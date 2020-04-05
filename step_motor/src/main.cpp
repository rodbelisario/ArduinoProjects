#include <Arduino.h>
#include "pin.hpp"
#include "debug.hpp"

Pin a;

void setup()
{
	// initialize digital pin LED_BUILTIN as an output.
	// LED_BUILTIN = 13
	a = Pin(13, OUTPUT);
	
}

// the loop function runs over and over again forever
void loop()
{
	a.blink(1000);
}