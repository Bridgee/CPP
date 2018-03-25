#ifndef SHOW_FRAME_H
#define SHOW_FRAME_H

#include <cstdlib>
#include "screen.h"
#include <time.h>

class show_frame
{
    public:
        show_frame();
        virtual ~show_frame();

        void printFrame();
        void setFrameTime(double _time);

    protected:

    private:
        screen *myScreen;
        double frameTime;
};

#endif // SHOW_FRAME_H
