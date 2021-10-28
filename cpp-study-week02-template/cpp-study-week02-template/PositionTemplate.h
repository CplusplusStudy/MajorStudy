#pragma once

template <typename T>
class Position
{
private:
	T x, y;
public:
	Position(T x = 0, T y = 0);//생성자 defailt값 설정
	void print() const;//멤버변수 선언
};
