#pragma once
#include <iostream>
#include "A.h"
class B : public A
{
public:
	void sum(const int& i)
	{
		value += 1;
	}

	void print()
	{
		std::cout << "el valor es ";
		A::print();
	}
	B() : A()
	{ }
};
