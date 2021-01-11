#include "accountmanager.h"

std::stringstream buffer;
std::string username, password;

void printaccounts()
{
	std::cout << clr::blue << "Will Run CS:GO Aswell cause i'm fucking lazy to make option here (except non prime)\n";
	std::cout <<clr::white << "1) Yuzu\n2) Random Non-prime\n" <<"Choice: " <<clr::red;
}

void loginYuzu()
{
	system(globals::killsteam);
	system(globals::killsteamservice);
	system(globals::killsteamwebhelper);
	system("START \"Steam\" \"C:\\Program Files (x86)\\Steam\\steam.exe\" /min -login username password");
}

void loginaccount2()
{
	system(globals::killsteam);
	system(globals::killsteamservice);
	system(globals::killsteamwebhelper);
	system("START \"Steam\" \"C:\\Program Files (x86)\\Steam\\steam.exe\" /min -login username password");
	system(globals::startcsgo);
}

class Account
{
public:
	Account(std::string user, std::string pass)
	{
		username = user;
		password = pass;
	}
	std::string username;
	std::string password;
};

std::vector<std::string> split(std::string s, std::string delimiter) {
	size_t pos_start = 0, pos_end, delim_len = delimiter.length();
	std::string token;
	std::vector<std::string> res;

	while ((pos_end = s.find(delimiter, pos_start)) != std::string::npos) {
		token = s.substr(pos_start, pos_end - pos_start);
		pos_start = pos_end + delim_len;
		res.push_back(token);
	}

	res.push_back(s.substr(pos_start));
	return res;
}

std::vector<Account> ReadAccounts()
{
	std::vector<Account> ret;

	std::fstream file;
	file.open("c:\\steam.txt", std::fstream::in);


	if (file.is_open())
	{
		std::string line;
		while (std::getline(file, line))
		{
			std::vector<std::string> words = split(line, " ");
			if (words.size() == 2)
				ret.insert(ret.end(), Account(words.at(0), words.at(1)));
		}
		file.close();
	}
	return ret;
}

int loginnonprime()
{
    std::string line;
    std::vector<std::string> lines;
    std::vector<Account> accnts = ReadAccounts();
    srand(time(0));
    //input file stream
    std::ifstream file("C:/nonprime.txt");
    //count number of total lines in the file and store the lines in the string vector
    int total_lines = 0;
    while (getline(file, line))
    {
        total_lines++;
        lines.push_back(line);
    }
    //generate a random number between 0 and count of total lines
    int random_number = rand() % total_lines;
    //fetch the line where line index (starting from 0) matches with the random number
    std::cout << lines[random_number];
    system(globals::killsteam);
    system(globals::killsteamservice);
    system(globals::killsteamwebhelper);
    buffer << globals::startsteamcustomid << accnts.at(random_number).username + " " + accnts.at(random_number).password << '\n';
    system(buffer.str().c_str());
    return 0;
}

DWORD GetProcessIdByName(const wchar_t* szProcess)
{
	HANDLE hSnap = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
	PROCESSENTRY32 PE32 = { 0 };
	PE32.dwSize = sizeof(PROCESSENTRY32);

	if (!szProcess || !hSnap)
		return 0;

	BOOL Ret = Process32First(hSnap, &PE32);
	while (Ret)
	{

		if (!wcscmp(szProcess, PE32.szExeFile))
		{
			CloseHandle(hSnap);
			return PE32.th32ProcessID;
		}
		Ret = Process32Next(hSnap, &PE32);
	}

	CloseHandle(hSnap);

	return 0;
}

DWORD GetProcessCount(const wchar_t* szProcessName)
{
	DWORD dwCount = 0;
	HANDLE hSnap = NULL;
	PROCESSENTRY32 proc32;

	if ((hSnap = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0)) == INVALID_HANDLE_VALUE)
		return -1;

	proc32.dwSize = sizeof(PROCESSENTRY32);
	while ((Process32Next(hSnap, &proc32)) == TRUE)
		if (wcscmp(szProcessName, proc32.szExeFile) == 0)
			++dwCount;

	CloseHandle(hSnap);
	return dwCount;
}

int boost()
{
	std::vector<Account> accounts = ReadAccounts();
	int accountsSize = accounts.size();

    if (!accountsSize)
	{
		std::cout << clr::red << "Text File not found. \n" << clr::white;
		return 0;
	}

	std::cout << clr::red << R"(
        _..._
      .'     '.      _
     /    .-""-\   _/ \
   .-|   /:.   |  |   |
   |  \  |:.   /.-'-./
   | .-'-;:__.'    =/
   .'=  *=|    _.='
  /   _.  |    ;
 ;-.-'|    \   |
/   | \    _\  _\
\__/'._;.  ==' ==\
         \    \   |
         /    /   /
         /-._/-._/
         \   `\  \
          `-._/._/                                                      
)" << '\n';
	//inyekt skeet and count csgo processes.

	std::string username;
	std::string password;
	std::stringstream buffer;
	std::string commandlinestart = "START \"Steam\" \"C:\\Program Files (x86)\\Steam\\steam.exe\" /elevate /min -login ";
	std::string commandlineend = " -applaunch 730 -sw -safe -nosound +cl_forcepreload 1 -novid -low -silent";
	char answer;

	std::cout << clr::green << "accounts detected:" << accounts.size() << std::endl;
	int counter = 0;
	int numSteamInstances = 0;
	for (size_t i = 0; i < accounts.size(); i++)
	{
	//	std::cout << "CSGO Running:  " << GetProcessCount(L"csgo.exe") << '\n';
		system((commandlinestart + accounts.at(i).username + " " + accounts.at(i).password).c_str());
		std::cout << clr::white << ">logged in " << accounts.at(i).username << clr::white << '\n';
		counter++;
		Sleep(15000);
		std::cout << clr::cyan << "Next account in 15 seconds \n" << clr::white;
	}
	std::cout << "Done" << std::endl;
	return 0;
}
