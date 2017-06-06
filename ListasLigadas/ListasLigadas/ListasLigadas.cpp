// ListasLigadas.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>
#include "Node.h"

Node *pHead = NULL;
void insert(const int &V)
{
	Node *pTemp = new Node();
	pTemp->value = V;
	pTemp->next = pHead;
	pHead = pTemp;
	
}
void deleteList()
{
	Node *pTemp = pHead;
	while (pHead != NULL)
	{
		
		pHead = pHead->next;
		delete pTemp;
		pTemp = pHead;
	}
}
void print()
{
	Node *pTemp = pHead;
	while (pTemp != NULL)
	{
		std::cout << pTemp->value;
		pTemp = pTemp->next;
	}
	
}
void ReverseList(Node **head)
{
	Node *pTemp = NULL,*hT = NULL;
	while (*head != nullptr)
	{
		pTemp = *head;
		*head = (*head)->next;
		pTemp->next = hT;
		hT = pTemp;

	}
	*head = hT;

}

void main()
{
	int x;
	std::cin >> x;
	for (int i = x; i > 0 ; --i)
		insert(i);
	print();
	std::cout << std::endl;
	ReverseList(& pHead);
	print();
	deleteList();
	
	
    
}

