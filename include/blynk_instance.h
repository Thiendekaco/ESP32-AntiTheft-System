#ifndef BLYNK_INSTANCE_H
#define BLYNK_INSTANCE_H

// When including this header from regular modules, ensure the Blynk
// library does not create its own global instance. Only the implementation
// file defines the object by defining BLYNK_INSTANCE_IMPLEMENTATION.
#ifndef BLYNK_INSTANCE_IMPLEMENTATION
#ifndef BLYNK_NO_GLOBAL
#define BLYNK_NO_GLOBAL
#endif
#endif

#include <BlynkSimpleEsp32.h>

// Shared Blynk object used across the application
extern BlynkWifi Blynk;

#endif // BLYNK_INSTANCE_H