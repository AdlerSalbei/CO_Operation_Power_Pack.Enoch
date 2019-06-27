params ["_uav", "_panel", "_target", ["_panelSelection", 0], ["_fov", 0.1], ["_pipEffect", 2]];

/* create render surface */
_panel setObjectTexture [_panelSelection, "#(argb,512,512,1)r2t(uavrtt,1)"];

/* create camera and stream to render surface */
private _cam = "camera" camCreate [0,0,0];
_cam cameraEffect ["Internal", "Back", "uavrtt"];
_cam camSetTarget _target;

/* attach cam to gunner cam position */
_cam attachTo [_uav, [0,0,0], "PiP0_pos"];

/* make it zoom in a little */
_cam camSetFov _fov;

/* switch cam to thermal */
"uavrtt" setPiPEffect [_pipEffect];

_cam camCommit 0.2;

/* adjust cam orientation */
["ChangeCamUAV", {
    _thisArgs params ["_uav", "_panel", "_cam"];

    if (isNull _uav || {isNull _panel}) exitWith {
        [_thisType, _thisId] call CBA_fnc_removeEventHandler;
    };

    _this params ["_target", "_fov", "_pipEffect", ["_commitTime", 1]];
    _cam camSetTarget _target;
    _cam camSetFov _fov;
    "uavrtt" setPiPEffect [_pipEffect];
    _cam camCommit _commitTime;

}, [_uav, _panel, _cam]] call CBA_fnc_addEventHandlerArgs;
