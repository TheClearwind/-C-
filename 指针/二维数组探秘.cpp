#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[3][4] = { { 0, 1, 2, 3 },{ 4, 5, 6, 7 },{ 8, 9, 10, 11 } };
	int(*p)[4] = a; //定义一个指向数组的指针 ()是必须的
	//printf("%d\n", sizeof(*(p + 1))); //p指向的是一个含有4个int的数组,所以移动一次是16个字节
	//遍历
	for (int i = 0;i < 3;i++)
	{
		for (int j = 0;j < 4;j++)
		{
			printf("%2d ", p[i][j]);//等价于 *(*(p+i)+j)
		}
		printf("\n");
	}
	int *q[5]; //一个含有五个int*的数组
	int(*px)[5]; //二维数组指针 每一行是一个5个元素的数组
	system("pause");
	return 0;
}