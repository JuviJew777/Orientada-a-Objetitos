// IfAnalisis.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>

int funcion1();


void main()
{
	int x = 5;
	int y = 5;
	int z;

	if ((x == y) || (y == 5) || (z = funcion1()))
		std::cout << "funciono" << std::endl;
	if (z = funcion1() || y == 5)
		std::cout << "Si es para la izquierda";

}
int funcion1()
{

	std::cout << "va de derecha a izquierda";
	return 1;
}
