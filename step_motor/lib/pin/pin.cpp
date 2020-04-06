#include "pin.hpp"
#include "debug.hpp"

Pin::Pin(){}
Pin::~Pin(){}

Pin::Pin(int pin, int mode)
{
    pinMode(pin, mode); // faz o registro no micro-controlador
    _pin = pin;
    _mode = mode;
    return;
}

void Pin::setMode(int mode)
{
    pinMode(_pin, mode); // faz o registro no micro-controlador
    _mode = mode;
    return;
}

int Pin::getRealPin()
{
    return _pin;
}

int Pin::getPinMode()
{
    return _mode;
}

bool Pin::getPinState()
{
    return _state;
}

bool Pin::on()
{
    digitalWrite(_pin, HIGH);
    _state = true;
    return _state;
}

bool Pin::off()
{
    digitalWrite(_pin, LOW);
    _state = true;
    return _state;
}

void Pin::blink(int period)
{
    on();
    delay(period / 2);
    off();
    delay(period / 2);
}
