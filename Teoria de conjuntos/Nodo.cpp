#include "pch.h"
#include "Nodo.h"
#include <iostream>
using namespace std;
void agregar(Nodo** inicio, int _valor)
{
	if (*inicio == 0)
	{
		Nodo * nuevo = new Nodo;
		nuevo->valor = _valor;
		*inicio = nuevo;
	}
	else
	{
		Nodo *actual = *inicio;
		while (actual->Siguiente!=0)
		{
			actual = actual->Siguiente;
		}
		Nodo * nuevo = new Nodo;
		nuevo->valor = _valor;
		actual->Siguiente = nuevo;
		nuevo->Anterior = actual;
	}
}

void imprimir(Nodo ** inicio)
{
	if (*inicio == 0)
	{
		return;
	}
	else 
	{
		Nodo * actual = *inicio;
		while (actual != 0)
		{
			cout << " ["<<actual->valor<< "] ";
			actual = actual->Siguiente;
		}
	}

	

}
Nodo * Union(Nodo **Lista1, Nodo ** Lista2)
{
	Nodo *nuevo = 0;


	Nodo *l1 = *Lista1;
	Nodo *l2 = *Lista2;

	if (l1->valor == -1)
	{

	}
	else
	{
		
		agregar(&nuevo, l1->valor);
		while (l1->Siguiente != 0)
		{
			l1 = l1->Siguiente;
			agregar(&nuevo, l1->valor);


		}

	}

	if (l2->valor == -1)
	{

	}
	else
	{

		agregar(&nuevo, l2->valor);
		while (l2->Siguiente != 0)
		{
			l2 = l2->Siguiente;
			agregar(&nuevo, l2->valor);


		}

	}
	return nuevo;
}

Nodo * Interseccion(Nodo ** lista1, Nodo** lista2)
{
	Nodo *nuevo = 0;
	Nodo *l1 = *lista1;
	

	Nodo *l2 = *lista2;
	Nodo *temp2 = l2;

	while (l1 != 0)
	{
		
		while (l2 != 0)
		{
			int temp1 = l1->valor;
			int temp2 = l2->valor;
			if (temp1 == temp2)
			{
				agregar(&nuevo, temp1);
				
			}
			
			
			l2 = l2->Siguiente;
		}
		l2 = temp2;
		l1 = l1->Siguiente;
	}
	return nuevo;
}

Nodo * Diferencia(Nodo ** lista1, Nodo** lista2)
{
	Nodo * nuevo = 0;
	Nodo * l1 = *lista1;
	Nodo *l2 = *lista2;
	bool encontrado = false;
	while (l1 != 0)
	{
		while (l2 != 0)
		{
			if (l1->valor == l2->valor)
			{
				encontrado = true;
				break;
			}
			else 
			{
				l2 = l2->Siguiente;
			}


		}
		if (encontrado == false)
		{
			agregar(&nuevo, l1->valor);
		}

		l2 = *lista2;
		l1 = l1->Siguiente;
		encontrado = false;
	}

	l1 = *lista1;
	l2 = *lista2;
	while (l2 != 0)
	{
		while (l1 != 0)
		{
			if (l2->valor == l1->valor)
			{
				encontrado = true;

				break;
			
				
			}
			else
			{
				l1 = l1->Siguiente;
			}


		}
		if (encontrado == false)
		{
			agregar(&nuevo, l2->valor);
		}

		l1 = *lista1;
		l2 = l2->Siguiente;
		encontrado = false;
	}

	return nuevo;
}

Nodo * Complemento(Nodo ** lista1, Nodo** lista2)
{
	Nodo * nuevo = 0;
	Nodo * l1 = *lista1;
	Nodo * l2 = *lista2;
	bool encontrado = false;

	while (l2 != 0)
	{
		while (l1 != 0)
		{
			if (l2->valor == l1->valor)
			{
				encontrado = true;
				break;
			}
			else
			{
				l1 = l1->Siguiente;
			}
		}

		if (!encontrado)
		{
			agregar(&nuevo, l2->valor);
		}
		l1 = *lista1;
		encontrado = false;
		l2 = l2->Siguiente;
	}
	return nuevo;
}
//void setSiguiente(Nodo * temp)
//{
//	nuevoNodo->Siguiente = temp;
//}
//
//void setAnterior(Nodo * temp)
//{
//	nuevoNodo->Anterior = temp;
//}
//
//void setValor(int val)
//{
//	nuevoNodo->valor = val;
//}
//
//Nodo * getSiguiente()
//{
//	return nuevoNodo->Siguiente;
//}
//
//Nodo * getAnterior()
//{
//	return nuevoNodo->Anterior;
//}
//
//int getValor()
//{
//	return nuevoNodo->valor;
//}