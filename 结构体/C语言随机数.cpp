#include <stdio.h>
#include <stdlib.h>
#include<time.h>
int Getrand(int a, int b) {
	return rand() % (b-a)+a;
}
int main()
{
	srand(time(NULL)); //使用时间作为随机种子
	//生成[a,b]的随机数 rand()%(b-a)+a
	int a;
	a = Getrand(0, 10);
	printf("a=%d\n", a);
	a = Getrand(0, 10);
	printf("a=%d\n", a);
	a = Getrand(0, 10);
	printf("a=%d\n", a);
	//未设置种子 所以每一次运行产生的随机数都相同 使用srand设置随机数种子
	//printf("a=%d\n", a);
	system("pause");
	return 0;
}