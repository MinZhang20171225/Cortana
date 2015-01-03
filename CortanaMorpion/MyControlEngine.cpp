#include "MyControlEngine.h"


void MyControlEngine::MouseCallback(int button, int state, int x, int y){
	float posX = ((x - (Constants::WINDOW_WIDTH / 2.0f)) / (float)(Constants::WINDOW_WIDTH / 2.0f))+1;
	float posY = ((y - (Constants::WINDOW_HEIGHT / 2.0f)) / -(float)(Constants::WINDOW_HEIGHT / 2.0f))+1;

	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		int i = (int)(posY / (*morpion_).getSquareSize());
		int j = (int)(posX / (*morpion_).getSquareSize());

		if ((*morpion_).getSquare(i, j)->getCptClick() == 0){
			if ((*morpion_).getCurrentPlayer() == Constants::PLAYER)
			{
				(*morpion_).getSquare(i, j)->setForme(Constants::CROIX);
				(*morpion_).getSquare(i, j)->incCptClick();
				(*morpion_).updateNbPions();
				(*morpion_).changeCurrentPlayer();
			}
		}
	}
}