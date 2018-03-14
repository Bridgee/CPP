#include "List.h"

List::List()
{
    m_pList = new Node;
    m_pList -> next = NULL;
    m_listLength = 0;
}

List::~List()
{
    ClearList();
    delete m_pList;
    m_pList = NULL;
}

void List::ClearList()
{
    Node* currentp = m_pList;
    while(currentp -> next != NULL)
    {
        Node* temp = currentp -> next;
        delete currentp;
        currentp = temp;
    }
    m_pList -> next == NULL;
    m_listLength = 0;
}

bool List::IsEmpty()
{
    return m_listLength == 0 ? true : false;
}

int List::Length()
{
    return m_listLength;
}

bool List::AddListTail(int _addData)
{
    Node* currentp = m_pList;
    while(currentp -> next != NULL)
    {
        currentp = currentp -> next;
    }
    Node *newNode = new Node;
    if (newNode == NULL)
        return false;
    else
    {
        newNode->setData(_addData);
        currentp -> next = newNode;
        m_listLength++;
        return true;
    }
}

bool List::AddListTail(Node *_addNode)
{
    Node* currentp = m_pList;
    while(currentp -> next != NULL)
    {
        currentp = currentp -> next;
    }
    Node *newNode = new Node;
    if (newNode == NULL)
        return false;
    else
    {
        newNode->setData(_addNode->getData());
        currentp -> next = newNode;
        m_listLength++;
        return true;
    }
}

void List::PrintList()
{
    if (IsEmpty())
    {
        std::cout << "The list is empty!!!" << std::endl;
    }
    else
    {
        Node* currentp = m_pList->next;
        std::cout << "*";
        while(currentp -> next != NULL)
        {
            std::cout << " -> " << currentp->getData();
            currentp = currentp -> next;
        }
        std::cout << " -> " << currentp->getData() << std::endl;
    }
}

bool List::AddList(int _addData, int n)
{
    Node* currentp = m_pList;
    for (int i = 0; i < n; i++)
    {
        currentp = currentp->next;
    }
    Node *newNode = new Node;
    if (newNode == NULL)
        return false;
    else
    {
        newNode->setData(_addData);
        newNode->next = currentp->next;
        currentp->next = newNode;
        m_listLength++;
        return true;
    }
}
bool List::AddList(Node *_addNode, int n)
{
    Node* currentp = m_pList;
    for (int i = 0; i < n; i++)
    {
        currentp = currentp->next;
    }
    Node *newNode = new Node;
    if (newNode == NULL)
        return false;
    else
    {
        newNode->setData(_addNode->getData());
        newNode->next = currentp->next;
        currentp->next = newNode;
        m_listLength++;
        return true;
    }
}

bool List::DeleteListTail(int &out)
{
    if (IsEmpty())
    {
        std::cout << "The list is empty!!!" << std::endl;
        return false;
    }
    else
    {
        Node* currentp = m_pList;
        Node* beforep = NULL;
        while(currentp -> next != NULL)
        {
            beforep = currentp;
            currentp = currentp -> next;
        }
        out = currentp->getData();
        beforep->next = NULL;
        delete currentp;
        m_listLength--;
        return true;
    }
}

bool List::DeleteList(int &out,int n)
{
    if (IsEmpty())
    {
        std::cout << "The list is empty!!!" << std::endl;
        return false;
    }
    else if ((n+1) > m_listLength)
    {
        std::cout << "No enough data!!!" << std::endl;
        return false;
    }
    else
    {
        Node* nextp = m_pList->next;
        Node* currentp = m_pList;
        for (int i = 0; i < n; i++)
        {
            currentp = nextp;
            nextp = nextp->next;
        }
        out = nextp->getData();
        currentp->next = nextp->next;
        delete nextp;
        m_listLength--;
        return true;
    }
}

int List::VisitList(int n)
{

        Node* nextp = m_pList->next;
        for (int i = 0; i < n; i++)
        {
            nextp = nextp->next;
        }
        int out = nextp->getData();
        return out;
}
