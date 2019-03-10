#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[] = { 1,2,3,4,5,6 };
	int *p = a;
	printf("sizeof a%d:\n", sizeof a);
	printf("sizeof p%d:\n", sizeof p); 
	/*
	求数组的长度时不能使用sizeof(p) / sizeof(int)，因为 p 只是一个指向 int 类型的指针，编译器并不知道它指向的到底是一个整数还是一系列整数（数组），所以 sizeof(p) 求得的是 p 这个指针变量本身所占用的字节数，而不是整个数组占用的字节数
	*/
	system("pause");
	return 0;
}