#pragma once

/*
 * AbsractMob абстрактный класс для реализации моба
 * 
 * Данный класс используется для реализации логики передвижения мобов по карте.
 * Объекты данного класса создать нельзя
 */
class AbstractMob
{	
	protected:
		/* Положение моба по осям X и Y соотвественно */
		int x, y;

		/* Конструктор класса с инициализацией стартового положения моба */
		AbstractMob(const int& x, const int& y) : x(x), y(y) {}

	public:
		/* Движение вдол оси Y 
		 * param: direction - направление движения
		 */
		virtual void moveUp(const int& direction);

		/* Движение вдол оси X
		 * param: direction - направление движения
		 */
		virtual void moveRight(const int& direction);

		/* Поедание ягоды
		 * return: true, если ягоду съели
		 */
		virtual bool eat() = 0;

		/* Геттер поля X
		 * return: положение по оси X
		 */
		int getX() const;

		/* Геттер поля Y
		 * return: положение по оси X
		 */
		int getY() const;
};
