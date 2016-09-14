#define LOG_TAG "libshim_gpsd"
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <pthread.h>

#include <utils/Log.h>

#include <hardware/power.h>
#include <hardware/hardware.h>

#include <gui/Sensor.h>

//namespace android {

extern "C" void _ZNK7android13SensorManager13getSensorListEPPKPKNS_6SensorE() {}

//}
