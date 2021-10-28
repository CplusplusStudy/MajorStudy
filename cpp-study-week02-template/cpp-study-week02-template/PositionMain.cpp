#include <iostream>
#include "PositionTemplate.h"
using namespace std;

int main(void)
{
	Position<int> pos1(3, 4);
	pos1.print();

	Position<double> pos2(3.5, 4.2);
	pos2.print();

	Position<char> pos3('P', 'F');
	pos3.print();
}
