#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>
int main()
{
	HANDLE handle=GetStdHandle(STD_OUTPUT_HANDLE); //获取handle
	SetConsoleTextAttribute(handle, 0x2C); //设置控制台颜色 0x背景色,文字颜色 绿底红字
	/*0 = 黑色    8 = 灰色    1 = 淡蓝      9 = 蓝色
	   2 = 淡绿    A = 绿色    3 = 湖蓝      B = 淡浅绿
	   C = 红色    4 = 淡红    5 = 紫色      D = 淡紫
	   6 = 黄色    E = 淡黄    7 = 白色      F = 亮白*/
	printf("Hello World\n");
	system("pause");
	return 0;
}