#pragma once

#include <stdexcept>

#include "AbstractMob.h"

/*
 * Реализация игрока
 *
 * Данный класс используется для реализации логики основного игрока.
 * Наследует от класса AbstractMob
 */
class Player final : public AbstractMob
{
	private:
		/* Количество жизней игрока */
		int life;
		/* Количество очков игрока */
		int score;

	protected:
		/* Констурктор класса 
		 * see: AbstractMob#AbstractMob(const int&, const int&)
		 */
		Player(const int& life, const int& x, const int& y) : AbstractMob(x, y), life(life), score(0) {}

		/* Объект игрока данного класса */
		static Player* player;

	public:
		/* Доступ к экземпляру класса игрока 
		 * param: life (default = 1) - количество жизней игрока
		 * param: x (default = 0) - положение по оси X
		 * param: y (default = 0) - положение по оси Y
		 * return: объект данного класса
		 */
		static Player* getInstance(const int& life=1, const int& x=0, const int& y=0);

		/* Удаление возможности клонирования объектов данного класса */
		Player(Player& other) = delete;
		void operator=(const Player&) = delete;

		/* see: AbstractMob#eat() */
		virtual bool eat() override;

		/* Атака игрока другим мобом
		 * return: true, если у игрока остались жизни
		 * throws: logic_error
		 */
		bool onAttack();

		/* Геттер поля Life
		 * return: количество жизней игрока
		 */
		int getLife() const;

		/* Геттер поля Score
		 * return: количество очков игрока
		 */
		int getScore() const;
};