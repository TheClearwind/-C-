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

	//�Ӽ��̶������ݣ����浽boya
	printf("Input data:\n");
	scanf("%s %d %d %f", pa->name, &pa->num, &pa->age, &pa->score);
	//pa = &boya;
	//��boya�е�����д�뵽�ļ�
	fprintf(fp, "%s %d %d %f\n", pa->name, pa->num, pa->age, pa->score);
	//�����ļ�ָ��
	rewind(fp);
	//���ļ��ж�ȡ���ݣ����浽boyb
	fscanf(fp, "%s %d %d %f\n", pb->name, &pb->num, &pb->age, &pb->score);
	//pb = &boyb;
	//��boyb�е������������ʾ��
	printf("%s  %d  %d  %f\n", pb->name, pb->num, pb->age, pb->score);
	fclose(fp);
	system("pause");
	return 0;
}
