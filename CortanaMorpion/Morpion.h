#pragma once
#include "Square.h"
#include "Constants.h"

class Morpion
{
private:
	int size_;
	float squareSize_;
	std::vector<std::vector<Square *> > squares_;
	int currentPlayer_;
	int nbPions_;

public:
	Morpion(const int size);
	~Morpion();

	Square* getSquare(int i, int j){ return squares_[i][j]; }
	int getSize(){ return size_; }
	float getSquareSize(){ return squareSize_; }

	void init();
	int getCurrentPlayer() { return currentPlayer_; }
	void setCurrentPlayer(int current){ currentPlayer_ = current; }
	void changeCurrentPlayer(){ currentPlayer_ = (currentPlayer_ == Constants::PLAYER) ? Constants::ORDI : Constants::PLAYER; }
	bool isFull(){ return nbPions_ >= Constants::TAILLE_MORPION * Constants::TAILLE_MORPION; }
	void updateNbPions(){ nbPions_++; }
};

