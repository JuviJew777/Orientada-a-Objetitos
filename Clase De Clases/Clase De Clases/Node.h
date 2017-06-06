#pragma once
#include <iostream>
class Node
{
public:
	std::string value;
	Node *next,
		*prev;
};