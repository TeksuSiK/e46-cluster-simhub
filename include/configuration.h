#pragma once

#include <mcp_can.h>

const uint32_t SERIAL_BAUD_RATE = 115200;

const int CAN_CLOCK = MCP_8MHZ;
const int SPI_CS_PIN = 53;

const int MCP2021_CS_PIN = 48;
const int MCP2021_TXE_PIN = 49;

const int SPEEDOMETER_PIN = 29;
const int IGNITION_PIN = 3;
const int BACKLIGHT_PIN = 4;

const int ABS_PIN = 30;
const int OIL_PRESSURE_PIN = 31;
const int CHARGING_PIN = 32;
const int HANDBRAKE_PIN = 33;