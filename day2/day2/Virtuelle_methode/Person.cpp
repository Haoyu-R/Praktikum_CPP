#include "Person.h"

Person::Person(std::string sName, std::string sSurname, int iAge) : m_sName(sName), m_Surname(sSurname), m_iAge(iAge)
{
}

Person::~Person() {}

std::string Person::getName()
{
	return m_sName;
}

std::string Person::getSurname()
{
	return m_Surname;
}

int Person::getAge()
{
	return m_iAge;
}

bool Person::setAge(int iAge)
{
	if (iAge > 0)
	{
		m_iAge = iAge;
		return true;
	}
	return false;
}