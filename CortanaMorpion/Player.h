#pragma once
#include "GraphicPrimitives.h"

class Player
{
private:
	bool readyToPlay_;
	bool isIA_;
	bool first_;
	std::string forme_;

public:
	Player(std::string forme, bool isIA, bool first);
	~Player();

	bool playerReadyToPlay();
	void setReadyToPlay(bool readyToPlay);
	bool playerIsIA();
	bool playerFirst();
	std::string playerForme();

};