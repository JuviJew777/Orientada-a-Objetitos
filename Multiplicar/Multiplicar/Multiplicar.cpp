// Multiplicar.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>
int algoritmo(const int&a, const int& b)
{
	int x = 0;
	for (int i = 0; i < b; ++i)
	{
		x += a;
		std::cout << x << "";
	}
	return x;
}
int mult(const int& a, const int& b)
{
	if (a == 0 || b == 0)
		return 0;


	int x = 0;
	if (a > 0 && b > 0)
	{
		if (a > b)
		{
			return algoritmo(a, b);

		}
		else 
		{
			return algoritmo(b, a);
		}
	
		
			
	}
	else if(a < 0 && b < 0)
	{
		int a2 = a - a - a, b2 = b - b - b;

		if (a2 > b2)
		{
			return algoritmo(a2, b2);
		}
		else
		{
			return algoritmo(b2, a2);
		}
		
			


	}
	else
	{
		int a2 = a, b2 = b;

		if (a < 0)
			a2 = a2 - a - a;
		if (b < 0)
			b2 = b2 - b - b;

		if (a2 > b2)
		{
			x = algoritmo(a2, b2);
		}
		else
		{
			x = algoritmo(b2, a2);
		}

		
			

		x = x - x - x;
	}
	
	return x;

}
int main()
{
	int x,y;
	std::cin >> x >> y;
	std::cout << "Resultad: " << mult(x, y);

    return 0;
}

/*
	if (x == 1)
		f1()
	else if (x==2)
		f2()
*/