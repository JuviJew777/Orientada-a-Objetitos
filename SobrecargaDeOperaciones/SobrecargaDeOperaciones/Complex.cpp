#include "stdafx.h"
#include "Complex.h"


Complex::Complex() : real(0), imag(0)
{

}
Complex::Complex(const float& r, const float& i) : real(r), imag(i)
{

}
Complex::Complex(const Complex& c) : real(c.real),imag(c.imag)
{

}
Complex& Complex::operator = (const Complex& c)
{
	if (this == &c)
		return *this;
	real = c.real;
	imag = c.imag;
	return *this;
}

Complex Complex::operator+ (const Complex& c) const
{
	return Complex(real + c.real, this->imag + c.imag);
}
Complex Complex::operator- (const Complex& c) const
{
	return Complex(real - c.real, this->imag - c.imag);
}

Complex Complex::operator* (const Complex& c) const
{
	return Complex(real * c.real, this->imag * c.imag);
}
Complex Complex::operator/ (const Complex& c) const
{
	return Complex(real / c.real, this->imag / c.imag);
}
Complex& Complex::operator+=(const Complex& c)
{
	real += c.real;
	imag += c.imag;
	return *this;
}

std::string Complex::imprimir()
{
	std::string print =  "(" + std::to_string(real) + ", " + std::to_string(imag) + "i)";
	return print;
}