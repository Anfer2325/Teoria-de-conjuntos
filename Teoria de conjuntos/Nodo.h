#pragma once

	struct Nodo 
	{
	
		int valor;
		Nodo* Siguiente;
		Nodo* Anterior;

		Nodo() 
		{
			valor = -1;
			Siguiente = 0;
			Anterior = 0;
		}
	};

	/*Nodo * getSiguiente();
	Nodo  * getAnterior();

	void setSiguiente(Nodo *);
	void setAnterior(Nodo *);

	int getValor();
	void setValor(int);*/

	void agregar(Nodo **, int);
	void imprimir(Nodo **);
	Nodo * Union(Nodo **, Nodo **);
	Nodo * Interseccion(Nodo **, Nodo **);
	Nodo * Diferencia(Nodo**, Nodo**);
	Nodo * Complemento(Nodo **, Nodo **);
