// ncurses_.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <curses.h>
#include <list>

int main()
{
    initscr();
    nodelay(stdscr, TRUE);
    noecho();

    char chValue = 'A';
    std::list<char> charList;
    std::list<char>::iterator charI;

    chValue = getch();

    while (1)
    {
        chValue = getch();
        if (chValue == 'q')
        {
            endwin();
            break;
        }
        else if(chValue != -1)
        {
            clear();
            printw("%c", chValue);
            charList.push_back(chValue);
        }
    }
    
    for (charI = charList.end(); charI != charList.begin(); )
    {
        charI--;
        std::cout << *charI;
    }
    return 0;
}
