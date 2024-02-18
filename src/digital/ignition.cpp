#include <globals.h>
#include <digital.h>

void sendIgnition()
{
    if (digitalRead(IGNITION_PIN) != g_ignition)
    {
        digitalWrite(IGNITION_PIN, g_ignition);
    }
}