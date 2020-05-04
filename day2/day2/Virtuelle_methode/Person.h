#pragma once
#include<iostream>

#ifndef PERSON_H
#define PERSON_H
class Person
{
private:
	std::string m_sName;
	std::string m_Surname;
	int m_iAge;
public:
	Person(std::string, std::string, int);
	~Person();
	std::string getName();
	std::string getSurname();
	virtual int getAge();
	bool setAge(int);
};

#endif

