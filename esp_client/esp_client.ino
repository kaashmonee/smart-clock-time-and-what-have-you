#include <ESP8266WiFi.h>

// Replace these with your WiFi network settings
const char* ssid = "ESP8266"; //replace this with your WiFi network name
const char* password = "ESP8266Test"; //replace this with your WiFi network password

void setup()
{
  delay(1000);
  Serial.begin(115200);
 
  WiFi.begin(ssid, password);

  Serial.println();
  Serial.print("Connecting");
  while (WiFi.status() != WL_CONNECTED)
  {
    delay(500);
    Serial.print(".");
  }

  Serial.println("success!");
  Serial.print("IP Address is: ");
  Serial.println(WiFi.localIP());
}

void loop() {
}

// There is no wifi and that is most likely why this is broken.
