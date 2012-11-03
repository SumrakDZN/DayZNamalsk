if (isServer) then {
	waitUntil{dayz_preloadFinished};
};
_id = [] execFSM "\nst\ns_dayz\code\system\player_monitor.fsm";