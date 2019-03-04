#include <stdio.h>
#include<stdlib.h>
int main() 
{
	//puts("\x68\164\164\x70://c.biancheng.\x6e\145\x74"); //转义字符 使用八进制或十六进制表示


	//令人懵逼的++--
	//int a = 10, b = 20, c = 30, d = 40;
	//int a1 = ++a, b1 = b++, c1 = --c, d1 = d--;

	//printf("a=%d, a1=%d\n", a, a1); //11 11
	//printf("b=%d, b1=%d\n", b, b1); //21 20
	//printf("c=%d, c1=%d\n", c, c1);//29 29
	//printf("d=%d, d1=%d\n", d, d1);//39 40

	int a = 12, b = 1;
	int c = a - (b--);  // ① 11
	int d = (++a) - (--b);  // ② 14
	printf("c=%d, d=%d\n", c, d);
	system("pause");
	return 0;
}