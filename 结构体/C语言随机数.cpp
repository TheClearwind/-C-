#include <stdio.h>
#include <stdlib.h>
#include<time.h>
int Getrand(int a, int b) {
	return rand() % (b-a)+a;
}
int main()
{
	srand(time(NULL)); //ʹ��ʱ����Ϊ�������
	//����[a,b]������� rand()%(b-a)+a
	int a;
	a = Getrand(0, 10);
	printf("a=%d\n", a);
	a = Getrand(0, 10);
	printf("a=%d\n", a);
	a = Getrand(0, 10);
	printf("a=%d\n", a);
	//δ�������� ����ÿһ�����в��������������ͬ ʹ��srand�������������
	//printf("a=%d\n", a);
	system("pause");
	return 0;
}