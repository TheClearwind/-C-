#include<stdio.h>
#include<stdlib.h>
#define N 2
struct stu {
	char name[10]; //����
	int num;  //ѧ��
	int age;  //����
	float score;  //�ɼ�
}boya[N], boyb[N], *pa, *pb;
int main()
{
	//fread() fwrite()
	//ʹ��fread,fwriteʱ,�Ƽ�ʹ�ö����ƴ�
	/*
	fread() ����������ָ���ļ��ж�ȡ�����ݡ���ν�����ݣ�Ҳ�������ɸ��ֽڵ����ݣ�������һ���ַ���������һ���ַ����������Ƕ������ݣ���û��ʲô���ơ�fread() ��ԭ��Ϊ��
	size_t fread ( void *ptr, size_t size, size_t count, FILE *fp );
	fwrite() �����������ļ���д������ݣ�����ԭ��Ϊ��
	size_t fwrite ( void * ptr, size_t size, size_t count, FILE *fp );
	�Բ�����˵����
	ptr Ϊ�ڴ������ָ�룬�����������顢�������ṹ��ȡ�fread() �е� ptr ������Ŷ�ȡ�������ݣ�fwrite() �е� ptr �������Ҫд������ݡ�
	size����ʾÿ�����ݿ���ֽ�����
	count����ʾҪ��д�����ݿ�Ŀ�����
	fp����ʾ�ļ�ָ�롣
	�����ϣ�ÿ�ζ�д size*count ���ֽڵ�����
	*/
	FILE *fp;
	int i;
	pa = boya;
	pb = boyb;
	if ((fp = fopen("demo.txt", "wb+")) == NULL) {
		puts("Fail to open file!");
		exit(0);
	}
	//�Ӽ�����������
	printf("Input data:\n");
	for (i = 0; i<N; i++, pa++) {
		scanf("%s %d %d %f", pa->name, &pa->num, &pa->age, &pa->score);
	}
	//������ boya ������д���ļ�
	fwrite(boya, sizeof(struct stu), N, fp);
	//���ļ�ָ�����õ��ļ���ͷ
	rewind(fp);
	//���ļ���ȡ���ݲ����浽���� boyb
	fread(boyb, sizeof(struct stu), N, fp);
	//������� boyb �е�����
	for (i = 0; i<N; i++, pb++) {
		printf("%s  %d  %d  %f\n", pb->name, pb->num, pb->age, pb->score);
	}
	fclose(fp);
	system("pause");
	return 0;
}