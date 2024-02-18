#include <globals.h>
#include <canbus.h>
#include <lights.h>

const uint32_t CAN_BUS_ID = 0x545;

uint8_t frameDme4[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

void sendDme4()
{
    uint8_t dme4 = 0;

    if (g_check_engine)
    {
        dme4 |= CHECK_ENGINE;
    }

    if (g_cruise_control)
    {
        dme4 |= CRUISE_CONTROL;
    }

    if (g_dde)
    {
        dme4 |= DDE_LIGHT;
    }

    frameDme4[0] = dme4;

    if (g_coolant_overheating)
    {
        frameDme4[3] = 0x08;
    }
    else
    {
        frameDme4[3] = 0x00;
    }

    CAN.sendMsgBuf(CAN_BUS_ID, 8, frameDme4);
}