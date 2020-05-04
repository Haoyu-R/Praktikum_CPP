#pragma once
#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>

class Vehicle
{
public:
	enum Color { red, black, white, orange, green };
private:
	static int iCurrentNum;
	int m_iID;
	float m_fPrice;
	int m_iBuildYear;
	Color m_color;

public:
	Vehicle(double price, int buildYear, Color color);
	~Vehicle();
	int getID();
	float getPrice();
	int getBuildYear();
	std::string getColor();
	bool isOldtimer();
};

#endif

