// HorasDiasA�os.cpp: define el punto de entrada de la aplicaci�n de consola.
//

#include "stdafx.h"
#include <iostream>


int main()
{
	int dia, mes, a�o, hora, minutos, x,mesS,mesF ,a�oInicial;
	long segundos;

	std::cout << "Ingrese el digito del dia mes a�o hora y minutos" << "\n";
	std::cin >> dia >> mes >> a�o >> hora >> minutos;
	std::cout << "Ingrese la cantidad de segundos" << "\n";
	std::cin >> segundos;
	a�oInicial = a�o;
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
	a�o += x;

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
	else if (mesF == mesS && a�oInicial != a�o)
		dia -= 5;

	std::cout << dia << "/" << mes << "/" << a�o << " - " << hora << 
		":" << minutos << ":" << segundos;

    return 0;
}

