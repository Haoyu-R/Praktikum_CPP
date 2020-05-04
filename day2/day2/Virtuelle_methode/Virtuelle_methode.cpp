// Virtuelle_methode.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Person.h"
#include "Student.h"

int main()
{
    Person* persons[3];
    persons[0] = new Student("abc", "fsasd", 25, 1000);
    persons[1] = new Student("simon", "asdw", 21, 2000);
    persons[2] = new Student("Ren", "Haoyu", 33, 3000);

    std::cout << persons[0]->getName() << std::endl;
    std::cout << persons[0]->getAge() << std::endl;

}