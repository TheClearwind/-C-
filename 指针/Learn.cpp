#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[] = { 1,2,3,4,5,6 };
	int *p = a;
	printf("sizeof a%d:\n", sizeof a);
	printf("sizeof p%d:\n", sizeof p); 
	/*
	������ĳ���ʱ����ʹ��sizeof(p) / sizeof(int)����Ϊ p ֻ��һ��ָ�� int ���͵�ָ�룬����������֪����ָ��ĵ�����һ����������һϵ�����������飩������ sizeof(p) ��õ��� p ���ָ�����������ռ�õ��ֽ�������������������ռ�õ��ֽ���
	*/
	system("pause");
	return 0;
}