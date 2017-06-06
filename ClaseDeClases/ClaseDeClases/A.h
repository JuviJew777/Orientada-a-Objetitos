#pragma once
#include <iostream>
class A
{
protected:
	int value;

public:
	A();
	virtual void print();
	void setValue(const int& v);
	int getValue();
};