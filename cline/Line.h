#pragma once
#include "Coordinate.h"

class Line
{
public:
	Line(int x1, int y1, int x2, int y2);
	~Line();
	void printLine();

	void setC1(int x1, int x2);

private:
	//Coordinate *m_pCoor1;
	//Coordinate *m_pCoor2;
	Coordinate m_Coor1;
	Coordinate m_Coor2;
};