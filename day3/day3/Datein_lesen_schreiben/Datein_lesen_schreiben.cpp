// Datein_lesen_schreiben.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>


void read_file(std::string Dateiname)
{
    std::ifstream file;
    file.open(Dateiname, std::ios::in);
    std::string str;

    while (!file.eof()) 
    {
        file >> str;
        std::cout << str << std::endl;
    }
    file.close();
}

void write_file(std::string Dateiname)
{
    std::ofstream file;
    std::string str;
    file.open(Dateiname, std::ios::out | std::ios::app);

    std::cout << "Input something" << std::endl;
    getline(std::cin, str);

    while (str.compare("exit") != 0)
    {   
        file << str << std::endl;
        std::cout << "Input something" << std::endl;
        getline(std::cin, str);
    }

    file.close();
}



int main()
{
    std::string Dateiname = "C:\\Users\\arhyr\\Desktop\\test.txt";
    read_file(Dateiname);
    write_file(Dateiname);
    read_file(Dateiname);

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
