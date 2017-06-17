#ifndef ITEM_H
#define ITEM_H

typedef int TipoChave;

typedef struct 
{
	//char Nome[50];
	//char Matricula[30];
	//char CPF[30];
	//char Curso[50];
	//...

	TipoChave Chave;
} Item;

int ComparaChave(TipoChave A, TipoChave B);
Item ItemNulo();

#endif
