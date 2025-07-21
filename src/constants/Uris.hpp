#ifndef URIS_HPP
#define URIS_HPP

#include <Arduino.h>
#include <pgmspace.h>

namespace Constants
{
    namespace Uris
    {
        constexpr const char URI_INDEX[] PROGMEM = "/index.html";
        constexpr const char URI_OK[] PROGMEM = "/OK.jpg";
        constexpr const char URI_IMAGE[] PROGMEM = "/image.jpg";
        constexpr const char URI_ERROR404[] PROGMEM = "/error404.html";

        constexpr const char* const URIS[] PROGMEM = 
        {
            URI_INDEX,
            URI_OK,
            URI_IMAGE,
            URI_ERROR404
        };

    } // namespace Uris
}
#endif // !URIS_HPP