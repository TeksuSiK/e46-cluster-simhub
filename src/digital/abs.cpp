#include <globals.h>
#include <digital.h>

void sendAbs()
{
    if (g_abs)
    {
        digitalWrite(ABS_PIN, LOW);
    }
    else
    {
        digitalWrite(ABS_PIN, HIGH);
    }
}