#include "MyGameEngine.h"


void MyGameEngine::idle()
{
	if ((*morpion_).getCurrentPlayer() == Constants::ORDI && !(*morpion_).isFull())
	{
		(*ia_).calculIA();
	}
}