#pragma once
#include "Morpion.h"

class IA
{
protected:
	int shape_;
	Morpion *morpion_;
	bool first_;

public:
	IA();
	~IA();

	virtual int eval() = 0;
	virtual void calculIA() = 0;
};

