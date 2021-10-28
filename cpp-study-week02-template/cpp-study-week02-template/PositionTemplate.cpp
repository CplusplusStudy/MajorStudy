#include <iostream>
#include "PositionTemplate.h"
using namespace std;

template <typename T>
Position<T>::Position(T x, T y) : x(x),y(y)
{ }

template <typename T>
void Position<T>::print() const
{
	cout << '[' << x << ", " << y << ']' << endl;
}