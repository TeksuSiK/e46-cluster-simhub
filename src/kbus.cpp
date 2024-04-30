#include <globals.h>
#include <kbus.h>

uint32_t previousKbus = 0;

void sendKbus()
{
    sendIndicators();
    ibusTrx.available();
}