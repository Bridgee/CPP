#include <iostream>
#ifndef NODE_H
#define NODE_H


class Node
{
    public:
        Node();
        virtual ~Node();
        void printNode();
        void setData(int _value);
        int getData();
        Node *next;
    protected:

    private:
        int data;
};

#endif // NODE_H
