#include<stdio.h>
#include<stdlib.h>
int main() {
	int a;
	//printf("Hello World\n");
	//puts("Hello World");//puts 默认带换行
	puts("我"
		"是"
		"大"
		"帅"
		"哥"); //字符串的形式分割
	puts(
		"C语言中文网，一个学习C语言和C++的网站，他们坚持用工匠的精神来打磨每一套教程。"
		"坚持做好一件事情，做到极致，让自己感动，让用户心动，这就是足以传世的作品！"
		"C语言中文网的网址是：http://c.biancheng.net"
	); 
	//在 puts 函数中，可以将一个较长的字符串分割成几个较短的字符串，这样会使得长文本的格式更加整齐。
	//注意，这只是形式上的分割，编译器在编译阶段会将它们合并为一个字符串，它们放在一块连续的内存中。

	system("pause");
	return 0;
}