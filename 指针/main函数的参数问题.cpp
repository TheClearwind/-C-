#include<stdio.h>
int main(int argc,char* argv[]) {
	//argc 为参数个数 自动赋值
	printf("argc=%d\n", argc);
	for (int i = 0;i < argc;i++) {
		//argc[0] 为本身程序名
		puts(argv[i]);
	}
	return 0;
}