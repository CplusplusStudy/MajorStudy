#pragma once

template <typename T>
class Position
{
private:
	T x, y;
public:
	Position(T x = 0, T y = 0);//������ defailt�� ����
	void print() const;//������� ����
};
