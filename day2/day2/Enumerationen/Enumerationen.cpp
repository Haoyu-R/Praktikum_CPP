// Enumerationen.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Vehicle.h"

int main()
{
    Vehicle car1(15000.22, 2000, Vehicle::Color::red);
    Vehicle car2(20000, 2009, Vehicle::white);
    Vehicle car3(200241.5, 1979, Vehicle::black);

    std::cout << car1.getID() << std::endl;
    std::cout << car1.isOldtimer() << std::endl;
    std::cout << car1.getBuildYear() << std::endl;
    std::cout << car1.getColor() << std::endl;
    std::cout << car1.getPrice() << std::endl;

    std::cout << car2.getID() << std::endl;
    std::cout << car2.isOldtimer() << std::endl;
    std::cout << car3.getID() << std::endl;
    std::cout << car3.isOldtimer() << std::endl;
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
