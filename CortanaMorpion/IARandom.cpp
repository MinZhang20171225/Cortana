#include "IARandom.h"


IARandom::IARandom(const int shape, Morpion *morpion)
{
	shape_ = shape;
	morpion_ = morpion;
}


IARandom::~IARandom()
{
}

int IARandom::eval()
{
	return 0;
}

void IARandom::calculIA()
{
	int i = 0;
	int j = 0;
	
	do
	{
		i = rand() % Constants::TAILLE_MORPION;
		j = rand() % Constants::TAILLE_MORPION;
	} while ((*morpion_).getSquare(i, j)->getCptClick() != 0);
	
	(*morpion_).getSquare(i, j)->setForme(Constants::ROND);
	(*morpion_).getSquare(i, j)->incCptClick();
	(*morpion_).updateNbPions();
	(*morpion_).changeCurrentPlayer();
}