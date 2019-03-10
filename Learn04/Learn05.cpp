#include<stdlib.h>
#include<stdio.h>
#define STR(p) #p //可以将宏参数变成字符串
#define CON1(a,b) a##b//将宏参数连接在一起 同样需要注意类型
int main()
{
	puts(STR(12346466));
	printf("%d\n",CON1(123, 456)); 
	system("pause");
	return 0;
}