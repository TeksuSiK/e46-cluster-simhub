#include <globals.h>
#include <canbus.h>

const uint32_t CAN_BUS_ID = 0x316;

uint8_t frameDme1[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

void sendDme1()
{
    uint8_t rpm = map(g_rpm, 0, 7000, 0, 175);
    frameDme1[3] = rpm;

    CAN.sendMsgBuf(CAN_BUS_ID, 8, frameDme1);
}