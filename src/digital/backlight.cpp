#include <globals.h>
#include <digital.h>

void sendBacklight()
{
    if (digitalRead(BACKLIGHT_PIN) != g_lights_side)
    {
        digitalWrite(BACKLIGHT_PIN, g_lights_side);
    }
}