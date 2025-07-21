
#ifndef HANDLERS_ERROR_HPP
#define HANDLERS_ERROR_HPP

#include <Arduino.h>
#include <ESPAsyncWebServer.h>
#include "constants.h"

namespace Handler
{
    namespace Error
    {
        static void handleError() 
        {
            delay(1000);
            ESP.restart(); 
        }

        /**
         * @brief Print errorMessage in console and execute an infinite loop.
         * @param errorMessage Message to show on console
         */
        static void handleFatalError(String errorMessage = String()) 
        {
            Serial.println(errorMessage);
            while (true) delay(10);    
        }

        /**
         * @brief Sends a 500 error response indicating that the specified file 
         *        could not be opened for writing, and logs the error to the serial output.
         * 
         * @param request The HTTP request object to send the response to.
         * @param filepath The path of the file that failed to open.
         */
        static void sendOpenFileError(AsyncWebServerRequest *request, String filepath)
        {
            Serial.printf("%s %s\n", Constants::Strings::Error::CANNOT_WRITE_ON, filepath);
            request->send(500, "text/plain", "Error opening file");
        }
    }
}

#endif