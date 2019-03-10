#include<stdio.h>
#include<stdlib.h>
int main()
{
	//* Óë &
	int a =5;
	int* p = &a;
	printf("a=%d\n", a);
	printf("address:%#0X\n",p);
	printf("*&a=%d\n", a);
	printf("&*a=%#0X\n", p);

	system("pause");
	return 0;
}