#include "AbstractMob.h"

void AbstractMob::moveUp(const int& direction) {
	/*
	 * moveUp �������� ����� ��� Y
	 * 
	 * param: direction - ����������� ��������
	 * return: ������
	 */
	this->y += direction;
}

void AbstractMob::moveRight(const int& direction) {
	this->x += direction;
}

void AbstractMob::eat()
{
}
