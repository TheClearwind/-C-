#include <stdio.h>
#include<stdlib.h>
int main()
{
	//short a = 0100;  //�˽���
	//int b = -0x1;  //ʮ������
	//long c = 720;  //ʮ����

	//unsigned short m = 0xffff;  //ʮ������
	//unsigned int n = 0x80000000;  //ʮ������
	//unsigned long p = 100;  //ʮ����

	////���޷��ŵ���ʽ����з�����
	//printf("a=%#ho, b=%#x, c=%ld\n", a, b, c); //%o %x����������޷�����
	////���з���������ʽ����޷������ͣ�ֻ����ʮ������ʽ�����
	//printf("m=%hd, n=%d, p=%ld\n", m, n, p);
	/*
		b = -0x1
	= [1000 0000 ���� 0000 0001]ԭ
	= [1111 1111 ���� 1111 1110]��
	= [1111 1111 ���� 1111 1111]��
	= [0xffffffff]�� printf %x �޷����������Ϊ 0xffffffff

		m=0xffff
	=[1111 1111 1111 1111]��
	= [1111 1111 1111 1110]��
	= [1000 0000 0000 0001]ԭ
	= -1

		n= 0x80000000
	=[1000 0000 ���� 0000 0000]��
	= -2^31
	= -2147483648
	*/
	unsigned int a = 0x100000000;
	int b = 0xffffffff;
	printf("a=%u, b=%d\n", a, b); 
	/*
			a������λ���
			[1 0000 0000 .....   0000]
		=1���
		=0

			[1111 1111 ���� 1111 1111]��
		= [1111 1111 ���� 1111 1110]��
		= [1000 0000 ���� 0000 0001]ԭ
		= -1
	*/
	system("pause");
	return 0;
}