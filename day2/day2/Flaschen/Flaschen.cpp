// Flaschen.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Flaschen.h"

Flaschen::Flaschen():m_dVolumen(0), m_sMaterial("Unknown")
{
}

Flaschen::Flaschen(double dVol, std::string sMat):m_dVolumen(dVol), m_sMaterial(sMat)
{

}

Flaschen::~Flaschen()
{
}

double Flaschen::getVolumen()
{
	return m_dVolumen;
}

void Flaschen::setVolumen(double dVolumen)
{
	m_dVolumen = dVolumen;
}

std::string Flaschen::getMaterial()
{
	return m_sMaterial;
}

void Flaschen::setMaterial(std::string sMaterial)
{
	m_sMaterial = sMaterial;
}

void Flaschen::printFlaschen() 
{
	std::cout << "Volumen:" << m_dVolumen << std::endl;
	std::cout << "Material:" << m_sMaterial << std::endl;
}

void Flaschen::adoptFlaschen(Flaschen flaschen)
{
	setVolumen(flaschen.getVolumen());
	setMaterial(flaschen.getMaterial());
}