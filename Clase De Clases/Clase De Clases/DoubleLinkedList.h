#pragma once
#include "Node.h"

class DoubleLinkedList
{
private:
	Node *_pHead;
public:
	void insert(const std::string &v);
	void remove(const std::string &v);

	DoubleLinkedList();
	~DoubleLinkedList();
	void removeAll();
	void print();
};
