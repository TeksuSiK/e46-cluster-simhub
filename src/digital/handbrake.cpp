#include <globals.h>
#include <digital.h>

void sendHandbrake()
{
    if (g_handbrake)
    {
        digitalWrite(HANDBRAKE_PIN, HIGH);
    }
    else
    {
        digitalWrite(HANDBRAKE_PIN, LOW);
    }
}