#include<iostream>
#include<stack>
using namespace std;

typedef struct ListNode
{
	int m_nKey;
	ListNode *m_pNext;
};
void PrintListReversingly(ListNode* pHead)
{
	stack<ListNode*>nodes;
	ListNode* pNode = pHead;
	//将每个节点压入栈中
	while (pNode!=NULL)
	{
		nodes.push(pNode);
		pNode = pNode->m_pNext;
	}
	//输出
	while (!nodes.empty())
	{
		pNode = nodes.top();
		cout << pNode->m_nKey << '\t';
		nodes.pop();
	}
}
