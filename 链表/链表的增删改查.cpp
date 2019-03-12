#include<stdio.h>
#include<stdlib.h>
typedef struct LinkList
{
	int num;
	char name[20];
	float score;
	LinkList* pNext;
}* plink;
void PrintLink(plink pheader);
bool DeleteElement(plink pheader)
{
	int num;
	puts("请输入删除的学号");
	scanf("%d", &num);
	plink temp = pheader;
	bool find = false;
	while (temp->pNext!=NULL)
	{
		if (temp->pNext->num == num) {
			find = true;
			plink t = temp->pNext->pNext;
			delete temp->pNext;
			temp->pNext = t;
			break;
		}
		temp = temp->pNext;
	}
	if (!find)
	{
		printf("不存在该数据\n");
	}
	PrintLink(pheader);
	return find;
}
int main()
{
	plink pheader = (plink)malloc(sizeof(LinkList));
	plink pTail = (plink)malloc(sizeof(LinkList));
	pheader->pNext = NULL;
	pTail = pheader;
	//头插法
	/*for (int i = 0;i < 3;i++) {
		puts("请输入数据:");
		plink element = (plink)malloc(sizeof(LinkList));
		scanf("%d %s %f", &element->num, element->name, &element->score);
		element->pNext = pheader->pNext;
		pheader->pNext = element;
	}*/
	//尾插法
	for (int i = 0;i < 3;i++) {
		puts("请输入数据:");
		plink element = (plink)malloc(sizeof(LinkList));
		element->pNext = NULL;
		scanf("%d %s %f", &element->num, element->name, &element->score);
		pTail->pNext = element;
		pTail = element;
	}
	PrintLink(pheader);
	DeleteElement(pheader);
	system("pause");
	return 0;
}

void PrintLink(plink pheader)
{
	plink temp = pheader->pNext;
	while (temp!=NULL)
	{
		printf("学号:%d 姓名:%s 成绩:%f\n", temp->num, temp->name, temp->score);
		temp = temp->pNext;
	}
}
