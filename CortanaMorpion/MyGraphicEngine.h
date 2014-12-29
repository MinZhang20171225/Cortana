#pragma once
#include "Engine.h"
#include "GraphicPrimitives.h"
#include "Square.h"
#include "Morpion.h"
#include "Player.h"

class MyGraphicEngine:public GraphicEngine {
   
private:
	Morpion *morpion_;
	Player *player1_;
	Player *player2_;

public:

	MyGraphicEngine(Morpion *morpion, Player *player1, Player *player2) :
	morpion_(morpion),player1_(player1),player2_(player2){}
    virtual void Draw();
};
