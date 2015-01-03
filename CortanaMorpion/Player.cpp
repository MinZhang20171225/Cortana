#include "Player.h"

Player::Player(const int shape) : shape_(shape){}

Player::~Player(){}

int Player::getShape(){ return shape_; }