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
	cout << "���̰� ����Դϱ�? ";
	return ins;
}
istream& foodQuestion(istream& ins)
{
	cout << "� ������ ���� �����Ͻʴϱ�? ";
	return ins;
}

int main()
{
	int num = 30;
	int age;
	int password = 123456;
	string id("abcdef");
	string food;

	// 16����
	cout << hex << num << endl;
	cout << num << endl;
	
	// 10����
	cout << dec << num << endl;
	cout << num << endl;
	
	// ��� ��Ʈ�� ������  
	cout << id << naver << endl;
	cout << id << daum << endl;
	
	// �Է� ��Ʈ�� ������
	cin >> ageQuestion >> age;
	cout << "���� : " << age << endl;

	// �Է� ��Ʈ�� ������
	cin >> foodQuestion >> food;
	cout << "���� : " << food << endl;
}