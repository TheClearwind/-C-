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
	puts("������ɾ����ѧ��");
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
		printf("�����ڸ�����\n");
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
	//ͷ�巨
	/*for (int i = 0;i < 3;i++) {
		puts("����������:");
		plink element = (plink)malloc(sizeof(LinkList));
		scanf("%d %s %f", &element->num, element->name, &element->score);
		element->pNext = pheader->pNext;
		pheader->pNext = element;
	}*/
	//β�巨
	for (int i = 0;i < 3;i++) {
		puts("����������:");
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
		printf("ѧ��:%d ����:%s �ɼ�:%f\n", temp->num, temp->name, temp->score);
		temp = temp->pNext;
	}
}
