#include <globals.h>
#include <canbus.h>

const uint32_t CAN_BUS_ID = 0x153;

uint8_t frameAsc1[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

void sendAsc1()
{
    if (g_abs)
    {
        frameAsc1[0] = 0xFF;
        frameAsc1[1] = 0xFF;
    }
    else
    {
        frameAsc1[0] = 0x00;
        frameAsc1[1] = 0x00;
    }

    CAN.sendMsgBuf(CAN_BUS_ID, 8, frameAsc1);
}