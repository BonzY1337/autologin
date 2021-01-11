#include "menu.h"
#include "colored_cout.h"
#include <iostream>

void print_menu()
{
   
    std::cout << clr::red << R"(
____     ___              _                     ____   
`Mb(     )d'             dM.                   6MMMMb/ 
 YM.     ,P             ,MMb                  8P    YM 
 `Mb     d'             d'YM.                6M      Y 
  YM.   ,P             ,P `Mb                MM        
  `Mb   d'             d'  YM.               MM        
   YM. ,P             ,P   `Mb               MM        
   `Mb d'             d'    YM.              MM        
    YM,P             ,MMMMMMMMb              YM      6 
    `MM'             d'      YM.              8b    d9 
     YP            _dM_     _dMM_              YMMMM9                                                      
)" << '\n';

    std::cout << "Welcome Back BonzY" << '\n';
    std::cout << clr::white << "1) Nemesis" << '\n';
    std::cout << "2) Luminus" << '\n';
    std::cout << "3) Monolith" << '\n';
    std::cout << "4) 2k17" << '\n';
    std::cout << "5) Skeet" << '\n';
    std::cout << "Choice: " << clr::red;
}
