#include <string>
#include "Stack.h"
#include "Coordinate.h"

bool mat(string a);

int main()
{
	string match = "({[]})";

	if (mat(match))
	{
		cout << "The brackets are matching" << endl;
	}
	else
		cout << "The brackests are not matching" << endl;

	system("pause");
	return 0;
}

bool mat(string a)
{
	Stack<char> st(20);
	int size = a.size();
	char current = 0;
	char tmp;

	for (int i = 0; i < size; i++)
	{
		if (a[i] != current)
		{
			switch (a[i])
			{
			case '(':
				st.stackPush(')');
				current = ')';
				break;
			case ')':
				return false;
			case '[':
				st.stackPush(']');
				current = ']';
				break;
			case ']':
				return false;
			case '{':
				st.stackPush('}');
				current = '}';
				break;
			case '}':
				return false;
			default:
				break;
			}
		}
		else
		{
			st.stackPop(tmp);
			if (!st.stackEmpty())
				st.stackPop(current);
			else
				current = 0;
			st.stackPush(current);
		}
		cout << i << ":  ";
		st.stackTraverse(1);
		cout << endl;
	}
	if (st.stackEmpty())
	{
		return true;
	}
}
