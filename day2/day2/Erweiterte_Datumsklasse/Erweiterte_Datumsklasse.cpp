// Erweiterte_Datumsklasse.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Date.h"

int main()
{
    srand(time(NULL));
    Date dd1 = Date();
    Date dd2 = Date();
    Date dd3 = Date();
    dd1.printDate();
    dd2.printDate();
    dd3.printDate();
    std::cout << dd1.compare(dd2) << std::endl;
    std::cout << dd1.compare(dd3) << std::endl;
    std::cout << dd2.compare(dd3) << std::endl;
    std::cout << dd3.compare(dd2) << std::endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
