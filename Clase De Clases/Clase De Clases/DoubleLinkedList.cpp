#include "DoubleLinkedList.h"
#include <iostream>

void main()
{
	DoubleLinkedList list;
	list.insert("a");
	list.insert("b");
	list.insert("c");
	list.insert("d");
	list.print();
	/*list.remove("c");*/
	list.print();
	list.removeAll();
}

DoubleLinkedList::DoubleLinkedList() : _pHead(NULL)
{

}

DoubleLinkedList::~DoubleLinkedList()
{

}
