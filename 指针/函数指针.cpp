#include<stdio.h>
#include<stdlib.h>
int max(int x, int y)
{
	return x > y ? x : y;
}

int main()
{
	//����ָ�� returnType (*pointerName) (param list) ���е�һ�����Ų�����
	// returnType *pointerName(param list) ��ʾһ������ָ��ĺ���
	int a = 5, b = 6;
	int *p = &a;
	int(*pmax)(int, int) = max; //�������������žͱ�ʾ��ַ(��pythonһ��)
	printf("%d\n",(*pmax)(a, b));
	printf("%d\n", pmax(a, b)); //�Ӳ���*�Ŷ�һ��
	system("pause");
	return 0;
}