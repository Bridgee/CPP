#include <iostream>
#include <cstdlib>
using namespace std;

//声明函数(加减乘除)
float sum(float A, float B);
float sub(float A, float B);
float mut(float A, float B);
float div(float A, float B);


/*
主函数（多行注释）
*/
int main()
{
	float a;
	float b;
	int t;
	char flg='y';

	cout << "Entry a, then press Enter!" << endl;
	cin >> a ;//first num

	cout << "Entry b, then press Enter!" << endl;
	cin >> b;//second num
	cout <<"a="<<a<< ", b=" <<b<< endl;

	system("pause");

	while (flg == 'y')
	{
		cout << "If you want a+b, entry 1 and press Enter!" << endl << "If you want a-b, entry 2 and press Enter!" << endl << "If you want a*b, entry 3 and press Enter!" << endl << "If you want a/b, entry 4 and press Enter!" << endl;
		cin >> t;


		if (t == 1)
		{
			cout << "c=a+b=" << sum(a, b) << endl;
		}
		else if (t == 2)
		{
			cout << "c=a-b=" << sub(a, b) << endl;
		}
		else if (t == 3)
		{
			cout << "c=a*b=" << mut(a, b) << endl;
		}
		else if (t == 4)
		{
			cout << "c=a/b=" << div(a, b) << endl;
		}
		else
		{
			cout <<"No such function!" << endl;
		}


		cout << "Continue?(Y/N)" << endl;
		cin >> flg;

	}

	system("pause");
	
	return 0;
}


//def of functions
float sum(float A, float B)
{
	float C = A + B;
	return C;
}

float sub(float A, float B)
{
	float C = A - B;
	return C;
}

float mut(float A, float B)
{
	float C = A * B;
	return C;
}

float div(float A, float B)
{
	float C = A / B;
	return C;
}
