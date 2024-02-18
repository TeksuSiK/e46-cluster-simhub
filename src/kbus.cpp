#include <globals.h>
#include <kbus.h>

uint32_t previousKbus = 0;

void sendKbus()
{
    sendIndicators();
    sendObcInput();

    //Send messages waiting in buffer
    ibusTrx.available();
}