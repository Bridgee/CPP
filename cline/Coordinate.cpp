#include <iostream>
#include "Coordinate.h"

using namespace std;

Coordinate::Coordinate(int _x=0, int _y=0): m_iX(_x), m_iY(_y)
{
	cout << "Coordinate:   " << m_iX << "," << m_iY << endl;
}

Coordinate::Coordinate(const Coordinate &coor)
{
	m_iX = coor.m_iX;
	m_iY = coor.m_iY;
	cout << "Coor&" << endl;
}

Coordinate::~Coordinate()
{
	cout << "~Coor" << endl;
}

void Coordinate::setX(int _x)
{
	m_iX = _x;
}

void Coordinate::setY(int _y)
{
	m_iY = _y;
}
int Coordinate::getX()
{
	return m_iX;
}

int Coordinate::getY()
{
	return m_iY;
}
