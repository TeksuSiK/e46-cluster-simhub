var ignition = $prop('EngineIgnitionOn');

var lights_side = ignition;
var lights_dip = 0;
var lights_main = 0;
var lights_front_fog = 0;
var lights_rear_fog = 0;

var lights_indicators = 0;

var lights_ccm_display = 0;
var lights_ccm_low_left = 0;
var lights_ccm_low_right = 0;
var lights_ccm_brake_left = 0;
var lights_ccm_brake_right = 0;

var rpm = Math.round($prop('Rpms'));
var speed = Math.round($prop('SpeedKmh'));
var fuel = 0;

var engine_temperature = $prop('TyresTemperatureAvg');

var abs = Number($prop('ABSLevel') == 0);
var traction_control = Number($prop('TCLevel') == 0);
var brake_fault = Number($prop('ABSLevel') == 0);
var oil_pressure = 0;
var charging = 0;
var handbrake = 0;
var check_engine = 0;
var cruise_control = 0;
var dde = 0;
var coolant_overheating = 0;

return `SH;${ignition};${lights_side};${lights_dip};${lights_main};${lights_front_fog};${lights_rear_fog};${lights_indicators};${lights_ccm_display};${lights_ccm_low_left};${lights_ccm_low_right};${lights_ccm_brake_left};${lights_ccm_brake_right};${rpm};${speed};${fuel};${engine_temperature};${abs};${traction_control};${brake_fault};${oil_pressure};${charging};${handbrake};${check_engine};${cruise_control};${dde};${coolant_overheating};\n`