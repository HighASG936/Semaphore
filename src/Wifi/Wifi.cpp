
#include "Wifi.h"

namespace Controller
{
  unsigned long Wifi::previousMillisWIFI = 0;

  void Wifi::begin(void(*handler)(String))
  {
    Serial.printf("%s%s\n", Message::NETWORK, status::BUSY);
    wifi_mode_t mode = WIFI_MODE;
    
    bool status = ::WiFi.mode(mode);
    if(!status) Serial.println(Error::INVALID_WIFI_MODE);

    if(status == true) 
    {
      bool success = true;
      Serial.printf("\t%s\n", Title::STARTING_AS_AP_MORE);
      if(!startAPMode()) 
      {
          Serial.println(Error::CANNOT_SETUP_AP_MODE);
          status = false;
      }
        // WiFi.softAPsetHostname(HOSTNAME);
        Serial.printf("\t%s %s\n",Title::MAC_ADDRESS , ::WiFi.softAPmacAddress().c_str());
        Serial.printf("\t%s %s\n", Title::HOSTNAME_TITLE, ::WiFi.softAPgetHostname());
    }  
    if(!status) handler(String());
    Serial.printf("%s%s\n", Message::NETWORK, status::OK);  
  }


  bool Wifi::setupStaticIp() 
  {
    //  return ::WiFi.config(local_IP, gateway, subnet); 
    }


  bool Wifi::startAPMode()
  {
    // int max_connection = 1;
    // int channel = 1;
    // bool ssid_hidden = false;
    
    // bool result = ::WiFi.softAP(AP_SSID, AP_PASS, channel, ssid_hidden, max_connection);
    // if(!result) return result;
    // delay(100);
    // Serial.printf("\t%s %s\n", Title::IP_ACCESS_POINT, parser::IPAddressToConstChar(::WiFi.softAPIP()) );
    // return result;
  }


  void Wifi::wifiLoop()
  {
    unsigned long currentMillis = millis();

    if (WiFi.status() != WL_CONNECTED && (currentMillis -  previousMillisWIFI >= 1000))
    {
      ::WiFi.disconnect();
      ::WiFi.reconnect();
      previousMillisWIFI = currentMillis;
    }
  }
}