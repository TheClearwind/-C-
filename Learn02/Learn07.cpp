#include <stdio.h>
#include<stdlib.h>
#include <conio.h>
#include <ctype.h>
#define PWDLEN 20

void getpwd(char *pwd, int pwdlen);

int main() {
	char pwd[PWDLEN + 1];
	printf("Input password: ");
	getpwd(pwd, PWDLEN);
	printf("The password is: %s\n", pwd);
	system("pause");
	return 0;
}

/**
* ��ȡ�û����������
* @param  pwd     char*  ����������ڴ���׵�ַ
* @param  pwdlen  int    �������󳤶�
**/
void getpwd(char *pwd, int pwdlen) {
	char ch = 0;
	int i = 0;
	while (i<pwdlen) {
		ch = getch();

		if (ch == '\r') {  //�س���������
			printf("\n");
			break;
		}

		if (ch == '\b' && i>0) {  //����ɾ����
			i--;
			printf("\b \b");
		}
		else if (isprint(ch)) {  //����ɴ�ӡ�ַ�
			pwd[i] = ch;
			printf("*");
			i++;
		}
	}
	pwd[i] = 0; //\0��ascii�����0
}