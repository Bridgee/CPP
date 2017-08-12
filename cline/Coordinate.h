#pragma once
class Coordinate
{
public:
	Coordinate(int _x, int _y);
	Coordinate(const Coordinate &coor);
	~Coordinate();

	void setX(int _x);
	void setY(int _y);

	int getX();
	int getY();

private:
	int m_iX;
	int m_iY;
};