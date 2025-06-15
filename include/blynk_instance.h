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

#ifdef BLYNK_INSTANCE_IMPLEMENTATION
// In the implementation file we let the library create the global object
// by including the header without BLYNK_NO_GLOBAL defined.
#else
// Other modules only reference the instance defined elsewhere
extern BlynkWifi Blynk;
#endif


#endif // BLYNK_INSTANCE_H