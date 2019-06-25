if (didJIP) then {
    [player] remoteExec ["grad_common_fnc_addJipToZeus",2,false];
};

["InitializePlayer", [player,true]] call BIS_fnc_dynamicGroups;
grad_template_ratingEH = player addEventHandler ["HandleRating",{0}];

["CBA_loadingScreenDone", {
    if (!(didJIP) || {(didJIP && !(isNil "GRAD_USER_introOver"))}) then {
        [{time > (_this + 3)},{
            //if (isNull (getAssignedCuratorLogic ace_player)) then {
                STHud_UIMode = 0;
                diwako_dui_main_toggled_off = true;
                if (isNil "grad_user_openWelldeck") then {
                    grad_user_openWelldeck = true;
                    publicVariable "grad_user_openWelldeck";
                };
                ["Mediterranean", "LeadTrack01_F_Tank"] call GRAD_USER_fnc_intro;
            //};
        },time] call CBA_fnc_waitUntilAndExecute;
    };
}] call CBA_fnc_addEventHandler;
