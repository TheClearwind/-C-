#include<stdio.h>
#include<stdlib.h>

struct stu {
	char name[3];
	int num;
	int age;
	float score;
} boya, boyb, *pa, *pb;

int main() {
	FILE *fp;
	pa = &boya;
	pb = &boyb;
	if ((fp = fopen("D:\\demo.txt", "wt+")) == NULL) {
		puts("Fail to open file!");
		exit(0);
	}

	//从键盘读入数据，保存到boya
	printf("Input data:\n");
	scanf("%s %d %d %f", pa->name, &pa->num, &pa->age, &pa->score);
	//pa = &boya;
	//将boya中的数据写入到文件
	fprintf(fp, "%s %d %d %f\n", pa->name, pa->num, pa->age, pa->score);
	//重置文件指针
	rewind(fp);
	//从文件中读取数据，保存到boyb
	fscanf(fp, "%s %d %d %f\n", pb->name, &pb->num, &pb->age, &pb->score);
	//pb = &boyb;
	//将boyb中的数据输出到显示器
	printf("%s  %d  %d  %f\n", pb->name, pb->num, pb->age, pb->score);
	fclose(fp);
	system("pause");
	return 0;
}
