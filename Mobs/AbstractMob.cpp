#include "AbstractMob.h"

void AbstractMob::moveUp(const int& direction) { this->y += direction; }

void AbstractMob::moveRight(const int& direction) {	this->x += direction; }

int AbstractMob::getX() const {	return this->x; }

int AbstractMob::getY() const { return this->y; }
