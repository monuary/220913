#include<iostream>
#include<stdlib.h>
using namespace std;

class simple//자료형(클래스) 선언
{
public://멤버에 대한 접근 지정자
	simple()
	{
		cout << "I'm simple constructor!" << endl;//멤버 함수
	}
};

int main()
{
	cout << "case 1: ";
	simple* sp1 = new simple;

	cout << "case 2: ";
	simple* sp2 = (simple*)malloc(sizeof(simple) * 1);

	cout << endl << "end of main" << endl;
	delete sp1;
	free(sp2);
	return 0;
}

//malloc 부분은 출력이 되지 않는다. new와 malloc의 동작방식에는 차이가 있다.