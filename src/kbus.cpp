#include <globals.h>
#include <kbus.h>

uint32_t previousKbus = 0;

uint8_t xor_checksum(uint8_t *data, uint8_t length)
{
    uint8_t checksum = 0;
    for (byte i = 0; i < length; i++)
    {
        checksum = checksum ^ data[i];
    }

    return checksum;
}

void sendKbusBuf(byte *data)
{
    int length = data[1] + 2;
    data[length - 1] = xor_checksum(data, length - 1);

    Serial2.write(data, length + 1);
}

void sendKbus()
{
    sendIndicators();
    //sendObcInput();

    //Send messages waiting in buffer
    //ibusTrx.available();
}