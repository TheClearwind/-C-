#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
	//�������뺯��
	//getchar
	/*char a = getchar();
	printf("a=%c\n",a);*/

	//getche
	//char c = getche(); //conio.h��  �����������Ҫ���س�
	//printf("c=%c\n", c); 

	//getch:�����Ե�getche
/*	char c = getch(); 
	printf("c=%c\n", c);*/ 

	//gets
	char a[20];
	gets_s(a); //���Զ�ȡ���ո���ַ���
	printf(a); 

	/*�����г��õĴӿ���̨��ȡ���ݵĺ�������������Ƿֱ��� scanf()��getchar()��getche()��getch() �� gets()������ scanf()��getchar()��gets() �Ǳ�׼����������������ƽ̨��getche() �� getch() ���Ǳ�׼������ֻ������ Windows��

	scanf() ��ͨ�õ����뺯���������Զ�ȡ�������͵����ݡ�

	getchar()��getche() �� getch() ��ר�õ��ַ����뺯���������ڻ������ͻ��Է����� scanf() ���Ų�ͬ�����ԣ��� scanf() ��������ġ�

	gets() ��ר�õ��ַ������뺯������ scanf() ��ȣ�gets() ����Ҫ�����ǿ��Զ�ȡ���пո���ַ�����

	scanf() ����һ���Զ�ȡ���������ͬ���߲�ͬ�����ݣ�getchar()��getche()��getch() �� gets() ÿ��ֻ�ܶ�ȡһ���ض����͵����ݣ�����һ���Զ�ȡ������ݡ�*/
	system("pause");
	return 0;
}