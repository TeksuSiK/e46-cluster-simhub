#include <globals.h>
#include <digital.h>

void sendCharging()
{
    if (g_charging)
    {
        digitalWrite(CHARGING_PIN, HIGH);
    }
    else
    {
        digitalWrite(CHARGING_PIN, LOW);
    }
}