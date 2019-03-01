#pragma once
#include "Nodo.h"

struct ListaEnlazada
{
	Nodo * primero;
	Nodo * ultimo;

	ListaEnlazada()
	{
		primero = 0;
		ultimo = 0;	
	}
};

void Agregar(Nodo **, int);
