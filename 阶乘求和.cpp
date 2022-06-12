#include<stdio.h>
int main()
{
	double i, j, s , sum = 0;
	for (i = 1;i <= 20;i++) 
	{
		s = 1;
		for (j = 1;j <= i;j++) 
		{
			s = s * j;
		}
		printf("%.0f的阶乘：%.0f\n", i, s);
		sum = sum + s;
	}
	printf("1!+2!+3!+++20!=%.0f\n", sum);
	return 0;
}