#include<stdio.h>
#include<stdlib.h>
int sum(int,int); //º¯ÊıÉùÃ÷
int main()
{
	printf("%d\n", sum(1, 100));
	system("pause");
	return 0;
}
int sum(int m, int n)
{
	int result = 0;
	for (int i = m;i <= n;i++) {
		result += i;
	}
	return result;
}