// Springer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Brett.h"

int main()
{

    Brett brett;
 
    if (brett.findPath(0, 0))
    {
        std::cout << "success" << std::endl;
        brett.printBoard();
    }
    else
    {
        std::cout << "faild" << std::endl;
        brett.printBoard();
    }


    

}
