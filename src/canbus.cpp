#include <canbus.h>

uint32_t previousCanbus = 0;

void sendCanBus()
{
    uint32_t current = millis();

    if (current - previousCanbus >= 10)
    {
        sendAsc1();
        sendDme1();
        sendDme2();
        sendDme4();

        previousCanbus = current;
    }
}