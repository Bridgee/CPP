// stdafx.h : ��׼ϵͳ�����ļ��İ����ļ���
// ���Ǿ���ʹ�õ��������ĵ�
// �ض�����Ŀ�İ����ļ�
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>



// TODO:  �ڴ˴����ó�����Ҫ������ͷ�ļ�
#include <iostream>
#include <string>

using namespace std;

class Car
{
public:
	Car();		// ���캯��
	Car(string _name, int _year);		//���캯��

	void setName(string _name);
	void setYear(int _year);

	string getName();
	int getYear();

private:
	string m_strName;
	int m_iYear;
};