#include <iostream>
#include "Arbol.h"

void main() {
	Arbol l;
	Node *nodin = nullptr;
	int x;
	std::cin >> x;
	for(int i = 0 ; i < x+1; ++i)
		l.Insertar(i, nodin);
	
	l.Print(nodin);
	std::cout << std::endl;
	l.PrintearBien(nodin);
	std::cout << "Porfa no me repruebes pedrito... :(";
}