#include<stdio.h>
int main(int argc,char* argv[]) {
	//argc Ϊ�������� �Զ���ֵ
	printf("argc=%d\n", argc);
	for (int i = 0;i < argc;i++) {
		//argc[0] Ϊ���������
		puts(argv[i]);
	}
	return 0;
}