#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[3][4] = { { 0, 1, 2, 3 },{ 4, 5, 6, 7 },{ 8, 9, 10, 11 } };
	int(*p)[4] = a; //����һ��ָ�������ָ�� ()�Ǳ����
	//printf("%d\n", sizeof(*(p + 1))); //pָ�����һ������4��int������,�����ƶ�һ����16���ֽ�
	//����
	for (int i = 0;i < 3;i++)
	{
		for (int j = 0;j < 4;j++)
		{
			printf("%2d ", p[i][j]);//�ȼ��� *(*(p+i)+j)
		}
		printf("\n");
	}
	int *q[5]; //һ���������int*������
	int(*px)[5]; //��ά����ָ�� ÿһ����һ��5��Ԫ�ص�����
	system("pause");
	return 0;
}