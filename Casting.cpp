#include<iostream>
using namespace std;

class parent
{
public:
	parent();
	virtual ~parent();
private:
};

class child : public parent
{
public:
	child();
	~child();
private:
};

class icecream
{
public:
	icecream();
	~icecream();
private:

};

int main()
{
	// static_cast
	double a = 1.00;
	int b = static_cast<int>(a);

	// dynamic_cast
	parent* p = new child;
	child* c;
	c = dynamic_cast<child*>(p);

	// const_cast
	const char* str = "123";
	char* removeConstStr = const_cast<char*>(str);
	cout << removeConstStr << endl;

	removeConstStr = nullptr; // 값 변경 가능

	cout << str << endl;
	cout << removeConstStr << endl;

	// reinterpret_cast
	parent* pp = new parent();
	icecream* x = reinterpret_cast<icecream*>(pp);

	return 0;
}