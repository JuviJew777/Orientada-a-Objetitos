// ConsoleApplication1.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>
#include <string>
void IntToString(const int& c)
{
	std::string numero = "";
	int num, tNum, x;
	
	num = tNum = c;

	for (;;) 
	{
		num %= 10;
		num + 48;
		tNum /= 10;
		numero += num;
		num = tNum;

		if (tNum == NULL)
			break;

	}
	x = numero.size();
	int i = x;
	while (i > 0)
	{
		std::cout << numero.at(i - 1);
		--i;
	}
	std::cout << std::endl;
		
}


int main()
{
	int x;
	std::cin >> x;
	IntToString(x);
    return 0;
}

