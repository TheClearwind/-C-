#include<stdio.h>
#include<stdlib.h>
int main()
{
	int score[5][3] = { {80,75,92},{61,65,71},{59,63,70},{85,87,90},{76,77,85} };
	float v[3] = { 0 };
	float average = 0;
	for (int i = 0;i < 5;i++) {
		for (int j = 0;j < 3;j++) {
			average += score[i][j];
			v[j] += score[i][j];
		}
	}
	average /= 15.0;
	printf("平均分:%f\n数学:%f\nC:%f\n英语:%f\n", average, v[0]/5.0, v[1]/5.0, v[2]/5.0);
	system("pause");
	return 0;
}