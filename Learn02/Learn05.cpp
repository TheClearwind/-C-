#include<stdio.h>
#include<stdlib.h>
int main()
{
	//�ӵ�scnaf(��)
	int a = 0, b = 0;
	scanf("a=%d", &a);
	//fflush(stdin);  fflush������ջ���ķ�ʽ ����ͨ��
	//��ջ���1:
	char c;
	while ((c = getchar()) != '\n' &&c != EOF);
	scanf("b=%d", &b);
	printf("a=%d b=%d\n", a, b);
	//��ջ���2:
	//scanf("%*[^\n]"); scanf("%*c"); //�±Ƶ�����
	system("pause");
	return 0;
}