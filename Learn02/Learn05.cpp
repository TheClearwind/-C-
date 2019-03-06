#include<stdio.h>
#include<stdlib.h>
int main()
{
	//坑爹scnaf(续)
	int a = 0, b = 0;
	scanf("a=%d", &a);
	//fflush(stdin);  fflush这种清空缓存的方式 并不通用
	//清空缓存1:
	char c;
	while ((c = getchar()) != '\n' &&c != EOF);
	scanf("b=%d", &b);
	printf("a=%d b=%d\n", a, b);
	//清空缓存2:
	//scanf("%*[^\n]"); scanf("%*c"); //懵逼的正则
	system("pause");
	return 0;
}