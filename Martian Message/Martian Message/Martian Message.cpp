// Martian Message.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>
#include <string>
int main()
{
	std::string frase;
	std::cin >> frase;
	int x;
	for (int i = 0; i < frase.length(); ++i)
	{
		if (((i % 3 == 0 || i % 3 == 2) && frase.at(i) == 'S') || (i % 3 == 1 && frase.at(i) == 'O'))
			continue;
			
		else ++x;
			
	}
	std::cout << x << std::endl;
    return 0;
}

