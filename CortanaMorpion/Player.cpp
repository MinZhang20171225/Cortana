#include "Player.h"

Player::Player(std::string forme, bool isIA, bool first) :
	forme_(forme), isIA_(isIA), first_(first), readyToPlay_(false){}

Player::~Player(){}

bool Player::playerReadyToPlay(){ return readyToPlay_; }
void Player::setReadyToPlay(bool readyToPlay){ readyToPlay_ = readyToPlay; }
bool Player::playerIsIA(){ return isIA_; }
bool Player::playerFirst(){ return first_; }
std::string Player::playerForme(){ return forme_; }