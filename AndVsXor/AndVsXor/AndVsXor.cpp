#include "stdafx.h"
#include <iostream>
#include <math.h>

int bitcount(unsigned long long n)
{
	int cuenta = 0;
	

	while (n != 0)
	{
		if ((n & 1) == 0)
		{
			cuenta += 1;
		}
		n = n >> 1;

	}
	unsigned long long resultado;
	resultado = pow(2,cuenta);
	std::cout << resultado<< " numero de veces que se a + n = a | n " << std::endl;
	return cuenta;
}

void main()
{
	unsigned long long n = 0;
	std::cin >> n;

	std::cout << bitcount(n) << std::endl;

    
}

