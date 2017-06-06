
#include "stdafx.h"
#include "A.h"

A::A(): value(0)
{}

void A::print()
{
	std::cout << value << "\n";
}

void A::setValue(const int& v)
{
	value = v;
}

int A::getValue()
{
	return value;
}