/**
 **************************************************
 *
 * @file        MAX30102-Heart-Rate-Library-SOLDERED.h
 * @brief       Header file for sensor specific code.
 *
 *
 * @copyright GNU General Public License v3.0
 * @authors     Goran Juric @ soldered.com
 ***************************************************/

#ifndef __SENSOR_MAX30102__
#define __SENSOR_MAX30102__

#include "Arduino.h"
#include "libs/SparkFun_Bio_Sensor_Hub_Library-1.0.5/src/SparkFun_Bio_Sensor_Hub_Library.h"

class MAX30102 : public SparkFun_Bio_Sensor_Hub
{
  public:
    MAX30102(uint16_t, uint16_t, uint8_t address = 0x55);

  protected:
  private:
};

#endif
