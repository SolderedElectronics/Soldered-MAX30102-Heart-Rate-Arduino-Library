/**
 **************************************************
 *
 * @file        MAX30102-Heart-Rate-Library-SOLDERED.cpp
 * @brief       Example functions to overload in base class.
 *
 *
 * @copyright GNU General Public License v3.0
 * @authors     Goran Juric @ soldered.com
 ***************************************************/


#include "MAX30102-Heart-Rate-Library-SOLDERED.h"

MAX30102::MAX30102()
{
}

/**
 * @brief                   Sensor specific native constructor.
 *
 * @param int _pin          Example parameter.
 */
MAX30102::MAX30102(int _pin)
{
    pin = _pin;
    native = 1;
}

/**
 * @brief                   Overloaded function for virtual in base class to initialize sensor specific.
 */
void MAX30102::initializeNative()
{
    pinMode(pin, INPUT);
}
