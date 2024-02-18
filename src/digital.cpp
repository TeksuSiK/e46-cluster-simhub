#include <digital.h>

void sendDigital()
{
    sendIgnition();
    sendBacklight();
    sendSpeed();
    sendAbs();
    sendCharging();
    sendHandbrake();
    sendOilPressure();
}