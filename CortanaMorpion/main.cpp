#include <iostream>
#include <cstdlib>
#include <time.h>

#include "Engine.h"
#include "MyGraphicEngine.h"
#include "MyGameEngine.h"
#include "MyControlEngine.h"
#include "Morpion.h"
#include "Constants.h"
#include "Player.h"
#include "IARandom.h"

int main(int argc, char * argv[])
{
	Engine e(argc, argv, Constants::WINDOW_WIDTH, Constants::WINDOW_HEIGHT, "Cortana");

	srand(time(NULL));

	Morpion morpion_(Constants::TAILLE_MORPION);
	morpion_.init();
	//initialiation du morpion

	Player player_(Constants::CROIX);
	IARandom ia_(Constants::ROND, &morpion_);
	
	morpion_.setCurrentPlayer(Constants::PLAYER);
	GraphicEngine * ge = new MyGraphicEngine(&morpion_,&player_,&ia_);
	GameEngine * gme = new MyGameEngine(&morpion_, &player_, &ia_);
	ControlEngine * ce = new MyControlEngine(&morpion_, &player_, &ia_);
	
	e.setGraphicEngine(ge);
	e.setGameEngine(gme);
	e.setControlEngine(ce);

	e.start();
	return 0;
}