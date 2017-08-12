#ifndef NODE_H
#define NODE_H


class Node
{
public:
	Node(char data = 0)
	{
		m_iData = data;
		m_bIsVisited = false;
	}
	char m_iData;
	bool m_bIsVisited;
};




#endif