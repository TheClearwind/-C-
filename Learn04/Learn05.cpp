#include<stdlib.h>
#include<stdio.h>
#define STR(p) #p //���Խ����������ַ���
#define CON1(a,b) a##b//�������������һ�� ͬ����Ҫע������
int main()
{
	puts(STR(12346466));
	printf("%d\n",CON1(123, 456)); 
	system("pause");
	return 0;
}