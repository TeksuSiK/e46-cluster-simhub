#include <Arduino.h>

uint8_t xor_checksum(uint8_t *data, uint8_t length);

void sendKbus();
void sendKbusBuf(byte *data);

void sendIndicators();
void sendObcInput();