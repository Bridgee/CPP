#include <iostream>
#include <conio.h>
#include "show_frame.h"

using namespace std;

int main()
{
    cout << "Press Any Key To Start Game!" << endl;
    char start_ch = '~';
    char end_ch = 'q';
    while (start_ch == '~')
    {
        start_ch = getch();
    }

    show_frame Frame;
    while(end_ch != 27)
    {
        end_ch = getch();
        Frame.printFrame();
    }

    return 0;
}
