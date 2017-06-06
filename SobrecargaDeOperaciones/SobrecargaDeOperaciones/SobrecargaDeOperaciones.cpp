// SobrecargaDeOperaciones.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include "Complex.h"


int main()
{
	Complex c1(1, 1), c2(3, 3);
	Complex c3 = c1 + c2;
	std::cout << c3.imprimir();
    return 0;
}

