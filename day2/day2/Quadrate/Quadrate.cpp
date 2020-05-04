// Quadrate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Square.h"

Square operator+(Square s1, Square s2)
{
    return Square(s1.getLang() + s2.getLang());
}

Square operator-(Square s1, Square s2)
{
    return Square(s1.getLang() - s2.getLang());
}

std::ostream& operator<<(std::ostream& os, Square s) 
{
    return os << "Quadrat: Kantenlange=" << s.getLang() << ", Flache=" << s.getFlache() << ", Umfang=" << s.getUmfang();
}

int main()
{
    Square s1(5); 
    Square s2(10);
    Square s3(s1);

    std::cout << s1 << std::endl;
    std::cout << s3 << std::endl;

    std::cout << s1 - s3 << std::endl;
    std::cout << s1 + s2 << std::endl;
}