#include "stdafx.h"

Car::Car()
{
	m_strName = "Toyota";
	m_iYear = 10;
}

Car::Car(string _name, int _year)
{
	m_strName = _name;
	m_iYear = _year;
}

void Car::setName(string _name)
{
	m_strName = _name;
}

void Car::setYear(int _year)
{
	m_iYear = _year;
}

string Car::getName()
{
	return m_strName;
}
int Car::getYear()
{
	return m_iYear;
}