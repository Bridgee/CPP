#include <iostream>
#include "Coordinate.h"
#include "Line.h"
using namespace std;

int main()
{
	//Coordinate coor1(1, 2);
	//Coordinate coor2 = coor1;
	//cout << coor2.getX() << "," << coor2.getY() << endl;
	//system("pause");

	//coor1.setX(9);
	//coor1.setY(9);
	//cout << coor1.getX() << "," << coor1.getY() << endl;
	//system("pause");
	Line *p = NULL;
	p = new Line(1, 2, 3, 4);
	p->printLine();
	cout << sizeof(p) << endl;
	cout << sizeof(Line) << endl;
	cout << sizeof(Coordinate) << endl;
	p->setC1(9, 9);
	p->printLine();
	delete p;
	system("pause");
	return 0;
}

