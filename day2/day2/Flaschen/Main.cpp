// Main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Flaschen.h"

int main()
{
    Flaschen flaschen1;
    Flaschen flaschen2(52.22, "wood");

    flaschen1.printFlaschen();
    flaschen2.printFlaschen();
    flaschen1.adoptFlaschen(flaschen2);
    flaschen1.printFlaschen();

    flaschen2.setVolumen(33.21);
    std::cout << flaschen2.getVolumen() << std::endl;

    flaschen2.setMaterial("Glas");
    std::cout << flaschen2.getMaterial() << std::endl;

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
