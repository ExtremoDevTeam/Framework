diag_log "Extremo Client - Playing intro...";

// Play some beats
//playMusic "ExtremoTrack01";
//addMusicEventHandler ["MusicStop", {[] spawn {sleep 10; playMusic "ExtremoTrack01"}}];

// To hide the mini lag between the loops
cutText ["", "BLACK FADED", 69]; 

// No bullshit
enableEnvironment false;
showCinemaBorder false;

// Loop video
while {true} do 
{
	_video = ["Extremo_Assets\video\menu.ogv"] spawn BIS_fnc_playVideo;
	waitUntil {scriptDone _video};
};