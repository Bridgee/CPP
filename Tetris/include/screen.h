#ifndef SCREEN_H
#define SCREEN_H
#include <iostream>

using namespace std;

class screen
{
    public:
        screen();
        screen(int _col, int _row);
        ~screen();

        void printTop(int _col);
        void printBot(int _col);
        void printRow(int _col);

        int col;
        int row;

    protected:

    private:

};

#endif // SCREEN_H
