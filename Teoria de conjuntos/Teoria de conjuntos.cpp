
// Teoria de conjuntos.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Nodo.h"

int main()
{
	Nodo * a = 0;
	agregar(&a, 2);
	agregar(&a, 4);
	agregar(&a, 5);
	agregar(&a, 10);
	agregar(&a, 15);

	Nodo * b = 0;
	agregar(&b, 2);
	agregar(&b, 4);

	
	Nodo *test=	 Complemento(&b, &a);
	
	imprimir(&test);
	std::cout << "hola";
	
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
