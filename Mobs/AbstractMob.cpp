#include "AbstractMob.h"

void AbstractMob::moveUp(const int& direction) {
	/*
	 * moveUp ƒвижение вдоль оси Y
	 * 
	 * param: direction - направление движени€
	 * return: ничего
	 */
	this->y += direction;
}

void AbstractMob::moveRight(const int& direction) {
	this->x += direction;
}

void AbstractMob::eat()
{
}
