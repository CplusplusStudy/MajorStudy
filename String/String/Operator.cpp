#include<iostream>
using namespace std;

class Point {
	int x, y;
public:
	Point(int x = 0, int y = 0) : x(x), y(y) {}

	friend ostream& operator<<(ostream& stream, Point a);
	friend istream& operator>>(istream& stream, Point& a);
};

// 실행 결과가 "(x, y)" 가 나오도록
ostream& operator<<(ostream& stream, Point a) {
	stream << "(" << a.x << ", " << a.y << ")";

	return stream;
}

// x좌표, y좌표 순으로 입력 받게
istream& operator>>(istream& ins, Point& a) {
	cout << "X 좌표 입력 : ";
	ins >> a.x;
	cout << "Y 좌표 입력 : ";
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

// 실행 결과가 제목, 출판사, 저자 가 나오도록
ostream& operator<<(ostream& stream, Book b) {
	stream << b.title << ", " << b.press << ", " << b.author;
	
	return stream;
}
// 제목, 출판사, 저자 순으로 입력 받게
istream& operator>>(istream& ins, Book& book) {
	cout << "제목 입력 : ";
	ins >> book.title;
	cout << "출판사 입력 : ";
	ins >> book.press;
	cout << "저자 입력 : ";
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
	
	Book book("명품 C++ 프로그래밍", "생능출판", "황기태");
	cout << book << endl;
	
	Point pp;
	cin >> pp;
	cout << pp << endl;
	
	Book bookbook;
	cin >> bookbook;
	cout << bookbook << endl;
}