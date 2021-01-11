#include "cheats.h"
#include "global.h"
#include "colored_cout.h"
#include <string>
#include <sstream>
#include <Windows.h>
#include <filesystem>
#include <iostream>

void SendMessagew(HWND nem, const char* text)
{
	//    PostMessage(nem, WM_KEYUP, VK_RETURN, 0);

	auto len = strlen(text);
	for (int i = 0; i < len; ++i)
		PostMessage(nem, WM_CHAR, text[i], 0);

	//PostMessage(nem, WM_KEYDOWN, VK_RETURN, 0);
}

void run_nemesis()
{
	std::stringstream buffer;
	buffer << globals::startcsgo << std::endl;
	system(buffer.str().c_str());
	system("START G:/Loaders/Nemesis/nemesis.exe");
	std::cout << clr::green << "Have a great time BonzY! \n";

	/*
	const char* CSGO = "1";
	const char* GMOD = "2";
	int selection;
	std::cout << clr::green << "Sit back and wait for injection! \n";
	std::cout << "1: CSGO 2: GMOD" << std::endl;
	std::cin >> selection;
	const char* username = "Never gonna";
	const char* password = "Let you know";
	buffer << globals::startcsgo << std::endl;
	system(buffer.str().c_str());
	system("START G:/Loaders/Nemesis/nemesis_loader.exe");
	HWND nem = 0;
	while (!nem)
	{
		Sleep(100);
		nem = FindWindowA(NULL, "nemesis loader");
	}
	SendMessagew(nem, username);
	Sleep(50);
	PostMessage(nem, WM_KEYDOWN, VK_RETURN, 0);
	Sleep(50);
	PostMessage(nem, WM_KEYUP, VK_RETURN, 0);
	Sleep(50);
	SendMessagew(nem, password);
	Sleep(50);
	PostMessage(nem, WM_KEYDOWN, VK_RETURN, 0);
	Sleep(50);
	PostMessage(nem, WM_KEYUP, VK_RETURN, 0);
	if (selection == 1)
	{
		SendMessagew(nem, CSGO);
		Sleep(50);
		PostMessage(nem, WM_KEYDOWN, VK_RETURN, 0);
		Sleep(50);
		PostMessage(nem, WM_KEYUP, VK_RETURN, 0);
	}
	else if (selection == 2)
	{
		SendMessagew(nem, GMOD);
		Sleep(50);
		PostMessage(nem, WM_KEYDOWN, VK_RETURN, 0);
		Sleep(50);
		PostMessage(nem, WM_KEYUP, VK_RETURN, 0);
	}
	*/
	
}

void run_luminus()
{
	std::stringstream buffer;
	system(globals::killsteamservice);
	system(globals::killsteamwebhelper);
	system(globals::killsteam);
	system(globals::killcsgo);
	buffer << globals::startcsgo << std::endl;
	system("START G:/Loaders/Luminus/load/load.exe");
	std::cout << clr::green << "Game Will Start After 30 seconds";
	Sleep(30000);
	system(buffer.str().c_str());
}

void run_2k17()
{
	std::stringstream buffer;
	buffer << globals::startcsgo << std::endl;
	system(buffer.str().c_str());
	system("START G:/Loaders/2k17/new_loader.exe");

	/*
	std::cout << clr::green << "ONE CLICK INJECT!";
	const char* username = "never gonna";
	const char* password = "let you know";
	const char* selection = "1";

	buffer << globals::startcsgo << std::endl;
	system(buffer.str().c_str());
	system("START G:/Loaders/2k17/new_loader.exe");

	HWND loader = 0;
	while (!loader)
	{
		Sleep(100);
		loader = FindWindowA(NULL, "LOADER");
	}
	SendMessagew(loader, username);
	Sleep(50);
	PostMessage(loader, WM_KEYDOWN, VK_RETURN, 0);
	Sleep(50);
	PostMessage(loader, WM_KEYUP, VK_RETURN, 0);
	Sleep(50);
	SendMessagew(loader, password);
	Sleep(50);
	PostMessage(loader, WM_KEYDOWN, VK_RETURN, 0);
	Sleep(50);
	PostMessage(loader, WM_KEYUP, VK_RETURN, 0);
	SendMessagew(loader, selection);
	Sleep(50);
	PostMessage(loader, WM_KEYDOWN, VK_RETURN, 0);
	Sleep(50);
	PostMessage(loader, WM_KEYUP, VK_RETURN, 0);
	*/
}

