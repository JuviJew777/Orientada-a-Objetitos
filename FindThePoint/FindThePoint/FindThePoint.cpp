// FindThePoint.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>

void FindPoint(int n)
{
	int Px, Py, Fx, Fy;
	for (int i = 0; i < n; ++i) 
	{

		std::cin >> Px;
		std::cin >> Py;
		std::cin >> Fx;
		std::cin >> Fy;

		int Rx = 2 * Fx - Px, Ry = 2 * Fy - Py;

		std::cout << Rx << " " << Ry << std::endl;
	}

}
int main() {

	int n;
	std::cin >> n;

	FindPoint(n);

	return 0;
}
