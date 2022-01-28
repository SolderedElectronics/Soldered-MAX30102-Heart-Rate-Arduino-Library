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


MAX30102::MAX30102(uint16_t resetPin, uint16_t mfioPin, uint8_t address)
    : SparkFun_Bio_Sensor_Hub(resetPin, mfioPin, address)
{
    SparkFun_Bio_Sensor_Hub(resetPin, mfioPin, address);
}
