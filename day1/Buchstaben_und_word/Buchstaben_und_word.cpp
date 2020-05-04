// Buchstaben_und_word.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int main()
{
    std::string szStr = "";
    std::cout << "Input a word" << std::endl;
    std::cin >> szStr;

    std::string s = szStr.substr(1, szStr.size() - 2);
   
    for (int i = 0; i < s.size()-1; i+=2)
    {
        char temp = s[i + 1];
        s[i + 1] = s[i];
        s[i] = temp;
    }

    std::string s1 = "";
    for (int i = 0; i < szStr.size(); i++) 
    {
        char chA = szStr[i];
        if (chA != 'a' && chA != 'e' && chA != 'i' && chA != 'o' && chA != 'u' && chA != 'ä' && chA != 'ö' && chA != 'ü')
            s1+=chA;
    }
    std::cout << szStr[0] << s << szStr.back() << std::endl;
    std::cout << s1 << std::endl;
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
