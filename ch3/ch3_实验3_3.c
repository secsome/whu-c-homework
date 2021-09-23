#include<stdio.h>

int main(void)
{
	int num1, num2, num3;
	float score1, score2, score3, ave;
	printf("请输入3个学号:\n");
	scanf("%d%d%d", &num1, &num2, &num3);
	printf("请输入三个数学成绩:\n");
	scanf("%f%f%f", &score1, &score2, &score3);
	ave = (score1 + score2 + score3) / 3;
	printf("学号%d : 成绩%.1f\n", num1, score1);
	printf("学号%d : 成绩%.1f\n", num2, score2);
	printf("学号%d : 成绩%.1f\n", num3, score3);
	printf("%f\n", ave);
	return 0;
}