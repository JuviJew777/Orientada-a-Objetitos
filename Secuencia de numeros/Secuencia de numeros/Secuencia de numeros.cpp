// Secuencia de numeros.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>
int Search()
{
	char bits[4096];
	memset(bits, 0, 4096);
	while (true)
	{
		int y, x;
		std::cin >> y ;
		y -= 1;
		x = y / 8;
		y = y % 8;
		if (y <= 0)
			break;
		bits[x] = bits[x] | (1 << (y));
		
	}
	
	std::cout << "Escribe el numero que deseas buscar \n";
	int x,y;
	std::cin >> x;
	x -= 1;
	y = x / 8;
	x = x % 8;

	if ((bits[y] & (1 << (x))))
		return ((y * 8) + x) + 1;
	else
		return 0;
	
}
int main()
{
	
	std::cout << Search() << std::endl;
    return 0;
}

