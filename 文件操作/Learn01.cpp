#include<stdio.h>
#include<stdlib.h>
int main()
{
	//Ϊ�˱�����������������"r"�����ı��ļ�����"b"���򿪶������ļ���
	FILE*fp = fopen("C:/Users/Lambda/Documents/google colab.txt", "r");
	//fgetc ��ȡһ���ַ�
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
	//����Ƿ��ȡ���� feof() ����Ƿ��ȡ�����ļ�ĩβ �ɹ����ط�0
	if (ferror(fp)) { //�����ط�0
		puts("��ȡ����");
	}
	else {
		puts("��ȡ�ɹ�");
	}
	//fputc ���ļ���д��һ���ַ�
	fclose(fp);
	printf("\n");
	
	system("pause");
	
	return 0;
}