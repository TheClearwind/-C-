#include<stdio.h>
#include<stdlib.h>
int main()
{
	//scanf小测试
	int a=0, b=0;
	//输入格式必须一致 空格个数无所谓
	scanf("%d %d", &a, &b); 
	printf("a:%d\tb:%d\n", a, b);
	scanf("%d,%d", &a, &b);
	printf("a:%d\tb:%d\n", a, b);
	scanf("%d is %d", &a, &b); //输入形式必须为 a is b
	printf("%d %d", a, b);
	system("pause");
	return 0;
}