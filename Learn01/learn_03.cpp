#include<stdio.h>
#include<stdlib.h>
int main()
{
	//int a = 5;
	//short b = 3;
	//long c = 4;
	//printf("int:%d short:%d long:%d\n", sizeof a, sizeof(b),sizeof(long)); 
	// //sizeof ������ȡĳ���������ͻ������ռ�õ��ֽ����������������Ǳ������ƣ���ô����ʡ��( )������������������ͣ��ͱ������( )��
	////��Ҫע����ǣ�sizeof ��C�����еĲ����������Ǻ��������Կ��Բ���()

	//���������
	int a = 0b1110;
	//����˽���
	int b = 012234; //5276
	//����ʮ������
	int c = 0xABCD; //43981
	printf("a:%d b:%d c:%d\n", a, b, c);
	printf("a:%d b:%o c:%x\n",a,b,c);
	printf("c:%X\n", c); //�Դ�д��ʽ��ʾʮ������
	printf("a:%d b:%#o c:%#x\n", a, b, c); //��ʾ�˽���,ʮ�����Ƶ�ǰ׺(0,0x)�Բ�������
	system("pause");
	return 0;
}