/**
 *******************************************************************************
 *      ______  _   __  ______  ____     ______        ___    ______   ____
 *     / __  / / \ / / / ____/ / __ \   /  ___/       /  /   /_   _/  / __ \
 *    / /_/ / /   \ / / ____/ /  -- /  /  /__   __   /  /__  _/  /_  / __ <
 *   /_____/ /_/ \_/ /_____/ /__/ \_\ /_____/  /_/  /_____/ /_____/ /_____/
 *
 *     An amateur remote control software library. Use at your own risk.
 *
 * @file    math_lib.cpp
 * @brief
 * @author  Y.S.Kuo in Hsinchu
 *******************************************************************************
 */

#ifndef MATH_LIB_H_
#define MATH_LIB_H_

#include <stdint.h>


/*
 *******************************************************************************
 * Constant value definition
 *******************************************************************************
 */

#define MATH_PI             (3.14159265359)
#define MATH_PI_HALF        (1.570796326795)

#define MATH_DEG2RAD(deg)   ((deg) * (MATH_PI / 180.0))
#define MATH_RAD2DEG(rad)   ((rad) * (180 / MATH_PI))

#define MATH_MAX(a,b)       ((a) > (b) ? a : b)
#define MATH_MIN(a,b)       ((a) < (b) ? a : b)


/*
 *******************************************************************************
 * Data type definition
 *******************************************************************************
 */


/*
 *******************************************************************************
 * Global variables
 *******************************************************************************
 */


/*
 *******************************************************************************
 * Public functions declaration
 *******************************************************************************
 */


/*
 *******************************************************************************
 * Private functions declaration
 *******************************************************************************
 */


/*
 *******************************************************************************
 * Public functions
 *******************************************************************************
 */

float Math_FastSqrt(float val);
float Math_FastInvSqrt(float x);
float Math_Atan2Nvidia(float y, float x);
float Math_Atan2Approx1(float y, float x);
float Math_Atan2Approx2(float y, float x);
float Math_FastSin(float x);
float Math_FastCos(float x);
float Math_FastSin2(float x);
float Math_FastCos2(float x);


/*
 *******************************************************************************
 * Private functions
 *******************************************************************************
 */


#endif // MATH_LIB_H_
