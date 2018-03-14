#include "Node.h"

Node::Node()
{
    data =  0;
    next = NULL;
    //ctor
}

Node::~Node()
{
    //dtor
}

void Node::printNode()
{
    std::cout << data << std::endl;
}

void Node::setData(int _value)
{
    data = _value;
}

int Node::getData()
{
    return data;
}
