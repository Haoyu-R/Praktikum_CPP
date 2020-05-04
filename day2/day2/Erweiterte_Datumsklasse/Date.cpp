#include "Date.h"

Date::Date() 
{
	m_year = rand() % 61 + 1970;
	m_mon = rand() % 12 + 1;
	int aMons[] = { 1, 3, 5, 7, 8, 10, 12 };
	if (std::find(std::begin(aMons), std::end(aMons), m_mon) != std::end(aMons))
	{
		m_day = rand() % 30 + 1;
	}
	else
	{
		m_day = rand() % 31 + 1;
	}
}

Date::Date(int day, int mon, int year) :m_day(day), m_mon(mon), m_year(year)
{
}

Date::~Date() 
{
}

int Date::getDay()
{
	return m_day;
}

int Date::getMon()
{
	return m_mon;
}

int Date::getYear()
{
	return m_year;
}

bool Date::isEqual(Date dd)
{
	if (m_day == dd.m_day && m_mon == dd.m_mon && m_year == dd.m_year)
		return true;
	return false;
}

void Date::printDate()
{ 
	std::cout << m_day << "." << m_mon << "." << m_year << std::endl;
}

int Date::compare(Date dd)
{
	if (dd.m_year > m_year)
		return -1;
	else if (dd.m_year < m_year)
		return 1;

	if (dd.m_mon > m_mon)
		return -1;
	else if (dd.m_mon < m_mon)
		return 1;

	if (dd.m_day > m_day)
		return -1;
	else if (dd.m_day < m_day)
		return 1;
	else
		return 0;
}
