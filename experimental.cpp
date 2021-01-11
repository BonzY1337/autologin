#include <stdio.h>
#include <iostream>
#include <iomanip>
#include "experimental.h"
#include <string>
#include <sstream>
#include <stdlib.h>
#include <Windows.h>
#include <fstream>
#include <cstdlib>

int minutes = 0;
int seconds = 0;
int miliseconds = 0;

void tp()
{
	std::fstream file;
	file.open("CC:\\Users\\bonzy\\Desktop\\zz.txt", std::fstream::in);
	file << R"(
"AppState"
{
	"appid"		"730"
	"Universe"		"1"
	"name"		"Counter-Strike: Global Offensive"
	"StateFlags"		"4"
	"installdir"		"Counter-Strike Global Offensive"
	"LastUpdated"		"1607414828"
	"UpdateResult"		"0"
	"SizeOnDisk"		"26271509111"
	"buildid"		"5934988"
	"LastOwner"		"76561198326921215"
	"BytesToDownload"		"0"
	"BytesDownloaded"		"39061920"
	"AutoUpdateBehavior"		"0"
	"AllowOtherDownloadsWhileRunning"		"0"
	"ScheduledAutoUpdate"		"0"
	"InstalledDepots"
	{
		"732"
		{
			"manifest"		"8813457789028551665"
			"size"		"365189915"
		}
		"731"
		{
			"manifest"		"5195564625494029787"
			"size"		"25906319196"
		}
		"735"
		{
			"manifest"		"3867231304834558645"
			"size"		"0"
		}
	}
	"UserConfig"
	{
		"language"		"english"
	}
}

)";
	file.close();
}

void displayclock()
{
    using namespace std;
	cout << setfill(' ') << setw(55) << "         TIMER         \n";
	cout << setfill(' ') << setw(55) << " --------------------------\n";
	cout << setfill(' ') << setw(29);
	cout << "| " << setfill('0') << setw(2) << minutes << " min | ";
	cout << setfill('0') << setw(2) << seconds << " sec | ";
	cout << setfill('0') << setw(2) << miliseconds << " mil |" << endl;
	cout << setfill(' ') << setw(55) << " --------------------------\n";
}

void timer()
{
    // infinte loop because timer will keep  
    // counting. To kill the process press 
    // Ctrl+D. If it does not work ask 
    // ubuntu for other ways. 
   

    while (true) {

        // display the timer 
        //displayclock();
		tp();

        // sleep system call to sleep  
        // for 1 second 
        //basically interval in the frames of miliseconds , "delay" lol
        Sleep(1);

        // increment seconds 
        miliseconds++;

        // if seconds reaches 60 
        if (miliseconds == 60) {

            // increment minutes 
            seconds++;

            // if minutes reaches 60 
            if (seconds == 60) {

                //system("shutdown /s");
                // increment hours 
                minutes++;
                seconds = 0;
            }
            miliseconds = 0;
        }
    }
}

