#pragma once

#include "Person.h"

#ifndef STUDENT_H
#define STUDENT_H

class Student:public Person
{
private:
	unsigned int m_uiStudentID;
public:
	Student(std::string sName, std::string sSurname, int iAge, unsigned int uiStudentID);
	~Student();
	unsigned int getStudentID();
	std::string getName();
};

#endif // !1
