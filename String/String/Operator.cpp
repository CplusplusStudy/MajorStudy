#include<iostream>
using namespace std;

class Point {
	int x, y;
public:
	Point(int x = 0, int y = 0) : x(x), y(y) {}

	friend ostream& operator<<(ostream& stream, Point a);
	friend istream& operator>>(istream& stream, Point& a);
};

// ���� ����� "(x, y)" �� ��������
ostream& operator<<(ostream& stream, Point a) {
	stream << "(" << a.x << ", " << a.y << ")";

	return stream;
}

// x��ǥ, y��ǥ ������ �Է� �ް�
istream& operator>>(istream& ins, Point& a) {
	cout << "X ��ǥ �Է� : ";
	ins >> a.x;
	cout << "Y ��ǥ �Է� : ";
	ins >> a.y;

	return ins;
}

class Book {
	string title;
	string press;
	string author;
public:
	Book(string title = "", string press = "", string author = "") : title(title), press(press), author(author) {}

	friend ostream& operator<<(ostream& stream, Book b);
	friend istream& operator>>(istream& ins, Book& book);
};

// ���� ����� ����, ���ǻ�, ���� �� ��������
ostream& operator<<(ostream& stream, Book b) {
	stream << b.title << ", " << b.press << ", " << b.author;
	
	return stream;
}
// ����, ���ǻ�, ���� ������ �Է� �ް�
istream& operator>>(istream& ins, Book& book) {
	cout << "���� �Է� : ";
	ins >> book.title;
	cout << "���ǻ� �Է� : ";
	ins >> book.press;
	cout << "���� �Է� : ";
	ins >> book.author;

	return ins;
}

int main()
{
	Point p(3, 4);
	cout << p << endl;
	// "(3, 4)

	Point q(1, 100), r(2, 200);
	cout << q << r << endl;
	
	Book book("��ǰ C++ ���α׷���", "��������", "Ȳ����");
	cout << book << endl;
	
	Point pp;
	cin >> pp;
	cout << pp << endl;
	
	Book bookbook;
	cin >> bookbook;
	cout << bookbook << endl;
}