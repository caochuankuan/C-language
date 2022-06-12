#include<stdio.h>
int main()
{
	int i, score, t, a[10];
	for (t = 0;t <= 9;t++)
		a[t] = t;
	printf("请输入参加活动次数：");
	scanf_s("%d", &t);
	if (t < 0)
		printf("活动次数不能为负数");
	else
	{
		if (t >= 0 && t <= 1)
			score = 1;
		if (t >= 2 && t <= 3)
			score = 2;
		if (t >= 4 && t <= 7)
			score = a[t];
		if (t >= 8 && t <= 10)
			score = 8;
		if (t > 10)
			score = 10;
		printf("该加%d分\n", score);
	}
	return 0;
}