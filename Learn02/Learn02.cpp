#include<stdio.h>
#include<stdlib.h>
int main()
{
	//scanfС����
	int a=0, b=0;
	//�����ʽ����һ�� �ո��������ν
	scanf("%d %d", &a, &b); 
	printf("a:%d\tb:%d\n", a, b);
	scanf("%d,%d", &a, &b);
	printf("a:%d\tb:%d\n", a, b);
	scanf("%d is %d", &a, &b); //������ʽ����Ϊ a is b
	printf("%d %d", a, b);
	system("pause");
	return 0;
}