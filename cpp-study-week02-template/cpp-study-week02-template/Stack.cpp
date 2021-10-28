#include <iostream>
#define MAX_STACK_SIZE 100
#define TRUE 1
#define FALSE 0
using namespace std;


template<typename T>
class Stack {
	T* data;
	int top;
public:
	//스택 초기화
	Stack() : top(-1), data((T*)malloc(MAX_STACK_SIZE * sizeof(T)))
	{ }
	~Stack() { free(data); }

	//공백 상태 검출(1 또는 0반환)
	int isEmpty()
	{
		if (this->top == -1) return TRUE;
		else FALSE;
	}

	//포화 상태 검출(1 또는 0반환)
	int isFull()
	{
		if (this->top == (MAX_STACK_SIZE - 1)) return TRUE;
		else FALSE;
	}

	void push(T item)
	{
		if (isFull()==TRUE)
		{
			cout << "stack 포화" << endl;
		}

		this->top += 1;
		this->data[this->top] = item;

	}

	T pop()
	{
		if (isEmpty()==TRUE)
		{
			printf("스택공백에러");
			exit(1);
		}
		else
		{
			T temp = this->data[top];
			this->top--;
			return temp;
		}
	}
};




int main(void)
{
	//객체 선언
	Stack <int>intStack;
	Stack <double>doubleStack;
	Stack <float>floatStack;
	

	// 삽입
	intStack.push(3);
	intStack.push(6);

	doubleStack.push(3.45);
	doubleStack.push(2.8);

	floatStack.push(1.6f);
	floatStack.push(6.6f);


	printf("int stack element===\n");
	printf("%d\n", intStack.pop());
	printf("%d\n", intStack.pop());

	printf("double stack element===\n");
	printf("%lf\n", doubleStack.pop());
	printf("%lf\n", doubleStack.pop());

	printf("float stack element===\n");
	printf("%f\n", floatStack.pop());
	printf("%f\n", floatStack.pop());
	
}
