#ifndef __OSX__
#define __OSX__

typedef uint8_t byte;
typedef volatile uint32_t RoReg;
typedef volatile uint32_t RwReg;
typedef uint32_t prog_uint32_t;
typedef bool boolean;

extern void *_dummy(int a);

#define digitalPinToPort(pin) (pin)
#define digitalPinToBitMask(pin) (pin)
#define portOutputRegister(pin) _dummy(pin)
#define portSetRegister(pin)
#define portClearRegister(pin)
#define portToggleRegister(pin)
#define portInputRegister(pin) _dummy(pin)
#define portModeRegister(pin)
#define portConfigRegister(pin)
#define digitalPinToPortReg(pin) 
#ifndef pinMode
    #define pinMode(pin, b)
#endif

#define INPUT 0
#define OUTPUT 0
#define F_CPU 100000

extern uint32_t micros();

#endif
