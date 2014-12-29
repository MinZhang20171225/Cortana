#include "MyGraphicEngine.h"

void MyGraphicEngine::Draw()
{
	for (int i = 0; i < morpion_->getSize(); i++)
	{
		float x = (*morpion_).getSquare(i,0)->getX();
		float y = (*morpion_).getSquare(i,0)->getY();

		GraphicPrimitives::drawLine2D(x, y, x + ((*morpion_).getSize()*(*morpion_).getSquareSize()), y, 1.0f, 1.0f, 1.0f);
		if (i + 1 == morpion_->getSize())
		{
			y = (*morpion_).getSquare(i, 0)->getY() + (*morpion_).getSquareSize();
			GraphicPrimitives::drawLine2D(x, y, x + ((*morpion_).getSize()*(*morpion_).getSquareSize()), y, 1.0f, 1.0f, 1.0f);
		}
	}

	for (int i = 0; i < morpion_->getSize(); i++)
	{
		float x = (*morpion_).getSquare(0, i)->getX();
		float y = (*morpion_).getSquare(0, i)->getY();

		GraphicPrimitives::drawLine2D(x, y, x, y + ((*morpion_).getSize()*(*morpion_).getSquareSize()), 1.0f, 1.0f, 1.0f);
		GraphicPrimitives::drawLine2D(x, y, x + ((*morpion_).getSize()*(*morpion_).getSquareSize()), y, 1.0f, 1.0f, 1.0f);
		if (i + 1 == morpion_->getSize())
		{
			x = (*morpion_).getSquare(0, i)->getX() + (*morpion_).getSquareSize();
			GraphicPrimitives::drawLine2D(x, y, x, y + ((*morpion_).getSize()*(*morpion_).getSquareSize()), 1.0f, 1.0f, 1.0f);
		}
	}
	for (int i = 0; i < morpion_->getSize(); i++)
	{
		for (int j = 0; j < morpion_->getSize(); j++)
		{
			(*morpion_).getSquare(i, j)->draw();
		}
	}
}
