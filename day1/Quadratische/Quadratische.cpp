// Quadratische.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

bool mitternacht(float *pfX1, float* pfX2, float fA, float fB, float fC)
{
	float fTemp = fB * fB - 4 * fA * fC;
	if (fTemp < 0)
	{
		return false;
	}
	else
	{
		pfX1[0] = (-fB + sqrt(fTemp)) / (2 * fA);
		*pfX2 = (-fB - sqrt(fTemp)) / (2 * fA);
		return true;
	}
}

int main()
{
	float fA = 0, fB = 0, fC = 0, fX1 = 0, fX2 = 0;
	std::cout << "Input a, b, c:" << std::endl;
	std::cin >> fA >> fB >> fC;
	bool bAnswer = mitternacht(&fX1, &fX2, fA, fB, fC);
	if (bAnswer)
		std::cout << "x1=" << fX1 << " x2=" << fX2 << std::endl;
	else
		std::cout << "No Answer\n";
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
