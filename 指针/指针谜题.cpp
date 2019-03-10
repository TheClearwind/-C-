#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 5;
	int b[] = { 1,2,3,4,5 };
	int *p = &a, *q = b;
	//printf("*p=%d\n", *p);
	//printf("p:%p\n", p);
	//printf("*p++=%d\n", *p++); //*(p++) 
	//printf("*++p=%d\n", *++p);
	//printf("++*p=%d\n", ++*p);
	//printf("p:%p\n", p);

	printf("*q=%d\n", *q);
	printf("q:%p\n", q);
	printf("*q++=%d\n", *q++); //*(q++) 
	/*printf("*++q=%d\n", *++q);
	printf("++*q=%d\n", ++*q);*/
	printf("q:%d\n", *q);
	system("pause");
	return 0;
}