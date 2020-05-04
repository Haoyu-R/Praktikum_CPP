// Palindorme.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int main()
{
    std::string szStr = "";
    bool bPalindorme = true;
    std::cout << "Input a string:" << std::endl;
    std::cin >> szStr;
    int iSize = szStr.size();

    for (int i = iSize; i >= 0; i--)
    {
        if (szStr[iSize-i] != szStr[i-1])
            bPalindorme = false;
    }

    std::cout << bPalindorme << std::endl;
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
