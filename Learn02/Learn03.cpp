#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
	//几个输入函数
	//getchar
	/*char a = getchar();
	printf("a=%c\n",a);*/

	//getche
	//char c = getche(); //conio.h下  输入结束后不需要按回车
	//printf("c=%c\n", c); 

	//getch:不回显的getche
/*	char c = getch(); 
	printf("c=%c\n", c);*/ 

	//gets
	char a[20];
	gets_s(a); //可以读取含空格的字符串
	printf(a); 

	/*语言中常用的从控制台读取数据的函数有五个，它们分别是 scanf()、getchar()、getche()、getch() 和 gets()。其中 scanf()、getchar()、gets() 是标准函数，适用于所有平台；getche() 和 getch() 不是标准函数，只能用于 Windows。

	scanf() 是通用的输入函数，它可以读取多种类型的数据。

	getchar()、getche() 和 getch() 是专用的字符输入函数，它们在缓冲区和回显方面与 scanf() 有着不同的特性，是 scanf() 不能替代的。

	gets() 是专用的字符串输入函数，与 scanf() 相比，gets() 的主要优势是可以读取含有空格的字符串。

	scanf() 可以一次性读取多份类型相同或者不同的数据，getchar()、getche()、getch() 和 gets() 每次只能读取一份特定类型的数据，不能一次性读取多份数据。*/
	system("pause");
	return 0;
}