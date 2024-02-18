var ignition = $prop('EngineIgnitionOn');

var lights_side = ignition;
var lights_dip = 0;
var lights_main = 0;
var lights_front_fog = 0;
var lights_rear_fog = 0;

var lights_indicators = 0;

var rpm = Math.round($prop('Rpms'));
var speed = Math.round($prop('SpeedKmh'));
var fuel = 0;

var engine_temperature = $prop('TyresTemperatureAvg');

var abs = Number($prop('ABSLevel') == 0);
var oil_pressure = 0;
var charging = 0;
var handbrake = 0;
var check_engine = 0;
var cruise_control = 0;
var dde = 0;
var coolant_overheating = 0;

var currentTime = new Date();
var hour = currentTime.getHours();
var minute = currentTime.getMinutes();

return `SH;${ignition};${lights_side};${lights_dip};${lights_main};${lights_front_fog};${lights_rear_fog};${lights_indicators};${rpm};${speed};${fuel};${engine_temperature};${abs};${oil_pressure};${charging};${handbrake};${check_engine};${cruise_control};${dde};${coolant_overheating};${hour};${minute};\n`