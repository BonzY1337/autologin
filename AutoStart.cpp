#include <sstream>
#include <fstream>
#include <iostream>
#include <string>
#include <iomanip>
#include "colored_cout.h"
#include "cheats.h"
#include "global.h"
#include "menu.h"
#include "ServerMenu.h"
#include "joinserver.h"
#include "experimental.h"
#include "accountmanager.h"

int main()
{
	std::stringstream buffer;
	std::string username, password , line, ping;
	int id, option;
	std::cout << clr::white << "1) New Steam ID\n" << "2) Last Used Id\n" << "3) Pre logged in ID\n" << "4) Kill CSGO\n" <<"5) Kill Steam\n6) Experimental\n7) Account Manager\n8) Boosting Mode Bitches!\n"<< "Choice: "<<clr::red;
	std::cin >> id;
	switch (id)
	{
	case 1:
		std::cout << clr::green << "CUSTOM ID SELECTED\n";
		std::cout << "Enter Username and password with space: ";
		std::cin >> username >> password;
		system(globals::killsteamservice);
		system(globals::killsteamwebhelper);
		system(globals::killsteam);
		system(globals::killcsgo);
		{
			std::ofstream userpasswrite{ "C:/credentials.txt" };
			userpasswrite << username << " " << password << std::endl;
			userpasswrite.close();
		}
		buffer << globals::startsteamcustomid << username << " " << password << '\n';
		system(buffer.str().c_str());
		break;
	case 2:
	{
		std::cout << clr::green << "Last logged in ID Selected\n";
		system(globals::killsteamservice);
		system(globals::killsteamwebhelper);
		system(globals::killsteam);
		system(globals::killcsgo);
		std::ifstream userpassread{ "C:/credentials.txt" };
		std::getline(userpassread, line);
		userpassread.close();
		buffer << globals::startsteamcustomid << line << '\n';
		system(buffer.str().c_str());
	}
	break;
	case 3:
		std::cout << clr::green << "Pre-Logged in ID Selected\n";
		break;
	case 4:
		system(globals::killcsgo);
		break;
	case 5:
		system(globals::killsteamservice);
		system(globals::killsteamwebhelper);
		system(globals::killsteam);
		system(globals::killcsgo);
		break;
	case 6:
		timer();
		break;
	case 7:
		printaccounts();
		std::cin >> id;
		switch (id)
		{
		case 1:
			loginYuzu();
			globals::startcsgo;
			break;
		case 2:
			loginnonprime();
			globals::startcsgo;
			break;
	//	case 3:
		//	loginnonprime();
			//break;
		}
		break;
	case 8:
	{
		boost();
		exit(0);
	}
	}

	if (id < 7)
	print_menu();

	std::cin >> option;
	switch (option)
	{
	case 1:
		run_nemesis();
		break;
	case 2:
		run_luminus();
		break;
	case 3:
		run_monolith();
		break;
	case 4:
		run_2k17();
		break;
	case 5:
		run_skeet();
		break;
	default:
		std::cout << "Invalid Choice\n";
		system("pause");
	}

/*
	print_menuserver();
	std::cin >> option;
	switch (option)
	{
	case 1:
		print_private();
		break;
	case 2:
		print_india();
		break;
	case 3:
		print_asia();
		break;
	case 4:
		print_eu();
		break;
	default:
		std::cout << "Invalid Choice\n";
	}

	std::cin >> option;
	switch (option)
	{
	case 1:
		join_privatewingman();
		break;
	case 2:
		join_indianhvhalpha();
		break;
	case 3:
		join_indianhvhbeta();
		break;
	case 4:
		join_indianhvhdelta();
		break;
	case 5:
		join_indianhvhgamma();
		break;
	case 6:
		join_ragepubindia();
		break;
	case 7:
		join_ragepubsgp;
		break;
	case 8:
		join_Ramen();
		break;
	case 9:
		join_shushi();
		break;
	case 10:
		join_cthook();
		break;
	case 11:
		join_r7server();
		break;
	case 12:
		join_rantie$();
		break;
	default:
		std::cout << "Invalid Choice\n";
	}
	*/
	return 0;
}