#include <globals.h>
#include <kbus.h>
#include <lights.h>

uint8_t frameIndicators[9] = {0xD0, 0x07, 0xBF, 0x5B, 0x00, 0x00, 0x00, 0x00};

void sendIndicators()
{
    uint8_t indicators1 = 0;

    if (g_lights_side)
    {
        indicators1 |= PARKING;
    }

    if (g_lights_dip)
    {
        indicators1 |= BEAM_LOW;
    }

    if (g_lights_main)
    {
        indicators1 |= BEAM_HIGH;
    }

    if (g_lights_front_fog)
    {
        indicators1 |= FOG_FRONT;
    }

    if (g_lights_rear_fog)
    {
        indicators1 |= FOG_REAR;
    }

    if (g_lights_indicators == 1)
    {
        indicators1 |= TURN_LEFT;
    }
    else if (g_lights_indicators == 2)
    {
        indicators1 |= TURN_RIGHT;
    }
    else if (g_lights_indicators == 3)
    {
        indicators1 |= TURN_LEFT;
        indicators1 |= TURN_RIGHT;
    }

    frameIndicators[4] = indicators1;

    ibusTrx.write(frameIndicators);
}