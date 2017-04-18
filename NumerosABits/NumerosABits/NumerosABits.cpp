// NumerosABits.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>
#include <bitset>


void main()
{
	int x;
	


	std::cin >> x;

	std::cout << std::bitset<8>(x) << std::endl;

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

