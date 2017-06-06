// LeftRotation.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>
#include <vector>

void leftRotation(const int& num, int& left)
{
	
	
	int a[num];
	for (int i = 0; i < num; i++)
		std::cin >> a[i];
	left %= num;
	for (int i = left; i< num; i++)
		std::cout << a[i] << " ";

	for (int i = 0; i<left; i++)
		std::cout << a[i] << " ";
	
}
int main()
{
	int x, y;
	std::cin >> x >> y;

	leftRotation(x, y);
    return 0;
}

