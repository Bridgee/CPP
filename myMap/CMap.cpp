#include "CMap.h"

CMap::CMap(int capacity)
{
	m_iCapacity = capacity;
	m_iNodeCount = 0;
	m_pNodeArray = new Node[m_iCapacity];
	m_pMatrix = new int[m_iCapacity * m_iCapacity];

	memset(m_pMatrix, 0, sizeof(int) * m_iCapacity * m_iCapacity);  //ÁÙ½Ó¾ØÕó³õÊ¼»¯
}

CMap::~CMap()
{
	delete[] m_pMatrix;
	delete[] m_pNodeArray;
}

bool CMap::addNode(Node *pNode)
{
	if (m_iNodeCount == m_iCapacity)
		return false;
	if (pNode == NULL)
		return false;
	m_pNodeArray[m_iNodeCount].m_iData = pNode->m_iData;
	m_iNodeCount++;
	return true;
}

void CMap::resetNode()
{
	for (int i = 0; i < m_iNodeCount; i++)
	{
		m_pNodeArray[i].m_bIsVisited = false;
	}
}

bool CMap::setValueToMatrixForDirectedGraph(int row, int col, int value)
{
	if (row<0 || row>=m_iCapacity)
		return false;
	if (col<0 || col>=m_iCapacity)
		return false;
	m_pMatrix[row * m_iCapacity + col] = value;
	return true;
}

bool CMap::setValueToMatrixForUndirectedGraph(int row, int col, int value)
{
	if (row<0 || row>=m_iCapacity)
		return false;
	if (col<0 || col>=m_iCapacity)
		return false;
	m_pMatrix[row * m_iCapacity + col] = value;
	m_pMatrix[col * m_iCapacity + row] = value;
	return true;
}

bool CMap::getValueFromMatrix(int row, int col, int &value)
{
	if (row<0 || row >= m_iCapacity)
		return false;
	if (col<0 || col >= m_iCapacity)
		return false;
	value = m_pMatrix[row * m_iCapacity + col];
	return true;
}

void CMap::printMatrix()
{
	for (int row = 0; row < m_iCapacity; row++)
	{
		for (int col = 0; col < m_iCapacity; col++)
		{
			cout << m_pMatrix[row * m_iCapacity + col] << "  ";
		}
		cout << endl;
	}
}

void CMap::depthFirstTraverse(int nodeIndex)
{
	cout << m_pNodeArray[nodeIndex].m_iData << "  ";
	m_pNodeArray[nodeIndex].m_bIsVisited = true;
	int value = 0;
	for (int i = 0; i < m_iCapacity; i++)
	{
		getValueFromMatrix(nodeIndex, i, value);
		if (value != 0)
		{
			if (!m_pNodeArray[i].m_bIsVisited)
				depthFirstTraverse(i);
		}
	}

}

void CMap::breadthFirstTraverse(int nodeIndex)
{
	cout << m_pNodeArray[nodeIndex].m_iData << "  ";
	m_pNodeArray[nodeIndex].m_bIsVisited = true;

	vector <int> curVec;
	curVec.push_back(nodeIndex);
	breadthFirstTraverseImpl(curVec);
}

void CMap::breadthFirstTraverseImpl(vector<int> preVec)
{
	int value = 0;
	vector <int> curVec;

	for (int i = 0; i < (int)preVec.size(); i++)
	{
		for (int j = 0; j < m_iCapacity; j++)
		{
			getValueFromMatrix(preVec[i], j, value);
			if (value != 0)
			{
				if (!m_pNodeArray[j].m_bIsVisited)
				{
					cout << m_pNodeArray[j].m_iData << "  ";
					m_pNodeArray[j].m_bIsVisited = true;

					curVec.push_back(j);
				}
			}
		}
	}
	if (curVec.size() == 0)
		return;
	breadthFirstTraverseImpl(curVec);
}