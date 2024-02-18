#include <globals.h>
#include <canbus.h>

const uint32_t CAN_BUS_ID = 0x329;

uint8_t frameDme2[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

void sendDme2()
{
    uint8_t engine_temperature = (g_engine_temperature + 48) / 0.75;
    frameDme2[1] = engine_temperature;

    CAN.sendMsgBuf(CAN_BUS_ID, 8, frameDme2);
}