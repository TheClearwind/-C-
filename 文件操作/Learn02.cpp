#include<stdio.h>
#include<stdlib.h>
#define N 100
int main()
{
	//fputs fgets
	FILE* fp = fopen("C:\\Users\\Lambda\\Documents\\google colab.txt","r");
	char s[N+1];
	//char *fgets ( char *str, int n, FILE *fp );
	//str Ϊ�ַ����飬n ΪҪ��ȡ���ַ���Ŀ��fp Ϊ�ļ�ָ�롣
	/*
	ע:1.�Զ����/0 ��ʵ���ȡn-1��
		2.�ڶ�ȡ�� n-1 ���ַ�֮ǰ��������˻��У����߶������ļ�ĩβ�����ȡ����
	*/
	while (fgets(s,N,fp)!=NULL)
	{
		printf("%s", s);
	}
	/*
	fputs() ����������ָ�����ļ�д��һ���ַ����������÷�Ϊ��
	int fputs( char *str, FILE *fp );
	str ΪҪд����ַ�����fp Ϊ�ļ�ָ�롣д��ɹ����طǸ�����ʧ�ܷ��� EOF
	*/
	fclose(fp);
	printf("\n");
	system("pause");
	return 0;
}