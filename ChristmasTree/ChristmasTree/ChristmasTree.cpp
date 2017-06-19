// ChristmasTree.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>

void Christmastree(const int& num)
{
	int y = 1,x = num;
	for (int i = 0; i < num; ++i) 
	{
		for (int i = 0; i < x; ++i)
		{
			std::cout << " ";
		}
		--x;

		
		for (int j = 0; j < y; ++j)
		{
			std::cout << "*";
		}
		y += 2;
		std::cout << std::endl;

		

	}
}
void Christmas90(const int& num)
{
	int x = num / 2;
	for (int i = 0; i < x; ++i)
	{
		for (int j = 0; j < (i + 1); ++j)
		{
			std::cout << "*" << " ";
		}
		std::cout << std::endl;
	}
	
	for (int i = x; i > 0; --i) 
	{
		for (int j = i-1; j > 0; --j) 
		{
			std::cout << "*" << " ";
		}
		std::cout << std::endl;
	}
	

}
int main()
{
	int x;
	std::cin >> x;
	Christmastree(x);
	std::cout << std::endl;
	Christmas90(x);
    return 0;
}

