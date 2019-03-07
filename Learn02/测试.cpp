#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
	char c=getchar();
	char c1 = getch();  //按下回车getch->'\r'  getchar->'\n'
	printf("c=%d\n", c);
	printf("c1=%d\n", c1);
	printf("r=%d n=%d\n", '\r', '\n');
	system("pause");
	return 0;
}