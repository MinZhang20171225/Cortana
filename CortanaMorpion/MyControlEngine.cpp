#include "MyControlEngine.h"


void MyControlEngine::MouseCallback(int button, int state, int x, int y){
	float posX = ((x - (Constans::WINDOW_WIDTH / 2.0f)) / (float)(Constans::WINDOW_WIDTH / 2.0f))+1;
	float posY = ((y - (Constans::WINDOW_HEIGHT / 2.0f)) / -(float)(Constans::WINDOW_HEIGHT / 2.0f))+1;

	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		int i = (int)(posY / (*morpion_).getSquareSize());
		int j = (int)(posX / (*morpion_).getSquareSize());

		if ((*morpion_).getSquare(i, j)->getCptClick() == 0){
			(*morpion_).getSquare(i, j)->setForme("croix");
			(*morpion_).getSquare(i, j)->incCptClick();
		}
	}
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		int i = (int)(posY / (*morpion_).getSquareSize());
		int j = (int)(posX / (*morpion_).getSquareSize());

		if ((*morpion_).getSquare(i, j)->getCptClick() == 0){
			(*morpion_).getSquare(i, j)->setForme("carre");
			(*morpion_).getSquare(i, j)->incCptClick();
		}
	}
}