void run_evolve()
{
	std::stringstream buffer;
	system(globals::killsteamservice);
	system(globals::killsteamwebhelper);
	system(globals::killsteam);
	system(globals::killcsgo);
	buffer << globals::startcsgo << std::endl;
	system("START G:/Loaders/ev0/Loader/EPfWSp4N.exe");
	std::cout << clr::green << "CS WILL BE STARTED AFTER 15 SECONDS";
	Sleep(15000);
	system(buffer.str().c_str());
}

void run_crep()
{
	std::stringstream buffer, buffer2;
	system(globals::killsteamservice);
	system(globals::killsteamwebhelper);
	system(globals::killsteam);
	system(globals::killcsgo);
	buffer << globals::startsteam << std::endl;
	buffer2 << globals::startcsgo << std::endl;
	system(buffer2.str().c_str());
	std::cout << clr::green << "Loader Will start after 15 seconds";
	Sleep(15000);
	system("START E : / Loaders / Crepsucule / bmPJqHQ87gwR1cclKtrMfj9DZ.exe");
	std::cout << clr::green << "Game Will Start After 12 seconds";
	Sleep(12000);
	system(buffer2.str().c_str());
}

void run_monolith()
{
	std::stringstream buffer, buffer2;
	std::string nameofloader, path = { "G:/Loaders/Monolith" };

	namespace fs = std::filesystem;
	for (const auto& p : fs::recursive_directory_iterator(path))
	{
		nameofloader = p.path().string();
		buffer << nameofloader << std::endl;
		buffer2 << globals::startcsgo << std::endl;
		system(buffer.str().c_str());
		system(buffer2.str().c_str());
	}
}

void run_cr0nus()
{
	std::stringstream buffer;
	system(globals::killsteamservice);
	system(globals::killsteamwebhelper);
	system(globals::killsteam);
	system(globals::killcsgo);
	buffer<<globals::startcsgo << std::endl;
	system("START G:/Loaders/Cr0nus/loader/loader.exe");
	std::cout << clr::green << "Game Will Start After 16 seconds";
	Sleep(16000);
	system(buffer.str().c_str());
}

void run_fatality()
{
	std::stringstream buffer;
	system(globals::killsteamservice);
	system(globals::killsteamwebhelper);
	system(globals::killsteam);
	system(globals::killcsgo);
	buffer << globals::startcsgo << std::endl;
	system("START G:/Loaders/Fatality/loader.exe");
	std::cout << clr::green << "Game Will Start After 15 seconds";
	Sleep(15000);
	system(buffer.str().c_str());
}

void run_skeet()
{
	std::stringstream buffer, buffer2;
	std::string nameofloader, path = { "G:/Loaders/gs" }; //path of loader

	namespace fs = std::filesystem;
	for (const auto& p : fs::recursive_directory_iterator(path))
	{
		nameofloader = p.path().string(); //here goes path
		buffer << nameofloader << std::endl; //here goes the name of the exe in the folder
		buffer2 << globals::startcsgo << std::endl; //command for executing csgo
		system(buffer.str().c_str()); //loader runs
		system(buffer2.str().c_str()); //csgo runs
	}
}

void run_kidua()
{
	std::stringstream buffer;

	system(globals::killsteamservice);
	system(globals::killsteamwebhelper);
	system(globals::killsteam);
	system(globals::killcsgo);

	system("START G:/Loaders/Kidua/!kM14s.exe");
	Sleep(18000);

	buffer << globals::startcsgo << std::endl;
	system(buffer.str().c_str());
}

void run_pureskills()
{
	std::stringstream buffer, buffer2;
	std::string nameofloader;
	std::string path = "G:/Loaders/Pureskills";
	namespace fs = std::filesystem;
	for (const auto& p : fs::recursive_directory_iterator(path))
	{
		nameofloader = p.path().string();
		buffer << nameofloader << std::endl;
		buffer2 << globals::startcsgo << std::endl;
		system(buffer.str().c_str());
		system(buffer2.str().c_str());
	}
}

void run_royalhacks()
{
	std::stringstream buffer;
	system(globals::killsteamservice);
	system(globals::killsteamwebhelper);
	system(globals::killsteam);
	system(globals::killcsgo);
	buffer << globals::startcsgo << std::endl;
	system("START G:/Loaders/RoyalHacks/RH_Client_BonzYYY/N9yTZu4.exe");
	std::cout << clr::green << "Game Will Start After 10 seconds";
	Sleep(10000);
	system(buffer.str().c_str());
}