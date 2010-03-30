#ifndef config_h
#define config_h

#include <stdint.h>

#define MATH_MULTIPLIER 1000
#define MATH_MULTI MATH_MULTIPLIER

#define use_atan
//#define use_asin
#define use_comp_filter
//#define use_kalman_filter
#define use_ordered_sensors
//#define use_multiplication_funct
//#define use_buffered_tx0
//#define use_buffered_tx1

#define ticks_500us ((F_CPU * 5) / 10000)
#define ticks_10ms (ticks_500us * 20)

#define ppm_highest_chan_default 6

#include "default_values.h"

#endif