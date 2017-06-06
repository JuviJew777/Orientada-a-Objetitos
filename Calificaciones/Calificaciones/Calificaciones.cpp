// Calificaciones.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>

int CalcuGrade(int n)
{
	int y = n + 2, z = n + 1;
	if (n < 38)
		n = n;
	else if ((y) % 5 == 0)
		n = y;
	else if ((z) % 5 == 0)
		n = z;
	return n;
}
int main()
{
	int n;
	std::cin >> n;

	int *numeros = new int[n];

	for (int i = 0; i < n; ++i)
		std::cin >> numeros[i];
	for(int i = 0; i < n; ++i)
		std::cout << CalcuGrade(numeros[i]) << std::endl;

    return 0;
}

