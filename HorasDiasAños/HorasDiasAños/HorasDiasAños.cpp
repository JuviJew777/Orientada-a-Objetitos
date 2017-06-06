// HorasDiasAños.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>


int main()
{
	int dia, mes, año, hora, minutos, x,mesS,mesF ,añoInicial;
	long segundos;

	std::cout << "Ingrese el digito del dia mes año hora y minutos" << "\n";
	std::cin >> dia >> mes >> año >> hora >> minutos;
	std::cout << "Ingrese la cantidad de segundos" << "\n";
	std::cin >> segundos;
	añoInicial = año;
	mesS = mes;
	x = segundos / 60;
	segundos %= 60;
	minutos += x;
	x = minutos / 60;
	minutos %= 60;
	hora += x;
	x = hora / 24;
	hora %= 24;
	dia += x;
	x = dia / 30;
	dia %= 30;
	mes += x;
	x = mes / 12;
	mes %= 12;
	año += x;

	mesF = mes;
	

	if (mesF > mesS)
	{
		x = mesF - mesS;
		x /= 2;
		dia -= x;
	}
	else if (mesS > mesF)
	{
		x = mesS - mesF;
		x /= 2;
		dia -= x;
	}
	else if (mesF == mesS && añoInicial != año)
		dia -= 5;

	std::cout << dia << "/" << mes << "/" << año << " - " << hora << 
		":" << minutos << ":" << segundos;

    return 0;
}

