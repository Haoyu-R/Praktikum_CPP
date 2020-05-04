// Liste_von_koordinaten.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <list>
#include <ctime>
#include <cstdlib>

struct Coord
{
    float m_fx;
    float m_fy;
    Coord(float x, float y)
    {
        m_fx = x;
        m_fy = y;
    }
};


void printlist(std::list<Coord>* pStartCoorList) 
{
    std::list<Coord>::iterator i;
    for (i = pStartCoorList->begin(); i != pStartCoorList->end(); i++)
    {
        std::cout << "X:" << i->m_fx << " Y:" << i->m_fy << std::endl;
    }
}

void delcoords(std::list<Coord>& coordList)
{
    std::list<Coord>::iterator i;
    for (i = coordList.begin(); i != coordList.end(); )
    {
        if (i->m_fx < i->m_fy)
        {
            i = coordList.erase(i);
        }
        else
        {
            ++i;
        }
    }
}

int main()
{   
    srand((unsigned int)time(nullptr));
    std::list<Coord> coorList;

    for (int i = 0;i < 10;i++)
    {
        float X = float(rand()) / float(RAND_MAX) * 100;
        float Y = float(rand()) / float(RAND_MAX) * 100;
        coorList.push_front(Coord(X, Y));
    }

    printlist(&coorList);
    delcoords(coorList);
    std::cout << std::endl;
    printlist(&coorList);
    return 0;
}

