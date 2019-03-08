#include<stdio.h>
#include<stdlib.h>
int main()
{
	//冒泡排序
	int nums[10] = { 4, 5, 2, 10, 7, 1, 8, 3, 6, 9 };
	int i, j, temp;
	for (i = 0; i<10; i++) {
		printf("%d ", nums[i]);
	}
	putchar('\n');
	//冒泡排序算法：进行 n-1 轮比较
	for (i = 0;i < 9;i++) {
		for (j = i + 1;j < 10;j++) {
			if (nums[j] < nums[i]) {
				temp = nums[i];
				nums[i] = nums[j];
				nums[j] = temp;
			}
		}
	}
	//输出排序后的数组
	for (i = 0; i<10; i++) {
		printf("%d ", nums[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}