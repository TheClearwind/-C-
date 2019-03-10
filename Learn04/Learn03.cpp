#include<stdio.h>
#include<stdlib.h>
int m = 13;
int n = 10;

void func1() {
	int n = 20;
	{
		int n = 822;
		printf("block1 n: %d\n", n); //822
	}
	printf("func1 n: %d\n", n); //20
}

void func2(int n) {
	for (int i = 0; i<10; i++) {
		if (i % 5 == 0) {
			printf("if m: %d\n", m); //13
		}
		else {
			int n = i % 4;
			if (n<2 && n>0) {
				printf("else m: %d\n", m);//13
			}
		}
	}
	printf("func2 n: %d\n", n);//30
}

void func3() {
	printf("func3 n: %d\n", n);//10
}

int main() {
	int n = 30;
	func1();
	func2(n);
	func3();
	printf("main n: %d\n", n);//30
	system("pause");
	return 0;
}