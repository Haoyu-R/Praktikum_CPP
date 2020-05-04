// day1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{	
	float fNum1 = 0, fNum2 = 0;
	char chOperator = '+';
	cout << "Taschenrechner gestartet, die erste Zahl eingeben:" << endl;
	cin >> fNum1;
	while (cin.fail()) 
	{
		cout << "Bitte eine float Nummber!:" << endl;
		cin.clear();
		cin.ignore(1000, '\n');
		cin >> fNum1;
	}

	cout << "Operator?:" << endl;
	cin >> chOperator;
	while ((chOperator != '+' && chOperator && '-' && chOperator != '*' && chOperator != '/'))
	{
		cout << "Falsche Operator" << endl;
		cin >> chOperator;
	}

	cout << "Die zweite Zahl eingeben:" << endl;
	cin >> fNum2;
	while (cin.fail() || (fNum2==0 && chOperator=='/'))
	{
		cout << "Bitte eine valide float Nummber!:" << endl;
		cin.clear();
		cin.ignore(1000, '\n');
		cin >> fNum2;
	}

	switch (chOperator)
	{
	case '+':
		cout << fNum1 + fNum2 << endl;
		break;
	case '-':
		cout << fNum1 - fNum2 << endl;
		break;
	case '*':
		cout << fNum1 * fNum2 << endl;
		break;
	case '/':
		cout << fNum1 / fNum2 << endl;
		break;
	default:
		break;
	}
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
