#pragma once
#include "Square.h"
#include "Constants.h"

class Morpion
{
private:
	int size_;
	float squareSize_;
	std::vector<std::vector<Square *> > squares_;

public:
	Morpion(int size);
	~Morpion();

	Square* getSquare(int i, int j){ return squares_[i][j]; }
	int getSize(){ return size_; }
	float getSquareSize(){ return squareSize_; }
};

