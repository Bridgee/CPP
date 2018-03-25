#include "screen.h"

screen::screen()
{
    col = 10;
    row = 20;
}

screen::screen(int _col, int _row)
{
    col = _col;
    row = _row;
}

screen::~screen(){}

void screen::printTop(int _col)
{
    for (int i = 0; i < _col; i++)
        cout << "_";
    cout << endl;
}

void screen::printBot(int _col)
{
    for (int i = 0; i < _col; i++)
        cout << "-";
    cout << endl;
}

void screen::printRow(int _col)
{
    cout << "|";
    for (int i = 1; i < _col - 1; i++)
        cout << " ";
    cout << "|" << endl;
}
