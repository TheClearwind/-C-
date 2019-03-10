#include<stdlib.h>
#include<stdio.h>
#define M m*m
#define M2(n) n*n //参数宏 与函数相似
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
	//由此可见，对于带参宏定义不仅要在参数两侧加括号，还应该在整个字符串外加括号
	system("pause");
	return 0;
}