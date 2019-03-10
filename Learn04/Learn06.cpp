#include<stdio.h>
#include<stdlib.h>
#define ABC 0
int main() 
{
	//条件编译
//#if _WIN32
//	printf("Hello windows\n");
//	system("pause");
//#elif __LINUX__
//	printf("Hello Linux");
//#endif // _WIN32
#ifdef ABC //如果ABC定义过(不管代表啥 反正就是定义了就行)就执行
	printf("ifdef\n");
#else
	printf("Hi\n");
#endif 
	getchar();
	return 0;
}