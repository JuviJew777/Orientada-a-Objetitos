#include "Arbol.h"
#include <iostream>

Arbol::Arbol():nodin(nullptr)
{}

void Arbol::Insertar(const int & c, Node * & nodin, Node* x) {
	if (nodin == nullptr){
		nodin= new Node(c,x);
		return;
	}
	
	if (c < nodin->value) 
		Insertar( c, (nodin->l), nodin);

	else 
		Insertar(c, (nodin->r), nodin);
}

void Arbol::Print(Node* nodin)
{
	if (nodin != nullptr) {
		Print(nodin->r);
		std::cout << *nodin<< std::endl;
		Print(nodin->l);
	}
}

void Arbol::PrintearBien( Node* nodin)
{
	if (nodin != nullptr) {
		PrintearBien(nodin->l);
		std::cout << *nodin<< std::endl;
		PrintearBien(nodin->r);
	}
}

