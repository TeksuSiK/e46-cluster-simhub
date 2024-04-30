#include <globals.h>

bool g_ignition = false;

bool g_lights_side = false;
bool g_lights_dip = false;
bool g_lights_main = false;
bool g_lights_front_fog = false;
bool g_lights_rear_fog = false;
uint8_t g_lights_indicators = 0;

uint16_t g_rpm = 0;
uint16_t g_speed = 0;
uint8_t g_fuel = 0;

uint8_t g_engine_temperature = 0;

bool g_abs = false;
bool g_traction_control = false;
bool g_brake_fault = false;
bool g_oil_pressure = false;
bool g_charging = false;
bool g_handbrake = false;
bool g_check_engine = false;
bool g_cruise_control = false;
bool g_dde = false;
bool g_coolant_overheating = false;