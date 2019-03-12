#include<stdio.h>
#include<stdlib.h>
int main()
{
	//为了保险起见，我们最好用"r"来打开文本文件，用"b"来打开二进制文件。
	FILE*fp = fopen("C:/Users/Lambda/Documents/google colab.txt", "r");
	//fgetc 读取一个字符
	while (true)
	{
		char c = fgetc(fp);
		if (c == EOF) {
			break;
		}
		else
		{
			putchar(c);
		}
	}
	//检测是否读取出错 feof() 检测是否读取到了文件末尾 成功返回非0
	if (ferror(fp)) { //出错返回非0
		puts("读取出错");
	}
	else {
		puts("读取成功");
	}
	//fputc 向文件中写入一个字符
	fclose(fp);
	printf("\n");
	
	system("pause");
	
	return 0;
}