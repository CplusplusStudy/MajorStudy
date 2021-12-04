#include<iostream>
using namespace std;

ostream& naver(ostream& outs)
{
	outs << "@naver.com";
	return outs;
}
ostream& daum(ostream& outs)
{
	outs << "@duam.net";
	return outs;
}

istream& ageQuestion(istream& ins)
{
	cout << "나이가 몇살입니까? ";
	return ins;
}
istream& foodQuestion(istream& ins)
{
	cout << "어떤 음식을 가장 좋아하십니까? ";
	return ins;
}

int main()
{
	int num = 30;
	int age;
	int password = 123456;
	string id("abcdef");
	string food;

	// 16진수
	cout << hex << num << endl;
	cout << num << endl;
	
	// 10진수
	cout << dec << num << endl;
	cout << num << endl;
	
	// 출력 스트림 조정자  
	cout << id << naver << endl;
	cout << id << daum << endl;
	
	// 입력 스트림 조정자
	cin >> ageQuestion >> age;
	cout << "나이 : " << age << endl;

	// 입력 스트림 조정자
	cin >> foodQuestion >> food;
	cout << "음식 : " << food << endl;
}