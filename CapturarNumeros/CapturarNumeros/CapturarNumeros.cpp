// CapturarNumeros.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>
#include <vector>

void Insertar()
{
	int x,y;
	y = 0;
	for (;;)
	{
		std::cout << "Escriba un numero \n";
		std::cout << "Cuando desees acabar escribe un numero negativo \n";
		std::cin >> x;
		if (x < 0)
			break;
		y += x;
		
	}
	std::cout << y;
}
void Insert2()
{
	std::vector<int> vec;
	int x = 0;
	while (true) 
	{
		int y;
		std::cout << "Escriba un numero \n";
		std::cout << "Cuando desees acabar escribe un numero negativo \n";
		std::cin >> y;
		if (y < 0)
			break;
		

		vec.push_back(y);

	}

	for (int i = 0; i < vec.size(); ++i) 
	{
		
		x += vec.at(i);

	}
	std::cout << x;
}

int main()
{
	Insert2();
    return 0;
}

