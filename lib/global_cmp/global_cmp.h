#ifndef GLOBAL_CMP
#define GLOBAL_CMP

#include <Arduino.h>
#include <WiFi.h>

//$ ESP32 Pinout
#define BLUE_LED 12
#define ORANGE_LED 13
#define GREEN_LED 14
#define SCL_PIN 21
#define SDA_PIN 22

#define LAMP_COUNT 255
#define PLUG_COUNT 255
#define SOCKET_COUNT 5
#define SENSOR_COUNT 255

//$ Firebase Address
#define API_KEY "AIzaSyBmp6mQthJY_3AZcA-PF0wtMPkm-SgDgEo"
#define DATABASE_URL \
  "https://"         \
  "home-automation-eee43-default-rtdb.asia-southeast1.firebasedatabase.app/"
#define USER_EMAIL "hardware@alive.me"
#define USER_PASSWORD \
  "V2hhdCBhcmUgeW91IGxvb2tpbmcgZm9yIGJ1ZGR5PwotIE1lcnphIEJvbGl2YXI="

//* Firebase Write Location
extern String lampLoc;
extern String sensorLoc;
extern String plugLoc;
extern String currentLightReading;
extern String currentMovementReading;
extern String currentMoistureReading;

extern unsigned long prevMovementMillis;
extern unsigned long interval;
extern unsigned long prevInterval;
extern bool hasExtended;

String getValue(String data, char separator, int index);

#endif