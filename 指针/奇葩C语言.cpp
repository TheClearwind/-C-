#include<stdio.h>
#include<stdlib.h>
int main()
{
	//����C����
	int a[] = { 1,2,3,4 };
	printf("%d\n", 3[a]); //�ȼ���a[3]
	int* p = a;
	printf("%d\n", 3[p]);//�ȼ���p[3]
	system("pause");
	return 0;
}