#pragma once

#include "ap_version.h"

#define THISFIRMWARE "ArduPlane V3.8.2"
#define FIRMWARE_VERSION 3,8,2,FIRMWARE_VERSION_TYPE_OFFICIAL

#ifndef GIT_VERSION
#define FIRMWARE_STRING THISFIRMWARE
#else
#define FIRMWARE_STRING THISFIRMWARE " (" GIT_VERSION ")"
#endif
