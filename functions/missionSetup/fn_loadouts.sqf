/*  Sets factions for grad-loadout
*
*/

#include "component.hpp"

private _loadoutFactionBlu = [missionConfigFile,"loadoutFactionBlu",""] call BIS_fnc_returnConfigEntry;
private _loadoutFactionOpf = [missionConfigFile,"loadoutFactionOpf",""] call BIS_fnc_returnConfigEntry;
private _loadoutFactionInd = [missionConfigFile,"loadoutFactionInd",""] call BIS_fnc_returnConfigEntry;
private _loadoutFactionCiv = [missionConfigFile,"loadoutFactionCiv",""] call BIS_fnc_returnConfigEntry;

if (_loadoutFactionBlu != "") then {
    ["BLU_F", _loadoutFactionBlu] call GRAD_Loadout_fnc_FactionSetLoadout;
};
if (_loadoutFactionOpf != "") then {
    ["OPF_F", _loadoutFactionOpf] call GRAD_Loadout_fnc_FactionSetLoadout;
    ["OPF_T_F", "LevoniaSpecialForces"] call GRAD_Loadout_fnc_FactionSetLoadout;
};
if (_loadoutFactionInd != "") then {
    ["IND_F", _loadoutFactionInd] call GRAD_Loadout_fnc_FactionSetLoadout;
};

if (_loadoutFactionCiv != "") then {
    ["CIV_F", _loadoutFactionCiv] call GRAD_Loadout_fnc_FactionSetLoadout;
};

GRAD_loadoutFactionSet = true;
