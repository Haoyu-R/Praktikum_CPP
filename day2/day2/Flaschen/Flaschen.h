#pragma once

#ifndef FLASCHEN_H
#define FLASCHEN_H

class Flaschen
{
private:
	double m_dVolumen;
	std::string m_sMaterial;

public:
	Flaschen();
	Flaschen(double dVol, std::string sMat);
	~Flaschen();
	double getVolumen();
	void setVolumen(double dVolumen);
	std::string getMaterial();
	void setMaterial(std::string sMaterial);
	void printFlaschen();
	void adoptFlaschen(Flaschen flaschen);
};

#endif

