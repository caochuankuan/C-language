#include<stdio.h>
int main()
{
	int s, a, b, c;
	printf("请输入三位数的正整数：");
	scanf_s("%d", &s);
	if (s < 100 || s>999)
		printf("输入错误！");
	else
	{
		a = s / 100;
		b = s % 100 / 10;
		c = s % 10;
		printf("逆序:%d%d%d\n", c, b, a);
	}
	return 0;
}