#include <iostream>
using namespace std;

template <typename T>
T Add(T num1, T num2)
{
    return num1 + num2;
}

int main(void)
{
    //명시적 타입 지정
    cout << Add<int>(15, 20) << endl;
    cout << Add<double>(2.9, 3.7) << endl;
    cout << Add<int>(3.2, 3.2) << endl;
    cout << Add<double>(3.14, 2.75) << endl;

    //타입 지정 X
    /*cout << Add(15, 20) << endl;
    cout << Add(2.9, 3.7) << endl;
    cout << Add(3.2, 3.2) << endl;
    cout << Add(3.14, 2.75) << endl;*/
}

