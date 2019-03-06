#include<stdio.h>
#include<stdlib.h>
int main()
{
	//操蛋scanf函数
	//example 1:
	//int a, b = 999;
	//char s[30];
	//printf("b=%d\n", b);
	//scanf("%d", &a);  //input 1 abc 
	//scanf("%d", &b);
	//scanf("%s", s);
	//printf("a=%d b=%d s=%s\n", a, b, s);
	/*
		程序执行到第一个 scanf() 时等待用户输入，从键盘输入1 abc，按下回车键，scanf() 匹配到 1，赋值给变量a，同时将内部的位置指针移动到 1 后面。
到了第二个 scanf()，缓冲区中有数据，会直接读取。此时缓冲区中的内容为abc scanf() 想要的整数，所以匹配失败了，不会给变量 b 赋值，b 的值保持不变，这就是两次输出变量 b 的值相同的原因。
匹配失败意味着不会移动内部的位置指针，此时缓冲区中的内容仍然是abc↙。执行到底三个 scanf() 时，它想要一个字符串，这不是正好捡漏吗，把abc赋值给 s 就好了。
注意，scanf()、gets() 在读取字符串时会忽略换行符，不会把换行符作为字符串的内容。
	*/
	//example 2
	int a = 1, b = 1;
	//scanf("a=%d", &a); //input需为:a=xb=y 不能有空格 失了智的缓存区问题
	//scanf("b=%d", &b);
	//printf("a=%d b=%d\n", a, b);
	//But
	scanf("a=%d", &a);
	scanf("%d", &b); //这样就可以忽略掉空格 换行
	printf("a=%d b=%d\n", a, b); 
	system("pause");
	return 0;
}