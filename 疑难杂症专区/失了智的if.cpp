#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 1, b = -1, c = 2;
	//if (0)
	//	//����{}if��Ч��ֻ�е�һ�� VS���Զ���ʽ������Ҳ֤������һ��
	//printf("��һ��");
	//printf("�ڶ���\n");
	if (a < b)
		if (b < 0) printf("B");
	else printf("C"); //else ��������������ĸ�ifƥ��(��{}��ȷָ����ʱ��)
	system("pause");
	return 0;
}