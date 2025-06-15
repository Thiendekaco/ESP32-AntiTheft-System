
  #define BLYNK_PRINT Serial

// This file provides the single global Blynk instance for the entire
// project.  All other modules include `blynk_instance.h` which keeps the
// library from defining its own object.
 #include "blynk_instance.h"

// Replicate the default objects normally created by the Blynk header but
// keep them local to this translation unit.
static WiFiClient blynkWiFiClient;
static BlynkArduinoClient blynkTransport(blynkWiFiClient);
