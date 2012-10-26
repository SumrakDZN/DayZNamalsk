private["_sound","_pause"];
while {!r_player_dead} do {
	if (round(random 5) == 0) then {
		_sound = "ns_namalsk_coast" + str(round(random 1) + 1);
		_length = getNumber(configFile >> "cfgMusic" >> _sound >> "Duration");
		_pause = ((random 25) + 2) + _length;
	} else {
		_num = round(random 35);
		_sound = "z_suspense_" + str(_num);
		_length = getNumber(configFile >> "cfgMusic" >> _sound >> "Duration");
		_pause = ((random 5) + 2) + _length;
	};

	if (!r_player_unconscious and !r_pitchWhine) then {
		playMusic _sound;
	};
	sleep _pause;
};