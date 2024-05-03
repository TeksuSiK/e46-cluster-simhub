#include <globals.h>
#include <serial.h>

void readSerial()
{
    while (Serial.available())
    {
        if (Serial.readStringUntil(';') != "SH")
        {
            continue;
        }

        bool ignition = Serial.readStringUntil(';').toInt();

        bool lights_side = Serial.readStringUntil(';').toInt();
        bool lights_dip = Serial.readStringUntil(';').toInt();
        bool lights_main = Serial.readStringUntil(';').toInt();
        bool lights_front_fog = Serial.readStringUntil(';').toInt();
        bool lights_rear_fog = Serial.readStringUntil(';').toInt();
        uint8_t lights_indicators = Serial.readStringUntil(';').toInt();
        bool lights_ccm_display = Serial.readStringUntil(';').toInt();
        bool lights_ccm_low_left = Serial.readStringUntil(';').toInt();
        bool lights_ccm_low_right = Serial.readStringUntil(';').toInt();
        bool lights_ccm_brake_left = Serial.readStringUntil(';').toInt();
        bool lights_ccm_brake_right = Serial.readStringUntil(';').toInt();

        uint16_t rpm = Serial.readStringUntil(';').toInt();
        uint16_t speed = Serial.readStringUntil(';').toInt();
        uint8_t fuel = Serial.readStringUntil(';').toInt();

        uint8_t engine_temperature = Serial.readStringUntil(';').toInt();

        bool abs = Serial.readStringUntil(';').toInt();
        bool traction_control = Serial.readStringUntil(';').toInt();
        bool brake_fault = Serial.readStringUntil(';').toInt();
        bool oil_pressure = Serial.readStringUntil(';').toInt();
        bool charging = Serial.readStringUntil(';').toInt();
        bool handbrake = Serial.readStringUntil(';').toInt();
        bool check_engine = Serial.readStringUntil(';').toInt();
        bool cruise_control = Serial.readStringUntil(';').toInt();
        bool dde = Serial.readStringUntil(';').toInt();
        bool coolant_overheating = Serial.readStringUntil(';').toInt();

        String noop = Serial.readStringUntil('\n');

        g_ignition = ignition;

        g_lights_side = lights_side;
        g_lights_dip = lights_dip;
        g_lights_main = lights_main;
        g_lights_front_fog = lights_front_fog;
        g_lights_rear_fog = lights_rear_fog;
        g_lights_indicators = lights_indicators;
        g_lights_ccm_display = lights_ccm_display;
        g_lights_ccm_low_left = lights_ccm_low_left;
        g_lights_ccm_low_right = lights_ccm_low_right;
        g_lights_ccm_brake_left = lights_ccm_brake_left;
        g_lights_ccm_brake_right = lights_ccm_brake_right;

        g_rpm = rpm;
        g_speed = speed;
        g_fuel = fuel;

        g_engine_temperature = engine_temperature;

        g_abs = abs;
        g_traction_control = traction_control;
        g_brake_fault = brake_fault;
        g_oil_pressure = oil_pressure;
        g_charging = charging;
        g_handbrake = handbrake;
        g_check_engine = check_engine;
        g_cruise_control = cruise_control;
        g_dde = dde;
        g_coolant_overheating = coolant_overheating;
    }
}