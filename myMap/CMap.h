#pragma once
#include "Node.h"
#include <iostream>
#include <vector>
using namespace std;

class CMap
{
public:
	CMap(int capacity);
	~CMap();

	bool addNode(Node *pNode);
	void resetNode();

	bool setValueToMatrixForDirectedGraph(int row,int col, int value = 1);
	bool setValueToMatrixForUndirectedGraph(int row, int col, int value = 1);

	void printMatrix();

	void depthFirstTraverse(int nodeIndex);
	void breadthFirstTraverse(int nodeIndex);
private:
	bool getValueFromMatrix(int row, int col, int &value);
	void breadthFirstTraverseImpl(vector<int> preVec);
private:
	Node *m_pNodeArray;
	int *m_pMatrix;
	int m_iCapacity;
	int m_iNodeCount;
};