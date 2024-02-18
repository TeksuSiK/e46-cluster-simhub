#include <globals.h>
#include <digital.h>

void sendSpeed()
{
    if (g_speed == 0)
    {
        noTone(SPEEDOMETER_PIN);
    }
    else
    {
        uint16_t speed = map(g_speed, 0, 250, 0, 1680);
        tone(SPEEDOMETER_PIN, speed);
    }
}