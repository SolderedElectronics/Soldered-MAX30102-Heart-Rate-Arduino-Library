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
#include "libs/SparkFun_MAX3010x_Sensor_Library-master/src/MAX30105.h"

class MAX30102 : public MAX30105
{
  public:
    MAX30102(int _pin);
    MAX30102();

  protected:
    void initializeNative();

  private:
    int pin;
    int native;
};

#endif
