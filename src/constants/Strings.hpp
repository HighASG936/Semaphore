#ifndef STRINGS_HPP
#define STRINGS_HPP

#include <Arduino.h>
#include <pgmspace.h>

namespace Constants
{
    namespace Strings
    {

        namespace Status
        {
            constexpr const char OK[] PROGMEM = "[OK]";
            constexpr const char ERROR[] PROGMEM = "[ERROR]";
            constexpr const char READY[] PROGMEM = "[READY]";
            constexpr const char NO_ATTACHED[] PROGMEM = "[NOT ATTACHED]";
            constexpr const char BUSY[] PROGMEM = "[BUSY]";
            constexpr const char SYSTEM_IS_READY[] PROGMEM = "[SYSTEM IS READY]";
        }

        namespace sdType
        {
            constexpr const char MMC[] PROGMEM = "MMC";
            constexpr const char SDSC[] PROGMEM = "SDSC";
            constexpr const char SDHC[] PROGMEM = "SDHC";
            constexpr const char UNKNOWN[] PROGMEM = "UNKNOWN";
        }

        namespace AlignedMessage
        {
            constexpr const char SPIFFS[] PROGMEM = "SPIFFS.............";
            constexpr const char SDCARD[] PROGMEM = "SD CARD............";
            constexpr const char T_DISPLAY[] PROGMEM = "DISPLAY............";
            constexpr const char SERVER[] PROGMEM = "HTTP SERVER........";
            constexpr const char WEBSOCKET[] PROGMEM = "WEBSOCKET SERVER...";
            constexpr const char NETWORK[] PROGMEM = "NETWORK............";
        }

        namespace TextTitles
        {
            constexpr const char WIFI_CONNECTED[] PROGMEM = "Wifi connected";
            constexpr const char LOOKING_FOR_FRAMES_AT[] PROGMEM = "Looking for Frames at";
            constexpr const char ROOT_DIRECTORY[] PROGMEM = "root directory";
            constexpr const char TASK_NO[] PROGMEM = "Task no.: ";
            constexpr const char SETTINGS[] PROGMEM = "SETTINGS";
            constexpr const char CARD_TYPE[] PROGMEM = "Card Type: ";
            constexpr const char SPIFFS_FILES[] PROGMEM = "SPIFFS files";
            constexpr const char DEFAULT_DISPLAY[] PROGMEM = "Default screen: ";
            constexpr const char STORAGE_FRAMES[] PROGMEM = "Storaged frames: ";
            constexpr const char VIDEO[] PROGMEM = "VIDEO";
            constexpr const char IMAGE[] PROGMEM = "IMAGE";
            constexpr const char IP_ADDRESS[] PROGMEM = "IP Address:";
            constexpr const char IP_ACCESS_POINT[] PROGMEM = "IP Address AP:";
            constexpr const char MAC_ADDRESS[] PROGMEM = "MAC Address:";
            constexpr const char HOSTNAME_TITLE[] PROGMEM = "Hostname:";
            constexpr const char STARTING_AS_AP_MORE[] PROGMEM = "Starting as AP MODE";
            constexpr const char DELETED[] PROGMEM = "Deleted: ";
            constexpr const char _SPIFFS[] PROGMEM = "SPIFFS";
            constexpr const char _SD_CARD[] PROGMEM = "SD Card";
            constexpr const char TOTAL_SIZE[] PROGMEM = " Total Size: ";
            constexpr const char USED_MEMORY[] PROGMEM = " Used memory: ";
            constexpr const char PERCENT_USED_MEMORY[] PROGMEM = " Percent used memory: ";
            constexpr const char NETWORK[] PROGMEM = "NETWORK";
            constexpr const char RAM_USAGE[] PROGMEM = "RAM USAGE";
            constexpr const char RAM[] PROGMEM = "RAM";
            constexpr const char WEBSOCKET[] PROGMEM = "WebSocket";
            constexpr const char DRIVER[] PROGMEM = "driver:";
            constexpr const char HEIGHT[] PROGMEM = "height:";
            constexpr const char WIDTH[] PROGMEM = "width:";
        }

