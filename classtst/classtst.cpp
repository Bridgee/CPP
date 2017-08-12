// classtst.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

int main()
{
	cout << "This program is used to test class function!!!" << endl;
	system("pause");
	Car c1;
	Car c2;
	Car c3("VW", 11);
	//Car c2;
	c1.setName("Honda");
	c1.setYear(07);
	cout << "Name is  " << c1.getName() << endl;
	cout << "Year is  " << c1.getYear() << endl;
	system("pause");
	cout << "Name is  " << c2.getName() << endl;
	cout << "Year is  " << c2.getYear() << endl;
	system("pause");
	cout << "Name is  " << c3.getName() << endl;
	cout << "Year is  " << c3.getYear() << endl;
	system("pause");

    return 0;
}

