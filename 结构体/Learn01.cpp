#include<stdlib.h>
#include<stdio.h>
enum Sex
{
	Female=0,
	Male
};
struct Student
{
	char* name;
	int age;
	Sex sex;
};
union Data
{
	char a;
	char* b;
	int c;
	double d;
};
int main()
{
	//Student stu1;
	//stu1.name = "������";
	//stu1.age = 20;
	//stu1.sex = Male;
	//Student* pstu = &stu1;
	//printf("name:%s\tage:%d\tsex:%d\n", stu1.name, stu1.age, stu1.sex);
	//printf("name:%s\tage:%d\tsex:%d\n", (*pstu).name,(*pstu).age,(*pstu).sex); 
	//printf("name:%s\tage:%d\tsex:%d\n", pstu->name,pstu->age,pstu->sex);//(). ��->�ȼ�
	Data d;
	d.a = 'a';
	printf("size:%d\n", sizeof d);
	d.b = "Hello C";
	printf("size:%d\n", sizeof d);
	d.c = 'a';
	printf("size:%d\n", sizeof d);
	d.d = 17864195431.492071523;
	printf("size:%d\n", sizeof d);
	/*
	������ռ�õ��ڴ������ĳ�Առ�õ��ڴ档������ʹ�����ڴ渲�Ǽ�����ͬһʱ��ֻ�ܱ���һ����Ա��ֵ��������µĳ�Ա��ֵ���ͻ��ԭ����Ա��ֵ���ǵ�
	*/
	system("pause");
	return 0;
}