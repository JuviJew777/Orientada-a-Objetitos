// BasesBinarias.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
void Bases(const int &c, const int& base)
{
	std::vector<int> guardar;
	int x;
	int y;
	x = c / base;
	y = c % base;
	guardar.push_back(y);
	while (x > 0)
	{
		y = x % base;
		x /= base;
		guardar.push_back(y);
	}

	for (int i = guardar.size(); i--;) 
	{
		if (guardar.at(i) > 9)
		{
			guardar.at(i) = guardar.at(i) + 55;
			std::cout << (char)guardar.at(i);
		}
		else std::cout << guardar.at(i);
	}
	
}

int main()
{
	int numero , base;
	std::cout << "Escribe el numero a calcular" << "\n";
	std::cin >> numero;
	std::cout << "Escribe la base" << "\n";
	std::cin >> base;
	std::cout << "Tu resultado es:" << "\n";
	Bases(numero, base);
    return 0;
}

