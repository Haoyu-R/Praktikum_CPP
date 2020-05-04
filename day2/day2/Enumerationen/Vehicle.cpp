#include "Vehicle.h"
int Vehicle::iCurrentNum = 0;

Vehicle::Vehicle(double price, int buildYear, Color color)
{
	m_fPrice = price;
	m_iBuildYear = buildYear;
	iCurrentNum++;
	m_iID = iCurrentNum;
	m_color = color;
}

Vehicle::~Vehicle()
{
}

int Vehicle::getBuildYear()
{
	return m_iBuildYear;
}

int Vehicle::getID()
{
	return m_iID;
}

float Vehicle::getPrice()
{
	return m_fPrice;
}

std::string Vehicle::getColor()
{
	switch (m_color) 
	{
	case Color::black:
			return "black";
			break;
	case Color::green:
		return "green";
		break;
	case Color::orange:
		return "orange";
		break;
	case Color::red:
		return "red";
		break;
	case Color::white:
		return "white";
		break;
	default:
		return "Not defined";
	}
}


bool Vehicle::isOldtimer()
{
	if (m_iBuildYear < 1980)
		return true;
	return false;
}