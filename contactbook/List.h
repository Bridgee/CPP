#pragma once
#include <iostream>
#include <string>
#include <ostream>
using namespace std;

class contact
{
	friend ostream &operator<<(ostream &out, const contact & a);
public:
	bool operator==(const contact &a)
	{
		if (this->age == a.age && this->name == a.name)
		{
			return true;
		}
		else
			return false;
	}
	contact() :name(" "), age(0){}
	string name;
	int age;
};

ostream &operator<<(ostream &out, const contact & a)
{
	out << a.name << "--------" << a.age;
	return out;
}

class Node
{
public:
	contact data;
	Node *next;
	void printNode()
	{
		cout << data << endl;
	}
};

class List
{
public:
	List();
	~List();
	void ClearList();
	bool ListEmpty();
	int ListLength();
	bool InsertHead(const Node &nd);
	bool InsertTail(const Node &nd);
	bool ListInsert(int i, const Node &nd);
	bool ListDelete(int i, Node &nd);
	bool GetElem(int i, Node &nd);
	int LocateElem(const Node &nd);
	bool PriorElem(const Node &cnd, Node &pnd);
	bool NextElem(const Node &cnd, Node &nnd);
	void ListTraverse();
private:
	int m_iLength;
	Node *m_pList;
};

List::List()
{
	m_pList = new Node;
	m_pList->next = NULL;
	m_iLength = 0;
}

void List::ClearList()
{
	Node *currentNode = m_pList->next;
	while (currentNode != NULL)
	{
		Node *tmp = currentNode->next;
		delete currentNode;
		currentNode = tmp;
	}
	m_pList->next = NULL;
	m_iLength = 0;
}

List::~List()
{
	ClearList();
	delete m_pList;
	m_pList = NULL;
}

bool List::ListEmpty()
{
	if (m_pList->next == NULL)
		return true;
	return false;
}

int List::ListLength()
{
	return m_iLength;
}

bool List::InsertHead(const Node &nd)
{
	Node *tmp = new Node;
	if (tmp == NULL)
	{
		return false;
	}
	tmp->data = nd.data;
	tmp->next = m_pList->next;
	m_pList->next = tmp;
	m_iLength++;
	return true;
}

bool List::InsertTail(const Node &nd)
{
	Node *currentNode = m_pList;
	while (currentNode->next != NULL)
	{
		currentNode = currentNode->next;
	}
	Node *tmp = new Node;
	if (tmp == NULL)
	{
		return false;
	}
	tmp->data = nd.data;
	tmp->next = NULL;
	currentNode->next = tmp;
	m_iLength++;
	return true;
}

bool List::ListInsert(int i, const Node &nd)
{
	if (i<0 || i>m_iLength)
		return false;
	Node *currentNode = m_pList;
	for (int m = 0; m < i; m++)
	{
		currentNode = currentNode->next;
	}
	Node *tmp = new Node;
	if (tmp == NULL)
	{
		return false;
	}
	tmp->data = nd.data;
	tmp->next = currentNode->next;
	currentNode->next = tmp;
	m_iLength++;
	return true;
}

bool List::ListDelete(int i, Node &nd)
{
	if (i<0 || i>=m_iLength)
		return false;
	Node *currentNode = m_pList;
	Node *beforeNode = m_pList;
	for (int m = 0; m <= i; m++)
	{
		beforeNode = currentNode;
		currentNode = currentNode->next;
	}
	beforeNode->next = currentNode->next;
	nd.data = currentNode->data;

	delete currentNode;
	currentNode = NULL;

	m_iLength--;
	return true;
}

bool List::GetElem(int i, Node &nd)
{
	if (i<0 || i >= m_iLength)
		return false;
	Node *currentNode = m_pList;
	Node *beforeNode = m_pList;
	for (int m = 0; m <= i; m++)
	{
		beforeNode = currentNode;
		currentNode = currentNode->next;
	}
	nd.data = currentNode->data;
	return true;
}

int List::LocateElem(const Node &nd)
{
	Node *currentNode = m_pList;
	int i = 0;
	while (currentNode->next != NULL)
	{
		currentNode = currentNode->next;
		if (currentNode->data == nd.data)
		{
			return i;
		}
		i++;
	}
	return -1;
}

bool List::PriorElem(const Node &cnd, Node &pnd)
{
	Node *currentNode = m_pList;
	Node *beforeNode;
	while (currentNode->next != NULL)
	{
		beforeNode = currentNode;
		currentNode = currentNode->next;
		if (currentNode->data == cnd.data)
		{
			if (beforeNode == m_pList)
				return false;
			pnd.data = beforeNode->data;
			return true;
		}
	}
	return false;
}

bool List::NextElem(const Node &cnd, Node &nnd)
{
	Node *currentNode = m_pList;
	while (currentNode->next != NULL)
	{
		currentNode = currentNode->next;
		if (currentNode->data == cnd.data)
		{
			if (currentNode->next == NULL)
				return false;
			nnd.data = currentNode->next->data;
			return true;
		}
	}
	return false;
}

void List::ListTraverse()
{
	Node *currentNode = m_pList;
	while (currentNode->next != NULL)
	{
		currentNode = currentNode->next;
		currentNode->printNode();
	}
}