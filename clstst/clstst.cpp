#include <iostream>
#include <string>
using namespace std;
/**
* �����ࣺStudent
* ���ݳ�Ա��m_strName
* �޲ι��캯����Student()
* �вι��캯����Student(string _name)
* �������캯����Student(const Student& stu)
* ����������~Student()
* ���ݳ�Ա������setName(string _name)��getName()
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
	// ͨ��new��ʽʵ��������*stu
	Student *stu = new Student;
	// ���Ķ�������ݳ�ԱΪ��Ľ������
	stu->setName("Ľ����");
		// ��ӡ��������ݳ�Ա
		cout << stu->getName() << endl;
	delete stu;
	system("pause");
	return 0;
}