#include "show_frame.h"

show_frame::show_frame()
{
    myScreen = new screen;
    frameTime = 0.5;
}

show_frame::~show_frame()
{
    delete myScreen;//dtor
}

void show_frame::printFrame()
{
    system("cls");

    myScreen->printTop(myScreen->col);
    for (int i = 0; i < myScreen->row; i++)
    {
        myScreen->printRow(myScreen->col);
    }
    myScreen->printBot(myScreen->col);

    clock_t start_t, end_t;
    double dur;
    start_t = clock();
    while(1)
    {
        end_t = clock();
        dur = end_t - start_t;
        if (dur/CLOCKS_PER_SEC >= frameTime)
            break;
    }
}

void show_frame::setFrameTime(double _time)
{
    frameTime = _time;
}
