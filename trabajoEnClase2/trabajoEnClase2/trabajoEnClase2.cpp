// trabajoEnClase2.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>
#include <vector>

void F()
{
	try 
	{
		std::vector<int> v;
		v.push_back(0);
		for (int i = 0; i <= 1; ++i)
		{
			std::cout << v.at(i) << "\n";
		}
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << "\n";
	}
		
}

int main()
{
	F();
    return 0;
}

