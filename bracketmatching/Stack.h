#pragma once
#include <iostream>
#include <ostream>
using namespace std;

template <typename T>
class Stack
{
public:
	Stack(int size);
	~Stack();
	bool stackEmpty();
	bool stackFull();
	void stackClear();
	bool stackPush(const T &in);
	bool stackPop(T &out);
	int stackLength();
	void stackTraverse(int m);
private:
	int m_iTop;
	int m_iSize;
	T *m_pBuffer;

};

template <typename T>
Stack<T>::Stack(int size)
{
	m_pBuffer = new T[size];
	m_iSize = size;
	m_iTop = 0;
}

template <typename T>
Stack<T>::~Stack()
{
	delete[]m_pBuffer;
}

template <typename T>
bool Stack<T>::stackEmpty()
{
	if (m_iTop == 0)
		return true;
	return false;
}

template <typename T>
bool Stack<T>::stackFull()
{
	if (m_iTop == m_iSize)
		return true;
	return false;
}

template <typename T>
void Stack<T>::stackClear()
{
	m_iTop = 0;
}

template <typename T>
bool Stack<T>::stackPush(const T &in)
{
	if (stackFull())
	{
		return false;
	}
	m_pBuffer[m_iTop] = in;
	m_iTop++;
	return true;
}

template <typename T>
bool Stack<T>::stackPop(T &out)
{
	if (stackEmpty())
	{
		return false;
	}
	out = m_pBuffer[m_iTop - 1];
	m_iTop--;
	return true;
}

template <typename T>
int Stack<T>::stackLength()
{
	return m_iTop;
}

template <typename T>
void Stack<T>::stackTraverse(int m)
{
	if (m == 1)
	{
		for (int i = 0; i < m_iTop; i++)
		{
			cout << m_pBuffer[i] << "    ";
		}
	}
	else if (m == 0)
	{
		for (int i = m_iTop - 1; i >= 0; i--)
		{
			cout << m_pBuffer[i] << "    ";
		}
	}

	if (stackEmpty())
		cout << "The stack is Empty" << endl;
}