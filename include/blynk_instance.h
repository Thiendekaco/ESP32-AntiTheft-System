#pragma once
  #ifndef BLYNK_INSTANCE_H
  #define BLYNK_INSTANCE_H

// Prevent the Blynk header from declaring its own global instance so we
// can provide one manually in a single .cpp file.
#ifndef NO_GLOBAL_BLYNK
#define NO_GLOBAL_BLYNK
#endif


  #include <BlynkSimpleEsp32.h>

// Shared Blynk object used across the application.  The instance is
// defined in blynk_instance.cpp.
  extern BlynkWifi Blynk;

 #endif // BLYNK_INSTANCE_H