#include<stdio.h>
#include<stdlib.h>
int max(int x, int y)
{
	return x > y ? x : y;
}

int main()
{
	//函数指针 returnType (*pointerName) (param list) 其中第一个括号不能少
	// returnType *pointerName(param list) 表示一个返回指针的函数
	int a = 5, b = 6;
	int *p = &a;
	int(*pmax)(int, int) = max; //函数名不加括号就表示地址(与python一样)
	printf("%d\n",(*pmax)(a, b));
	printf("%d\n", pmax(a, b)); //加不加*号都一样
	system("pause");
	return 0;
}