#pragma once
#include "IA.h"
class IARandom :
	public IA
{
public:
	IARandom(const int shape, Morpion *morpion);
	~IARandom();

	int eval();
	void calculIA();
};

