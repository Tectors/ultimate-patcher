// ultimate-patcher.cpp : This process handles all of the executing of ultimate patcher

#include <windows.h>
#include <stdio.h>
#include <iostream>
#include <string>

// options for the exe
std::string options[1] = {
    "full-patch, exe and paks"
};

int main()
{
    // Console ------------------------------------------------------
    AllocConsole();
    SetConsoleTitleA("ultimate-patcher");
    std::cout << "\nAvailable patches:\n";

    // Used for printing
    int i_option = 0;

    // Print out each patch for the user to choose from
    for (std::string option : options)
        std::cout << " * [" << i_option << "] " << option << "\n";
        i_option++;

    //std::cout << "\nTotal: " <<  (sizeof(options) / sizeof(*options)) << "\n";
    std::cout << "\nPlease enter the number before the patch to select it: ";
    int option;
    std::cin >> option; // Get user input from the keyboard

    int array_length = sizeof(options) / sizeof(options[0]);

    // Console ------------------------------------------------------

    FILE* pFile;
    freopen_s(&pFile, ("CONOUT$"), "w", stdout);

    system("pause");
}