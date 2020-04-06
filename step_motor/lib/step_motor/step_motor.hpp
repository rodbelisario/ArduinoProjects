// https://www.youtube.com/watch?v=vxxnPJBxG3M&list=PLCDA51D9D5FC44D84&index=15
//http://ww1.microchip.com/downloads/en/Appnotes/00907a.pdf

#include "pin.hpp"

class Step_motor
{
private:
                //              Based on: Stepmotor 
                //  color   |   Unip P  |   Unip S  |   Bip      
    Pin pinA;     //          |           |           |
    Pin pinB;     //          |           |           |
    Pin pinC;     //          |           |           |
    Pin pinD;     //          |           |           |
    int last_step;
    bool active;

    int step(int step_num);

public:
    Step_motor();
    virtual ~Step_motor();
    void setMotorPins(int a, int b, int c, int d);
    void clockwiseStep(int steps, int delay_period);
    
};

