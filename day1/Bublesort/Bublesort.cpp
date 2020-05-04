// Bublesort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctime>
#include <cstdlib>

void bubbleSort(int* paArray, int iSize)
{
    for (int i = 0; i < iSize - 1; i++)
    {
        for (int j = 1; j < iSize - i; j++)
        {
            if (paArray[j-1]>paArray[j])
            { 
            int temp = paArray[j];
            paArray[j] = paArray[j-1];
            paArray[j - 1] = temp;
            }
        }
    }
}

int main()
{
    srand(time(NULL));
    int iSize = 32;
    int* paArray = NULL;
    paArray = new int[iSize];
    
    for (int i = 0; i < iSize; i++)
    {
        paArray[i] = rand() % 101 + 0;
    }

    for (int i = 0; i < iSize; i++)
    {
        std::cout << paArray[i] << " ";
    }

    std::cout << std::endl;

    bubbleSort(paArray, iSize);

    for (int i = 0; i < iSize; i++)
    {
        std::cout << paArray[i] << " ";
    }
    
    delete[] paArray;
    return 0;
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
