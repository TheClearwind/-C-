#include<stdio.h>
#include<stdlib.h>
#define ABC 0
int main() 
{
	//��������
//#if _WIN32
//	printf("Hello windows\n");
//	system("pause");
//#elif __LINUX__
//	printf("Hello Linux");
//#endif // _WIN32
#ifdef ABC //���ABC�����(���ܴ���ɶ �������Ƕ����˾���)��ִ��
	printf("ifdef\n");
#else
	printf("Hi\n");
#endif 
	getchar();
	return 0;
}