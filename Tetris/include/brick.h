#ifndef BRICK_H
#define BRICK_H

#include <iostream>

using namespace std;

class brick
{
    public:
        brick();
        virtual ~brick();

        int positionX;
        int positionY;

        void printBrick();

    protected:
    private:
};

#endif // BRICK_H
