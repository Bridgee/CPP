#ifndef LIST_H
#define LIST_H
#include "Node.h"
#include <iostream>

class List
{
    public:
        List();
        virtual ~List();
        void ClearList();
        bool IsEmpty();
        int Length();
        bool AddListTail(int _addData);
        bool AddListTail(Node *_addNode);
        void PrintList();
        bool AddList(int _addData, int n = 0);
        bool AddList(Node *_addNode, int n = 0);
        bool DeleteListTail(int &out);
        bool DeleteList(int&out, int n = 0);
        int VisitList(int n = 0);

        int m_listLength;
        Node *m_pList;
    protected:

    private:
};

#endif // LIST_H
