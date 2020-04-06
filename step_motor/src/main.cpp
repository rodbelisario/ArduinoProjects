#include <Arduino.h>
#include "pin.hpp"
#include "step_motor.hpp"
#include "debug.hpp"

//Pin a;
Step_motor motor;

void setup()
{
	// initialize digital pin LED_BUILTIN as an output.
	// LED_BUILTIN = 13
	// a = Pin(13, OUTPUT);
	motor.setMotorPins(8, 9, 10, 11);
}

// the loop function runs over and over again forever
void loop()
{
	motor.clockwiseStep(4000, 500);
	//a.blink(1000);
}