#include<stdio.h>
#include<stdlib.h>
#define N 100
int main()
{
	//fputs fgets
	FILE* fp = fopen("C:\\Users\\Lambda\\Documents\\google colab.txt","r");
	char s[N+1];
	//char *fgets ( char *str, int n, FILE *fp );
	//str 为字符数组，n 为要读取的字符数目，fp 为文件指针。
	/*
	注:1.自动添加/0 即实则读取n-1个
		2.在读取到 n-1 个字符之前如果出现了换行，或者读到了文件末尾，则读取结束
	*/
	while (fgets(s,N,fp)!=NULL)
	{
		printf("%s", s);
	}
	/*
	fputs() 函数用来向指定的文件写入一个字符串，它的用法为：
	int fputs( char *str, FILE *fp );
	str 为要写入的字符串，fp 为文件指针。写入成功返回非负数，失败返回 EOF
	*/
	fclose(fp);
	printf("\n");
	system("pause");
	return 0;
}