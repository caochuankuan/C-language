#include<stdio.h>
int main()
{
	int a, b = 0, sum = 0;
	printf("四位数中能同时被13和20整除的数有：\n");
		for (a = 1000;a <= 9999;a++)
		{
			if (a % 13 == 0 && a % 20 == 0)
			{
				printf("%d\t", a);
				b++;
				sum += a;
			}
		}
	printf("\n\n符合要求的数一共%d个\n", b);
	printf("\n符合要求的数的和为：%d\n", sum);
	return 0;
}