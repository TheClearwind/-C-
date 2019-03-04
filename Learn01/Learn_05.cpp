#include<stdio.h>
#include<stdlib.h>
int main()
{
	//float a = 0.302;
	//float b = 128.101;
	//double c = 123;
	//float d = 112.64E3;
	//double e = 0.7623e-2;
	//float f = 1.23002398;
	//printf("a=%e \nb=%f \nc=%lf \nd=%lE \ne=%lf \nf=%f\n", a, b, c, d, e, f);
	///*
	//	%f 以十进制形式输出 float 类型；
	//	%lf 以十进制形式输出 double 类型；
	//	%e 以指数形式输出 float 类型，输出结果中的 e 小写；
	//	%E 以指数形式输出 float 类型，输出结果中的 E 大写；
	//	%le 以指数形式输出 double 类型，输出结果中的 e 小写；
	//	%lE 以指数形式输出 double 类型，输出结果中的 E 大写。
	//*/
	float f = 251;
	int w = 19.427;
	int x = 92.78;
	int y = 0.52;
	int z = -87.27;
	/*直接丢弃小数部分而不进行四舍五入*/
	printf("f = %f, w = %d, x = %d, y = %d, z = %d\n", f, w, x, y, z);
	/*
		小数转二进制:乘2取整
		例:0.8125
		1.小数部分0.8125 0.8125*2=1.625        1
		2.0.625*2=1.25                                     1
		3.0.25*2=0.5										 0
		4.0.5*2=1.0											 1
		所以0.8125=0.1101
	*/
	system("pause");
	return 0;
}