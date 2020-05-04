#pragma once
#ifndef DATE_H
#define DATE_H
#include <cstdlib>
#include <iostream>


class Date
{
private:
	int m_day, m_mon, m_year;
public:
	Date();
	Date(int day, int mon, int year);
	~Date();
	bool isEqual(Date dd);
	int getDay();
	int getMon();
	int getYear();
	int compare(Date dd);
	void printDate();
};

#endif // !DATE_H