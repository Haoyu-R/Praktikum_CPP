#include "Square.h"

Square::Square(float fKantenLange):m_fKantenLange(fKantenLange)
{
}

Square::Square(const Square &s):m_fKantenLange(s.m_fKantenLange)
{
}

Square::~Square()
{
}

float Square::getLang()
{
	return m_fKantenLange;
}

float Square::getFlache()
{
	return m_fKantenLange * m_fKantenLange;
}

float Square::getUmfang()
{
	return 4 * m_fKantenLange;
}
