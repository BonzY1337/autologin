#include "global.h"

namespace globals
{
	const char* killsteamservice = "taskkill/f /im SteamService.exe";
	const char* killsteamwebhelper = "taskkill/f /im steamwebhelper.exe";
	const char* killsteam = "taskkill/f /im Steam.exe";
	const char* killcsgo = "taskkill /f /im csgo.exe";
	const char* startcsgo = "START \"Steam\" \"C:\\Program Files (x86)\\Steam\\steam.exe\" /min -applaunch 730";
	const char* startsteamcustomid = "START \"Steam\" \"C:\\Program Files (x86)\\Steam\\steam.exe\" /min -login ";
	const char* startsteam = "START \"Steam\" \"C:\\Program Files (x86)\\Steam\\steam.exe\" /min ";
}