#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>
int main()
{
	HANDLE handle=GetStdHandle(STD_OUTPUT_HANDLE); //��ȡhandle
	SetConsoleTextAttribute(handle, 0x2C); //���ÿ���̨��ɫ 0x����ɫ,������ɫ �̵׺���
	/*0 = ��ɫ    8 = ��ɫ    1 = ����      9 = ��ɫ
	   2 = ����    A = ��ɫ    3 = ����      B = ��ǳ��
	   C = ��ɫ    4 = ����    5 = ��ɫ      D = ����
	   6 = ��ɫ    E = ����    7 = ��ɫ      F = ����*/
	printf("Hello World\n");
	system("pause");
	return 0;
}