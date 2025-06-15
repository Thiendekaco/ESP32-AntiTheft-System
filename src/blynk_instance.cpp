#define BLYNK_PRINT Serial

// Only this translation unit should create the global Blynk object. All other
// modules include `blynk_instance.h` which defines `BLYNK_NO_GLOBAL` to prevent
// the Blynk library from declaring its own instance.  Here we explicitly remove
// that define and mark this file as the implementation unit.
#define BLYNK_INSTANCE_IMPLEMENTATION
#ifdef BLYNK_NO_GLOBAL
#undef BLYNK_NO_GLOBAL
#endif
#include "blynk_instance.h"