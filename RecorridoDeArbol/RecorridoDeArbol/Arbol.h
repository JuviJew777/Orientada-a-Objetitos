#pragma once
#include "Node.h"

class Arbol{
public:
	Node *nodin;
	//Apuntador a referencia de memoria.
	void Insertar(const int &c, Node * & nodin, Node* x = nullptr);
	void Print( Node* nodin);
	void PrintearBien( Node* nodin );

	
	Arbol();
};