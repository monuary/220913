#include<iostream>
#include<stdlib.h>
using namespace std;

class simple//�ڷ���(Ŭ����) ����
{
public://����� ���� ���� ������
	simple()
	{
		cout << "I'm simple constructor!" << endl;//��� �Լ�
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

//malloc �κ��� ����� ���� �ʴ´�. new�� malloc�� ���۹�Ŀ��� ���̰� �ִ�.