#pragma once

#ifndef BRETT_H
#define BRETT_H

class Brett
{
private:
	int m_brett[8][8];
	int m_steps;

public:
	Brett();
	~Brett();
	void initBrett();
	bool checkBorder(int x, int y);
	bool findPath(int x, int y);
	void printBoard();
};

#endif


