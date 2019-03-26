#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 1, b = -1, c = 2;
	//if (0)
	//	//不加{}if的效用只有第一句 VS的自动格式化功能也证明了这一点
	//printf("第一句");
	//printf("第二句\n");
	if (a < b)
		if (b < 0) printf("B");
	else printf("C"); //else 和与它最相近的哪个if匹配(无{}明确指明的时候)
	system("pause");
	return 0;
}