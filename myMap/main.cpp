#include "CMap.h"

int main()
{
	int size = 8;
	CMap *mp = new CMap(size);

	Node *pNodeA = new Node('A');
	Node *pNodeB = new Node('B');
	Node *pNodeC = new Node('C');
	Node *pNodeD = new Node('D');
	Node *pNodeE = new Node('E');
	Node *pNodeF = new Node('F');
	Node *pNodeG = new Node('G');
	Node *pNodeH = new Node('H');

	mp->addNode(pNodeA);
	mp->addNode(pNodeB);
	mp->addNode(pNodeC);
	mp->addNode(pNodeD);
	mp->addNode(pNodeE);
	mp->addNode(pNodeF);
	mp->addNode(pNodeG);
	mp->addNode(pNodeH);
	
	mp->setValueToMatrixForUndirectedGraph(0, 1);
	mp->setValueToMatrixForUndirectedGraph(0, 3);
	mp->setValueToMatrixForUndirectedGraph(1, 2);
	mp->setValueToMatrixForUndirectedGraph(1, 5);
	mp->setValueToMatrixForUndirectedGraph(3, 6);
	mp->setValueToMatrixForUndirectedGraph(3, 7);
	mp->setValueToMatrixForUndirectedGraph(6, 7);
	mp->setValueToMatrixForUndirectedGraph(2, 4);
	mp->setValueToMatrixForUndirectedGraph(4, 5);

	mp->printMatrix();
	cout << endl;

	mp->depthFirstTraverse(0);
	cout << endl;
	cout << endl;

	mp->resetNode();
	mp->breadthFirstTraverse(0);
	cout << endl;

	delete mp;

	system("pause");
	return 0;
}