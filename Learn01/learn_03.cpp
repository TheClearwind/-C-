#include<stdio.h>
#include<stdlib.h>
int main()
{
	//int a = 5;
	//short b = 3;
	//long c = 4;
	//printf("int:%d short:%d long:%d\n", sizeof a, sizeof(b),sizeof(long)); 
	// //sizeof 用来获取某个数据类型或变量所占用的字节数，如果后面跟的是变量名称，那么可以省略( )，如果跟的是数据类型，就必须带上( )。
	////需要注意的是，sizeof 是C语言中的操作符，不是函数，所以可以不带()

	//定义二进制
	int a = 0b1110;
	//定义八进制
	int b = 012234; //5276
	//定义十六进制
	int c = 0xABCD; //43981
	printf("a:%d b:%d c:%d\n", a, b, c);
	printf("a:%d b:%o c:%x\n",a,b,c);
	printf("c:%X\n", c); //以大写形式显示十六进制
	printf("a:%d b:%#o c:%#x\n", a, b, c); //显示八进制,十六进制的前缀(0,0x)以产生区分
	system("pause");
	return 0;
}