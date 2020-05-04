// Vererbung_und_uberschreibung.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Person.h"
#include "Student.h"

int main()
{
    Person person("Ren", "Haoyu", 25);
    Student student("asas", "eeeeee", 66, 1000);
    student.setAge(5);
    std::cout << person.getName() << "  " << student.getName() << std::endl;
    std::cout << student.getStudentID() << std::endl;

    person = student;
    std::cout << person.getName() << person.getAge() << person.getSurname() << std::endl;
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
