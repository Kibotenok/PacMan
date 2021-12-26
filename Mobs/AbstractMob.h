#pragma once

/*
 * AbsractMob ����������� ����� ��� ���������� ����
 * 
 * ������ ����� ������������ ��� ���������� ������ ������������ ����� �� �����.
 * ������� ������� ������ ������� ������
 */
class AbstractMob
{	
	protected:
		int x, y;

		AbstractMob(const int& x, const int& y) : x(x), y(y) {}

	public:
		void moveUp(const int& direction);
		void moveRight(const int& direction);

		virtual void eat();
};
