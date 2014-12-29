#include <iostream>
#include <cstdlib>

#include "Engine.h"
#include "MyGraphicEngine.h"
#include "MyGameEngine.h"
#include "MyControlEngine.h"
#include "Morpion.h"
#include "Constants.h"
#include "Player.h"

int main(int argc, char * argv[])
{
	Engine e(argc, argv, Constans::WINDOW_WIDTH, Constans::WINDOW_HEIGHT, "Cortana");

	Morpion morpion_(3);
	Player player1_("croix", false, true);
	Player player2_("carre", false, false);
	if (player1_.playerFirst()){
		player1_.setReadyToPlay(true);
	}
	else{
		player2_.setReadyToPlay(true);
	}
	
	GraphicEngine * ge = new MyGraphicEngine(&morpion_,&player1_,&player2_);
	GameEngine * gme = new MyGameEngine(&morpion_,&player1_,&player2_);
	ControlEngine * ce = new MyControlEngine(&morpion_,&player1_,&player2_);
	
	e.setGraphicEngine(ge);
	e.setGameEngine(gme);
	e.setControlEngine(ce);

	e.start();
	return 0;
}