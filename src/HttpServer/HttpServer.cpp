
#include <HttpServer.h>

    /**
     * @brief 
     * 
     */
    ArRequestHandlerFunction HttpServer::Home = 
        [](AsyncWebServerRequest *request){
        // File file = sd::open("/index.html");

        String data;

        // if (file)
        // {
        //     file.setTimeout(TIME_OUT_FILE);
        //     data = file.readString();
        //     file.close();
        //     if (request->hasArg("data"))
        //     {
        //     lastMessage = request->arg("data");
        //     }

        //     float temp = temperatureRead();
        //     lastMessage = String(temp) + " °C";

        //     data.replace("#data#", lastMessage);
        //     request->send(200, "text/html", data);
        // }
        // else
        // {
        //     request->send(404, "text/html", Error::FILE_NOT_FOUND);
        // }
        };


    /**
     * @brief 
     * 
     */
    ArRequestHandlerFunction HttpServer::NotFound = 
    [](AsyncWebServerRequest *request)
    {
        String data;
        // File file = sd::open("/error404.html");

        // if (file)
        // {
        // file.setTimeout(TIME_OUT_FILE);
        // data = file.readString();
        // file.close();
        // request->send(404, "text/html", data);
        // }
    };

  bool HttpServer::loadStaticFiles()
  {  
    for(const char *uri : Uris::URIS)
    {
      if(uri == NULL)
      {
        Serial.printf("%s\n\t%s\n", status::ERROR, Error::CANNOT_LOAD_STATIC_FILES);
        return false;
      }

      // AsyncStaticWebHandler handleSetStaticFiles = server.serveStatic(uri, sd::SD, uri);
      // handleSetStaticFiles.setDefaultFile(uri); 
      // handleSetStaticFiles.setCacheControl("max-age=600");
    }
    return true;
  }

  /**
   * @brief Initialize Server
   */
  void HttpServer::begin()
  {
    Serial.printf("%s%s\n", Message::SERVER, status::BUSY);

    // Try to load static files
    Serial.printf("\t%s\n", Notify::LOADING_STATIC_FILES);
    if(!loadStaticFiles()) return;

    Serial.printf("\t%s\n", Notify::SETTING_UP_SERVER);
    
    // Load home page
    // server.on("/", HTTP_GET, Home);

    // Error 404
    // server.onNotFound(NotFound);

  }
