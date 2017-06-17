#include "Item.h"

int ComparaChave(TipoChave A, TipoChave B)
{
	if( A == B )
		return 0;
	else
		return 1;
}

Item ItemNulo()
{
	Item I;
	I.Chave = -1;
	return I;
}
