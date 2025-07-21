
#ifndef HTTP_SERVER_H
#define HTTP_SERVER_H

#include <pins.h>
#include <Arduino.h>
#include <SPIFFS.h>
#include <WiFi.h>
#include <pgmspace.h>
#include "constants.h"
#include <ESPAsyncWebServer.h>

class HttpServer
{
    protected:
        // Request Handlers
        static ArRequestHandlerFunction Home;
        static ArRequestHandlerFunction NotFound;   

        static bool loadStaticFiles();

    public:   
        static void begin();
};

#endif
