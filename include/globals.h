#include <mcp_can.h>
#include <IbusTrx.h>
#include <configuration.h>

extern MCP_CAN CAN;
extern IbusTrx ibusTrx;

extern bool g_ignition;

extern bool g_lights_side;
extern bool g_lights_dip;
extern bool g_lights_main;
extern bool g_lights_front_fog;
extern bool g_lights_rear_fog;
extern uint8_t g_lights_indicators;

extern uint16_t g_rpm;
extern uint16_t g_speed;
extern uint8_t g_fuel;

extern uint8_t g_engine_temperature;

extern bool g_abs;
extern bool g_traction_control;
extern bool g_brake_fault;
extern bool g_oil_pressure;
extern bool g_charging;
extern bool g_handbrake;
extern bool g_check_engine;
extern bool g_cruise_control;
extern bool g_dde;
extern bool g_coolant_overheating;