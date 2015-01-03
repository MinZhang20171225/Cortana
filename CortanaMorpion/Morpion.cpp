#include "Morpion.h"

Morpion::Morpion(const int size) : size_(size), squareSize_(2.0f / size), nbPions_(0)
{}

Morpion::~Morpion(){}

void Morpion::init()
{
	for (int ligne = 0; ligne < size_; ligne++)
	{
		squares_.emplace_back();
		for (int colonne = 0; colonne < size_; colonne++)
		{
			squares_[ligne].emplace_back(new Square(
				-1 + (colonne* squareSize_),
				-1 + (ligne * squareSize_),
				squareSize_,
				0.0f,
				0.0f,
				0.0f));
		}
	}
}