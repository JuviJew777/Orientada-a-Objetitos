// ClaseDeClases.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include "A.h"
#include "B.h"


int main()
{
	B b;
	A &a = b;
	b.setValue(8);
	a.print();
    return 0;
}

