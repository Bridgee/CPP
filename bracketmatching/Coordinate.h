#pragma once
#include <iostream>
using namespace std;

class Coordinate
{
	friend ostream &operator<<(ostream &out, const Coordinate a);
public:
	Coordinate(int x = 0, int y = 0)
	{
		m_iX = x;
		m_iY = y;
	}
	void setX(int x)
	{
		m_iX = x;
	}
	void setY(int y)
	{
		m_iY = y;
	}
	int getX()
	{
		return m_iX;
	}
	int getY()
	{
		return m_iY;
	}
	void printCoor()
	{
		cout << "(" << m_iX << ", " << m_iY << ")" << endl;
	}

	Coordinate operator+(Coordinate &a)
	{
		Coordinate temp;
		temp.m_iX = this->m_iX + a.m_iX;
		temp.m_iY = this->m_iY + a.m_iY;
		return temp;
	}
	Coordinate operator-(Coordinate &a)
	{
		Coordinate temp;
		temp.m_iX = this->m_iX - a.m_iX;
		temp.m_iY = this->m_iY - a.m_iY;
		return temp;
	}
private:
	int m_iX;
	int m_iY;
};


ostream &operator<<(ostream &out, const Coordinate a)
{
	out << "(" << a.m_iX << ", " << a.m_iY << ")";
	return out;
}