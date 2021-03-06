#include <iostream>
#include <string>
using namespace std;
/**
* 定义类：Student
* 数据成员：m_strName
* 无参构造函数：Student()
* 有参构造函数：Student(string _name)
* 拷贝构造函数：Student(const Student& stu)
* 析构函数：~Student()
* 数据成员函数：setName(string _name)、getName()
*/
class Student
{
public:
	Student()
	{
		m_sName = " SB ";
	}
	Student(string a)
	{
		m_sName = a;
	}
	Student(const Student &stud)
	{
		cout << "This is copy" << endl;
	}
	~Student()
	{
		cout << "This is dead" << endl;
	}

	void setName(string b)
	{
		m_sName = b;
	}

	string getName()
	{
		return m_sName;
	}
private:
	string m_sName;
};

int main(void)
{
	// 通过new方式实例化对象*stu
	Student *stu = new Student;
	// 更改对象的数据成员为“慕课网”
	stu->setName("慕课网");
		// 打印对象的数据成员
		cout << stu->getName() << endl;
	delete stu;
	system("pause");
	return 0;
}