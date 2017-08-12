#include "List.h"

int main()
{
	List l;
	Node n1;
	n1.data.age = 10;
	n1.data.name = "James";
	Node n2;
	n2.data.age = 20;
	n2.data.name = "Mike";
	Node n3;
	n3.data.age = 30;
	n3.data.name = "Tommy";
	Node n4;
	n4.data.age = 90;
	n4.data.name = "Joy";
	Node n5, n6;
	
	l.InsertHead(n1);
	l.InsertHead(n2);
	l.InsertHead(n3);
	l.InsertHead(n4);
	l.ListTraverse();

	cout << endl;
	cout << l.LocateElem(n4);

	cout << endl;
	l.PriorElem(n3, n5);
	l.NextElem(n3, n6);
	n5.printNode();
	n6.printNode();
	cout << "length:   " << l.ListLength() << endl;

	cout << endl;
	cout<<l.ListDelete(2, n5)<<endl;
	l.ListTraverse();
	cout << endl;
	cout << "length:   " << l.ListLength() << endl;
	

	cout << endl;
	system("pause");
	return 0;
}