#pragma once
#ifndef SQUARE_H
#define SQUARE
class Square
{
private:
	const float m_fKantenLange;
	
public:
	Square(float fKantenLange);
	Square(const Square &square);
	~Square();
	float getLang();
	float getFlache();
	float getUmfang();

};
#endif