#ifndef MANAGE_WIFI_H
#define MANAGE_WIFI_H

#include <Arduino.h>
#include <WiFi.h>
#include "constants.h"
#include "handlers.h"

namespace Controller
{
    #define MAX_ATTEMPS (uint8_t) 20

    class Wifi
    {
        protected:        
            static const char* apSsid;
            static const char* apPassword ;
            static unsigned long previousMillisWIFI;        
            static bool setupStaticIp();
            static bool startAPMode();

        public:
            static void begin(void(*handler)(String) = ErrorHandler::handleFatalError );
            static void wifiLoop();
    };
}

using wifi = Controller::Wifi;

#endif