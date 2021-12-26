#pragma once

#include <stdexcept>

#include "AbstractMob.h"

/*
 * ���������� ������
 *
 * ������ ����� ������������ ��� ���������� ������ ��������� ������.
 * ��������� �� ������ AbstractMob
 */
class Player final : public AbstractMob
{
	private:
		/* ���������� ������ ������ */
		int life;
		/* ���������� ����� ������ */
		int score;

	protected:
		/* ����������� ������ 
		 * see: AbstractMob#AbstractMob(const int&, const int&)
		 */
		Player(const int& life, const int& x, const int& y) : AbstractMob(x, y), life(life), score(0) {}

		/* ������ ������ ������� ������ */
		static Player* player;

	public:
		/* ������ � ���������� ������ ������ 
		 * param: life (default = 1) - ���������� ������ ������
		 * param: x (default = 0) - ��������� �� ��� X
		 * param: y (default = 0) - ��������� �� ��� Y
		 * return: ������ ������� ������
		 */
		static Player* getInstance(const int& life=1, const int& x=0, const int& y=0);

		/* �������� ����������� ������������ �������� ������� ������ */
		Player(Player& other) = delete;
		void operator=(const Player&) = delete;

		/* see: AbstractMob#eat() */
		virtual bool eat() override;

		/* ����� ������ ������ �����
		 * return: true, ���� � ������ �������� �����
		 * throws: logic_error
		 */
		bool onAttack();

		/* ������ ���� Life
		 * return: ���������� ������ ������
		 */
		int getLife() const;

		/* ������ ���� Score
		 * return: ���������� ����� ������
		 */
		int getScore() const;
};