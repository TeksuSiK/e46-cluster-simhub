#include <globals.h>
#include <digital.h>

void sendOilPressure()
{
    if (g_oil_pressure)
    {
        digitalWrite(OIL_PRESSURE_PIN, HIGH);
    }
    else
    {
        digitalWrite(OIL_PRESSURE_PIN, LOW);
    }
}