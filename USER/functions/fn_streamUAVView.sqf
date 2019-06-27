params ["_uav", "_panel", ["_panelSelection", 0] ["_fov", 0.1], ["_pipEffect", 2]];

/* create render surface */
//_bb = "Land_Billboard_F" createVehicle position player;
_panel setObjectTexture [_panelSelection, "#(argb,512,512,1)r2t(uavrtt,1)"];

/*
// create uav and make it fly
uav = createVehicle ["B_UAV_01_F", _bb modelToWorld [0,100,100], [], 0, "FLY"];
createVehicleCrew uav;
uav lockCameraTo [_bb, [0]];
uav flyInHeight 100;

// add loiter waypoint
_wp = group uav addWaypoint [position _bb, 0];
_wp setWaypointType "LOITER";
_wp setWaypointLoiterType "CIRCLE_L";
_wp setWaypointLoiterRadius 100;
*/

/* create camera and stream to render surface */
private _cam = "camera" camCreate [0,0,0];
_cam cameraEffect ["Internal", "Back", "uavrtt"];

/* attach cam to gunner cam position */
_cam attachTo [_uav, [0,0,0], "PiP0_pos"];
/*
//Attach a target to the cam view angle
private _target = createVehicle ["HeliHEmpty", getPos _uav, [], 0, "FLY"];
_target attachTo [_uav, [0,0,0], "PiP0_dir"];
_cam camSetTarget _target;
*/

/* make it zoom in a little */
_cam camSetFov _fov;

/* switch cam to thermal */
"uavrtt" setPiPEffect [_pipEffect];

/* adjust cam orientation */
[
    missionNamespace,
    "Draw3D",
    {
        _thisArgs params ["_uav", "_cam"];

        _dir = (_uav selectionPosition "PiP0_pos") vectorFromTo (_uav selectionPosition "PiP0_dir");
        _cam setVectorDirAndUp [_dir, _dir vectorCrossProduct [-(_dir select 1), _dir select 0, 0]];
    },
    [_uav, _cam]
] call CBA_fnc_addBISEventHandler;
