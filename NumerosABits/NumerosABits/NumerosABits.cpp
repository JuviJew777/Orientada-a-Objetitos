// NumerosABits.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>
#include <bitset>

void bitset2(int x)
{
	int binario[8];
	for(int i = 0; i < 8; ++i)
	{
		if ((x & 1) == 1)
			binario[i] = 1;
		else
			binario[i] = 0;
		x = x >> 1;
	}
	for (int i = 7; i > -1; --i)
	{
		std::cout << binario[i];
	}
	std::cout << std::endl;
}

void main()
{
	int x;
	


	std::cin >> x;

	bitset2(x);

	while(true)
	{
		std::cout << "Escriba el numero de la posicion del bit que desea prender" << std::endl;
		int y = 0;
		int mascara = 1;
		std::cin >> y;
		if (y < 1)
			break;

		mascara = mascara << y - 1;

		x = x | mascara;

		bitset2(x);

	
	}


}

