#include<stdio.h>
#include<stdlib.h>
int main()
{
	//ð������
	int nums[10] = { 4, 5, 2, 10, 7, 1, 8, 3, 6, 9 };
	int i, j, temp;
	for (i = 0; i<10; i++) {
		printf("%d ", nums[i]);
	}
	putchar('\n');
	//ð�������㷨������ n-1 �ֱȽ�
	for (i = 0;i < 9;i++) {
		for (j = i + 1;j < 10;j++) {
			if (nums[j] < nums[i]) {
				temp = nums[i];
				nums[i] = nums[j];
				nums[j] = temp;
			}
		}
	}
	//�������������
	for (i = 0; i<10; i++) {
		printf("%d ", nums[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}