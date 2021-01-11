#include "colored_cout.h"
#include <iostream>
#include "ServerMenu.h"

void print_menuserver()
{
    system("cls");
    std::cout << clr::red << R"(
                                                 
                _   _               
     /\        | | (_)              
    /  \  _   _| |_ _ ___ _ __ ___  
   / /\ \| | | | __| / __| '_ ` _ \ 
  / ____ \ |_| | |_| \__ \ | | | | |
 /_/    \_\__,_|\__|_|___/_| |_| |_|                                                                                                      
                                                               
)" << '\n';

    std::cout << "Join A HvH Server?" << '\n';
    std::cout << clr::white << "1) Private" << '\n';
    std::cout << clr::green << "2) Public India" << '\n';
    std::cout << clr::green << "3) Public Asia" << '\n';
    std::cout << clr::yellow << "4) Public Europe" << '\n';
    std::cout << clr::red << "5) Public NA" << '\n';

}

void print_private()
{
    system("cls");
    std::cout << clr::red << "1] Wingman" << '\n';
}

void print_india()
{
    system("cls");
    std::cout << "2] Indian HvH Alpha" << '\n';
    std::cout << clr::white << "3] Indian HvH Beta" << '\n';
    std::cout << clr::green << "4] Indian HvH Delta" << '\n';
    std::cout << clr::green << "5] Indian HvH Gamma" << '\n';
    std::cout << clr::green << "6] Rage.pub India" << '\n';
}

void print_asia()
{
    system("cls");
    std::cout << "7] Rage.pub SGP" << '\n';
    std::cout << clr::white << "8] Ramen" << '\n';
    std::cout << clr::green << "9] Shushi [16k]" << '\n';
}

void print_eu()
{
    system("cls");
    std::cout << clr::white << "10] CT-HOOK ALL MAPS" << '\n';
    std::cout << clr::green << "11] Rifk7 HvH Server" << '\n';
    std::cout << clr::green << "12] Rantie$ Mirage Only" << '\n';
}

