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
		/* ��������� ���� �� ���� X � Y ������������� */
		int x, y;

		/* ����������� ������ � �������������� ���������� ��������� ���� */
		AbstractMob(const int& x, const int& y) : x(x), y(y) {}

	public:
		/* �������� ���� ��� Y 
		 * param: direction - ����������� ��������
		 */
		virtual void moveUp(const int& direction);

		/* �������� ���� ��� X
		 * param: direction - ����������� ��������
		 */
		virtual void moveRight(const int& direction);

		/* �������� �����
		 * return: true, ���� ����� �����
		 */
		virtual bool eat() = 0;

		/* ������ ���� X
		 * return: ��������� �� ��� X
		 */
		int getX() const;

		/* ������ ���� Y
		 * return: ��������� �� ��� X
		 */
		int getY() const;
};
