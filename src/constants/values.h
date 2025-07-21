#pragma once

#include <Arduino.h>

namespace Constants
{
    namespace Values
    {
        // SD Card Constants
        #define SD_ENABLE true
        #define SD_DISABLE false

        #define DEFAULT_TEXT_SIZE 1
        #define DEFAULT_ROTATION 3
        #define DEFAULT_TO_SHOW SHOW_IMAGE
        #define DEFAULT_N_FRAMES 0
        #define WIFI_MODE WIFI_AP

        #define SETTING_DEFAULT_VALUE 0
        #define SETTING_FAIL_VALUE -1

        // Serial port settings
        #define BAUDRATE 115200

        #define SETUP_WAIT_TIME 2000
        #define TIMEOUT_VIDEO_TRANSFER 5000
        #define TIME_OUT_FILE 2000

        // Server settings
        #define SERVER_PORT 80

        // Neo pixel settings
        #define NEO_PIXEL_NUMPIXELS 9
        #define DEFAULT_BRIGHTNESS 0x7f
        #define DEFAULT_SATURATION 0xff
        #define DEFAULT_SPEED 80
        #define DEFAULT_FADE_TIME 500
        #define DEFAULT_FREQ 5
        #define DEFAULT_BLINK_DURATION 2500
        #define DEFAULT_FOREGROUND_SIZE 2
        #define DEFAULT_BACKGROUND_SIZE 2
        #define DEFAULT_HUE_SPEED 25
        #define DEFAULT_DEPTH 100

        // Neo pixel Modes
        #define MODE_SOLID 0
        #define MODE_BREATHE 2
        #define MODE_RANDOM_COLORS 5
        #define MODE_COLORLOOP 8
        #define MODE_COLORFUL 34
        #define MODE_RAINBOW 9
        #define MODE_FADE 12
        #define MODE_BLINK_RAINBOW 26
        #define MODE_SOLID_PATTERN 83
        #define MODE_FLOW_STRIP 179
        #define MODE_WALKING 255

        // Neo pixel config
        #define UNDEFINED_CONFIG -1

        // Neo pixel constants
        #define RGB_RED (uint32_t) 0xff0000
        #define RGB_GREEN (uint32_t) 0x00ff00
        #define RGB_BLUE (uint32_t) 0x0000ff
        #define RGB_AMBER (uint32_t) 0xffbf00
        #define RGB_MAGENTA (uint32_t) 0xff00ff
        #define RGB_WHITE (uint32_t) 0xffffff
        #define RGB_LIGHT_GRAY (uint32_t) 0xd3d3d3
        #define MAX_FADE_DEPTH 100
        #define MIN_FADE_DEPTH 0
    }
}

