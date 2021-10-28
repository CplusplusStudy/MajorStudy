#include <iostream>
using namespace std;

template <typename T>
class Position
{
private:
	T x, y;
public:
	Position(T _x=0, T _y=0) : x(_x), y(_y)
	{ }
	void print() const
	{
		cout << '[' << x << ", " << y << ']' << endl;
	}
};

int main(void)
{
	Position<int> pos1(3, 4);
	pos1.print();

	Position<double> pos2(2.4, 3.6);
	pos2.print();

	Position<char> pos3('P','F');
	pos3.print();
}