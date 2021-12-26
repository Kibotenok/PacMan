#include "Player.h"

Player* Player::getInstance(const int& life, const int& x, const int& y)
{	
	if (Player::player == nullptr)
		Player::player = new Player(life, x, y);
	return Player::player;
}

bool Player::eat()
{
	this->score++;
	return true;
}

bool Player::onAttack()
{	
	if (this->life <= 1)
		throw std::logic_error("Game over");
	this->life--;
	return true;
}

int Player::getLife() const { return this->life; }

int Player::getScore() const { return this->score; }
