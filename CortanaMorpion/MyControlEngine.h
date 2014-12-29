#pragma once
#include "Engine.h"
#include "Square.h"
#include "Morpion.h"
#include "Player.h"

class MyControlEngine:public ControlEngine {

private:
	Morpion *morpion_;
	Player *player1_;
	Player *player2_;
public:

	MyControlEngine(Morpion *morpion, Player *player1, Player *player2) :
	morpion_(morpion),player1_(player1),player2_(player2){}
    
    virtual void MouseCallback(int button, int state, int x, int y) ;
};
