#pragma once
#include <iostream>
#include <string>
#include "stdafx.h"
class Complex
{
private:
	float real,
		imag;

public:
	Complex();
	Complex(const float&r, const float& i);
	Complex(const Complex& c);
	Complex& operator = (const Complex& c);
	Complex operator + (const Complex& c) const;
	Complex operator - (const Complex& c) const;
	Complex operator * (const Complex& c) const;
	Complex operator / (const Complex& c) const;
	Complex& operator += (const Complex& c);
	std::string imprimir();
};