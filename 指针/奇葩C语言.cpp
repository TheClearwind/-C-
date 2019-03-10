#include<stdio.h>
#include<stdlib.h>
int main()
{
	//奇葩C语言
	int a[] = { 1,2,3,4 };
	printf("%d\n", 3[a]); //等价于a[3]
	int* p = a;
	printf("%d\n", 3[p]);//等价于p[3]
	system("pause");
	return 0;
}