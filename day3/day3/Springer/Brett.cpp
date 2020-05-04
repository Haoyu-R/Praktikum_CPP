#include "Brett.h"
#include <cstdlib>
#include <iostream>

Brett::Brett(): m_steps(1)
{
	initBrett();
}

Brett::~Brett()
{}

bool Brett::checkBorder(int x, int y)
{
	if (x < 0 || x>7 || y < 0 || y>7)
		return true;
	return false;
}

bool Brett::findPath(int x, int y)
{	
	if (m_steps == 1)
	{
		m_brett[x][y] = 1;
	}

	if (m_steps == 64)
		return true;

	for (int i = 1; i < 9; i++)
	{
		int tempX = x;
		int tempY = y;
		switch (i)
		{
		case 1:
			tempX -= 2;
			tempY += 1;
			break;
		case 2:
			tempX -= 1;
			tempY += 2;
			break;
		case 3:
			tempX += 1;
			tempY += 2;
			break;
		case 4:
			tempX += 2;
			tempY += 1;
			break;
		case 5:
			tempX += 2;
			tempY -= 1;
			break;
		case 6:
			tempX += 1;
			tempY -= 2;
			break;
		case 7:
			tempX -= 1;
			tempY -= 2;
			break;
		case 8:
			tempX -= 2;
			tempY -= 1;
			break;
		}

		if (checkBorder(tempX, tempY) || m_brett[tempX][tempY] != 0)
		{
			continue;
		}
		else
		{
			m_steps++;
			m_brett[tempX][tempY] = m_steps;
			if (findPath(tempX, tempY))
				return true;
			else
			{
				m_brett[tempX][tempY] = 0;
				m_steps--;
				continue;
			}
		}
	}

	return false;

}

void Brett::initBrett()
{
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			m_brett[i][j] = 0;
		}
	}
}

void Brett::printBoard()
{
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			std::cout << m_brett[i][j] << " ";
		}
		std::cout << std::endl;
	}

}