        namespace Notifications
        {
            constexpr const char CHECKING_SD_CARD[] PROGMEM = "Checking SD Card";
            constexpr const char LOADING_STATIC_FILES[] PROGMEM = "Loading static Files";
            constexpr const char SETTING_UP_SERVER[] PROGMEM = "Setting Up Server";
            constexpr const char CLIENT_DISCONNECTED[] PROGMEM = "Client Disconnected";
            constexpr const char SKIPPING_RESPONSE[] PROGMEM = "Skipping Response";
            constexpr const char NOTES[] PROGMEM = "Notes:";
            constexpr const char NOTE1[] PROGMEM = "(1) You can check setup info at ";
            constexpr const char NOTE2[] PROGMEM = "(2) See driver code at User_Setup_Select.h";            
        }

        namespace Error
        {
            constexpr const char FAILED_ROOT_DIRECTORY[] PROGMEM = "FAILED TO OPEN ROOT SPIFFS DIRECTORY";
            constexpr const char EMPTY_FILE_SYSTEM[] PROGMEM = "EMPTY FILE SYSTEM";
            constexpr const char FAILED_CONFIGURE_STATIC_IP[] PROGMEM = "FAILED TO CONFIGURE constexpr IP";
            constexpr const char CANNOT_OPEN_PATH[] PROGMEM = "CANNOT OPEN PATH";
            constexpr const char CANNOT_DELETE[] PROGMEM = "CANNOT DELETE";
            constexpr const char NOT_FOUND_FRAMES[] PROGMEM = "NOT FOUND FRAMES";
            constexpr const char FAILED_TO_OPEN[] PROGMEM = "FAILED TO OPEN";
            constexpr const char CANNOT_GET_NUMBER_OF_FRAMES[] PROGMEM = "CANNOT GET NUMBER OF FRAMES";
            constexpr const char CANNOT_OPEN_ROOT[] PROGMEM = "CANNOT OPEN ROOT PATH";
            constexpr const char EMPTY_VIDEO_FILE[] PROGMEM = "EMPTY VIDEO FILE";
            constexpr const char EMPTY_PICTURE_FILE[] PROGMEM = "EMPTY PICTURE FILE";
            constexpr const char CANNOT_LOAD_STATIC_FILES[] PROGMEM = "CANNOT LOAD STATIC FILES";
            constexpr const char FILE_NOT_FOUND[] PROGMEM = "FILE NOT FOUND";
            constexpr const char CANNOT_READ_SCREEN_INFO[] PROGMEM = "CANNOT READ SCREEN INFO";
            constexpr const char CANNOT_START_SPIFFS[] PROGMEM = "CANNOT START SPIFFS";      
            constexpr const char INVALID_WIFI_MODE[] PROGMEM = "INVALID WIFI MODE";
            constexpr const char CANNOT_SETUP_AP_MODE[] PROGMEM = "CANNOT SETUP AP MODE";
            constexpr const char HTTP_SERVER_IS_BUSY[] PROGMEM = "HTTP SERVER IS BUSY";
            constexpr const char CANNOT_LOAD_SPRINT_SPINNER[] PROGMEM = "CANNOT LOAD SPRINT SPINNER";
            constexpr const char CANNOT_STOP_VIDEO[] PROGMEM = "CANNOT STOP VIDEO";
            constexpr const char A_TASK_IS_ALREADY_RUNNING[] PROGMEM = "A TASK IS ALREADY RUNNING";
            constexpr const char CANNOT_WRITE_ON[] PROGMEM = "CANNOT WRITE ON";
        }

        namespace WebsocketStatus
        {
            constexpr const char CONNECTED[] PROGMEM = "CONNECTED";
            constexpr const char DISCONNECTED[] PROGMEM = "DISCONNECTED";
        }

        namespace Units
        {
            constexpr const char PIXELS[] PROGMEM = "px";
        }
    }
}

namespace Error = Constants::Strings::Error;
namespace status = Constants::Strings::Status;
namespace Message = Constants::Strings::AlignedMessage;
namespace SdCardType = Constants::Strings::sdType;
namespace Title = Constants::Strings::TextTitles;
namespace wbStatus = Constants::Strings::WebsocketStatus;
namespace Notify = Constants::Strings::Notifications;
namespace Unit = Constants::Strings::Units;

#endif // STRINGS_HPP
