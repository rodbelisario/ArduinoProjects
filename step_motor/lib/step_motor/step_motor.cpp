#include "step_motor.hpp"
#include "debug.hpp"

Step_motor::Step_motor() {}
Step_motor::~Step_motor() {}

void Step_motor::setMotorPins(int a, int b, int c, int d)
{
    pinA = Pin(a, OUTPUT);
    pinB = Pin(b, OUTPUT);
    pinC = Pin(c, OUTPUT);
    pinD = Pin(d, OUTPUT);
}

int Step_motor::step(int step_num)
{
    switch (step_num)
    {
    case 0:
        pinA.on();
        pinB.off();
        pinC.off();
        pinD.off();
        break;

    case 1:
        pinA.off();
        pinB.on();
        pinC.off();
        pinD.off();
        break;

    case 2:
        pinA.off();
        pinB.off();
        pinC.on();
        pinD.off();
        break;

    case 3:
        pinA.off();
        pinB.off();
        pinC.off();
        pinD.on();
        break;

    case -1:
        pinA.off();
        pinB.off();
        pinC.off();
        pinD.off();
        break;
    
    default: 
        printf("Wrong step_num. Step_num range [-1 to 3]. Received %d", step_num);

    }
    last_step = step_num;
    return last_step;
}

void Step_motor::clockwiseStep(int steps, int delay_period)
{
    int step_num = -1;
    for (int i = 0; i < steps; i++)
    {
        step_num = i % 4;
        step(step_num);
        delay(delay_period);

    }
}
