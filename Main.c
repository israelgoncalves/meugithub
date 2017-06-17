#include "Dicionario.h"
#include "Item.h"
#include <stdio.h>

int main()
{
	Dicionario D = CriaDicionario();

	Item i1, i3;
	i1.Chave = 10;
	i3.Chave = 20;

	Inserir(&D, i1);
	Inserir(&D, i3);

	Item x = Buscar(&D, 10);
	if(ComparaChave(x.Chave, ItemNulo().Chave) != 0)
		printf("Achou \n");
	else
		printf("Nao achou\n");

	x = Remover(&D, 10);
	if(ComparaChave(x.Chave, ItemNulo().Chave) != 0)
		printf("Removeu \n");
	else
		printf("Nao removeu\n");

	x = Buscar(&D, 10);
	if(ComparaChave(x.Chave, ItemNulo().Chave) != 0)
		printf("Achou \n");
	else
		printf("Nao achou\n");
}
