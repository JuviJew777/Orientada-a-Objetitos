// NumerosABits.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>
#include <bitset>

void bitset2(int x)
{
	int binario[4];
	for(int i = 4; i >= 0; --i)
	{
		if ((x & 1) == 1)
			binario[i] = 1;
		else
			binario[i] = 0;
		x = x >> 1;
	}
	for (int i = 4; i >= 0; --i)
	{
		std::cout << binario[i];
	}
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

		mascara = mascara << y - 1;

		x = x | mascara;

		std::cout << std::bitset<8>(x) << std::endl;

	}


}

