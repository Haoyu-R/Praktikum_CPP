// Speicher_und_arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctime>
#include <cstdlib>

int main()
{   
    srand(time(NULL));
    int* paNums = NULL;
    paNums = new int[100000];
    int iTotalNumber = 0;

    for (int i = 0; i < 100000; i++)
    {
        paNums[i] = rand() % 101 + 0;
    }

    for (int i = 0; i < 100000; i++)
    {
        if (paNums[i] % 13 == 0)
            iTotalNumber++;
    }

    delete[] paNums;

    std::cout << iTotalNumber << std::endl;
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
