/** 
 * @file version.h
 * @author John Petrilli
 * @date 11.Sep.2024
 * @brief This file holds the HW version and FW version. 
 *
 * The build version will get auto incremented using a pre-build script.
 * The major, minor, and bugfix versions need to be updated manually. 
 */
#ifndef VDC_FW_VERSION_H
#define VDC_FW_VERSION_H

// System Libraries
#include <stdint.h>

// Defines
#define FW_VERSION_MAJOR 1
#define FW_VERSION_MINOR 3
#define FW_VERSION_BUGFIX 8
#define FW_VERSION_BUILD 81

// The FW_VERSION variable will be automatically updated in the pre-build script
#define FW_VERSION "1.3.8.81"

#endif /* VERSION_H_ */
