// stdafx.h : 标准系统包含文件的包含文件，
// 或是经常使用但不常更改的
// 特定于项目的包含文件
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>



// TODO:  在此处引用程序需要的其他头文件
#include <iostream>
#include <string>

using namespace std;

class Car
{
public:
	Car();		// 构造函数
	Car(string _name, int _year);		//构造函数

	void setName(string _name);
	void setYear(int _year);

	string getName();
	int getYear();

private:
	string m_strName;
	int m_iYear;
};