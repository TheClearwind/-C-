#include<stdlib.h>
#include<stdio.h>
#define M m*m
#define M2(n) n*n //������ �뺯������
#define M3(n) (n)*(n)
#define M4(n) ((n)*(n))
int main()
{
	int m = 5;
	int a = 6;
	printf("%d\n", M);
	printf("%d\n", M2(a));
	printf("%d\n",M2(a + 1)); //a+1*a+1=2a+1=13
	printf("%d\n", M3(a + 1)); //7*7
	printf("%d\n", 100 / M3(a + 1)); //100/7*7=98
	printf("%d\n", 100 / M4(a + 1)); //100/49=2
	//�ɴ˿ɼ������ڴ��κ궨�岻��Ҫ�ڲ�����������ţ���Ӧ���������ַ����������
	system("pause");
	return 0;
}