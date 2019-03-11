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
	//stu1.name = "王兰花";
	//stu1.age = 20;
	//stu1.sex = Male;
	//Student* pstu = &stu1;
	//printf("name:%s\tage:%d\tsex:%d\n", stu1.name, stu1.age, stu1.sex);
	//printf("name:%s\tage:%d\tsex:%d\n", (*pstu).name,(*pstu).age,(*pstu).sex); 
	//printf("name:%s\tage:%d\tsex:%d\n", pstu->name,pstu->age,pstu->sex);//(). 与->等价
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
	共用体占用的内存等于最长的成员占用的内存。共用体使用了内存覆盖技术，同一时刻只能保存一个成员的值，如果对新的成员赋值，就会把原来成员的值覆盖掉
	*/
	system("pause");
	return 0;
}