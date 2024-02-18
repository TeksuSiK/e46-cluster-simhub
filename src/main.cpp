#include <Arduino.h>

#include <configuration.h>
#include <globals.h>
#include <canbus.h>
#include <kbus.h>
#include <digital.h>
#include <serial.h>

MCP_CAN CAN(SPI_CS_PIN);
IbusTrx ibusTrx;

void setup() {
    Serial.begin(SERIAL_BAUD_RATE);

    pinMode(MCP2021_CS_PIN, OUTPUT);
    digitalWrite(MCP2021_CS_PIN, HIGH);

    pinMode(MCP2021_TXE_PIN, OUTPUT);
    digitalWrite(MCP2021_TXE_PIN, HIGH);

    Serial2.begin(9600, SERIAL_8E1);
    ibusTrx.begin(Serial2);

    if (CAN.begin(MCP_ANY, CAN_500KBPS, CAN_CLOCK) == CAN_OK)
    {
        Serial.println("MCP2515 Initialized successfully");
    }

    CAN.setMode(MCP_NORMAL);

    pinMode(SPEEDOMETER_PIN, OUTPUT);

    pinMode(IGNITION_PIN, OUTPUT);
    digitalWrite(IGNITION_PIN, LOW);

    pinMode(BACKLIGHT_PIN, OUTPUT);
    digitalWrite(BACKLIGHT_PIN, LOW);

    pinMode(ABS_PIN, OUTPUT);
    digitalWrite(ABS_PIN, LOW);

    pinMode(OIL_PRESSURE_PIN, OUTPUT);
    digitalWrite(OIL_PRESSURE_PIN, LOW);

    pinMode(CHARGING_PIN, OUTPUT);
    digitalWrite(CHARGING_PIN, LOW);

    pinMode(HANDBRAKE_PIN, OUTPUT);
    digitalWrite(HANDBRAKE_PIN, LOW);
}

void loop() {
    sendCanBus();
    sendKbus();
    sendDigital();
    readSerial();
}