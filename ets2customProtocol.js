var ignition = Number($prop('GameRawData.TruckValues.CurrentValues.ElectricEnabled'));

var lights_side = Number($prop('GameRawData.TruckValues.CurrentValues.LightsValues.Parking'));
var lights_dip = Number($prop('GameRawData.TruckValues.CurrentValues.LightsValues.BeamLow'));
var lights_main = Number($prop('GameRawData.TruckValues.CurrentValues.LightsValues.BeamHigh'));
var lights_front_fog = Number($prop('GameRawData.TruckValues.CurrentValues.LightsValues.Beacon'));
var lights_rear_fog = 0;

var lights_indicators;
if ($prop('TruckSimulatorPlugin.Lights.HazardWarningOn')) {
    lights_indicators = 3;
} else if ($prop('GameRawData.TruckValues.CurrentValues.LightsValues.BlinkerLeftActive')) {
    lights_indicators = 1;
} else if ($prop('GameRawData.TruckValues.CurrentValues.LightsValues.BlinkerRightActive')) {
    lights_indicators = 2;
} else {
    lights_indicators = 0;
}

var rpm = Math.round($prop('Rpms'));
var speed = Math.round($prop('SpeedKmh'));
var fuel = 0;

var engine_temperature = Math.round($prop('WaterTemperature'));

var abs = 0;
var traction_control = 0;
var brake_fault = Number($prop('GameRawData.TruckValues.CurrentValues.DashboardValues.WarningValues.AirPressure'));;
var oil_pressure = Number($prop('GameRawData.TruckValues.CurrentValues.DashboardValues.WarningValues.OilPressure'));
var charging = Number($prop('GameRawData.TruckValues.CurrentValues.DashboardValues.WarningValues.BatteryVoltage'));
var handbrake = Number($prop('GameRawData.TruckValues.CurrentValues.MotorValues.BrakeValues.ParkingBrake'));
var check_engine = Number($prop('TruckSimulatorPlugin.Damage.WearWarning'));
var cruise_control = Number($prop('GameRawData.TruckValues.CurrentValues.DashboardValues.CruiseControl'));
var dde = Number($prop('TruckSimulatorPlugin.Engine.Starting'));
var coolant_overheating = Number($prop('GameRawData.TruckValues.CurrentValues.DashboardValues.WarningValues.WaterTemperature'));

return `SH;${ignition};${lights_side};${lights_dip};${lights_main};${lights_front_fog};${lights_rear_fog};${lights_indicators};${rpm};${speed};${fuel};${engine_temperature};${abs};${traction_control};${brake_fault};${oil_pressure};${charging};${handbrake};${check_engine};${cruise_control};${dde};${coolant_overheating};\n`