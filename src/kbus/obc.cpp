#include <globals.h>
#include <kbus.h>

uint8_t frameObc[7] = {0x3b, 0x06, 0x80, 0x40, 0x01, 0x00, 0x00};

void sendObcInput()
{
    frameObc[5] = g_time_hour;
    frameObc[6] = g_time_minute;
    
    ibusTrx.write(frameObc);
}