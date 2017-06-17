#ifndef DICIONARIO_H
#define DICIONARIO_H


#include "Item.h"

typedef struct
{
	Item Vet[100];
	int N;//contador de elementos
}  Dicionario;

Dicionario CriaDicionario();
void Inserir(Dicionario * D, Item I);
Item Buscar(Dicionario * D, TipoChave Chave);
Item Remover(Dicionario * D, TipoChave Chave);

#endif
