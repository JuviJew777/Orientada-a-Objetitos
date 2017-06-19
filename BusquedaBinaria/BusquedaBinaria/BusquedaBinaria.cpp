// BusquedaBinaria.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>
#include <vector>

int Busqueda()
{
	std::vector<int> arraysito;
	int size,search;
	std::cin >> size >> search;
	for (int i = 0; i < size+1; ++i)
	{
		arraysito.push_back(i);
	}
	if (search > arraysito.at(search) || search < arraysito.at(search))
		return -1;

	int x = ((arraysito.size() - 1) / 2);

	while (true) 
	{
		
		
		if (arraysito.at(x) == search)
			return arraysito.at(x);

		if (arraysito.at(x) > search)
		{
			x /= 2;
		}
		if (arraysito.at(x) < search)
		{
			x +=  (((arraysito.size()-1) - x) / 2);
		}
		else return -1;


		
	}


}
int main()
{
	std::cout << Busqueda();
    return 0;
}

