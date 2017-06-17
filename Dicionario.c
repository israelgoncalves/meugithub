#include "Dicionario.h"
//Implementação da interface Dicionario.h

Dicionario CriaDicionario()
{
	Dicionario D;
	D.N = 0;
	return D;
}

void Inserir(Dicionario * D, Item I)
{
	D->Vet[ D->N ] = I;	
	D->N++;
}

Item Buscar(Dicionario * D, TipoChave Chave)
{
	int i;
	for(int i = 0; i < D->N; i++)
	{
		if( ComparaChave(Chave, D->Vet[i].Chave) == 0 )		
		{
			return D->Vet[i];
		}
	}

	return ItemNulo();
}

Item Remover(Dicionario * D, TipoChave Chave)
{
	int i;
	for(int i = 0; i < D->N; i++)
	{
		if( Chave == D->Vet[i].Chave )
		{
			Item I = D->Vet[i];
			D->Vet[i] = D->Vet[ D->N-1 ];
			D->N--; 
			return I;
		}
	}

	return ItemNulo();
}
