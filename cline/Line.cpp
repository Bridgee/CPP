#include <iostream>
#include "Line.h"
using namespace std;

Line::Line(int x1, int y1, int x2, int y2): m_Coor1(x1, y1), m_Coor2(x2, y2)
{
	//m_pCoor1 = new Coordinate(x1, y1);
	//m_pCoor2 = new Coordinate(x2, y2);

	cout << "Line ini" << endl;
}

Line::~Line()
{
	//delete m_pCoor1;
	//delete m_pCoor2;
}


void Line::printLine()
{
	//cout << "(" << m_pCoor1->getX() << "," << m_pCoor1->getY() <<")" << endl;
	//cout << "(" << m_pCoor2->getX() << "," << m_pCoor2->getY() << ")" << endl;
	cout << "(" << m_Coor1.getX() << "," << m_Coor1.getY() << ")" << endl;
	cout << "(" << m_Coor2.getX() << "," << m_Coor2.getY() << ")" << endl;
}

void Line::setC1(int x1, int x2)
{
	m_Coor1.setX(x1);
	m_Coor1.setY(x2);
}