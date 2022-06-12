#include<stdio.h>
int main()
{
	int i, j,count=0;
	for (i = 1;i <= 1000;i++)
	{
		for (j = 2;j < i;j++)
		{
			if (i % j == 0)break;
		}
		if (i == j)
		{
			printf("%d\t", i);
			count++;
			if (count % 10 == 0)printf("\n");/*控制10个一行*/
		}
	}
	printf("\n共%d个\n", count);
	return 0;
}

/*
#include<stdio.h>
int main()
{
	int i, j, signal, count = 0;
	for (j = 1;j <= 1000;j++)
	{
		signal = 1;
		for (i = 2;i < j && signal == 1;i++)
			if (j % i == 0)
				signal = 0;
		if (signal == 1)
		{
			printf("%8d", j);
			count++;
		}
	}
	printf("\n共有%d个\n", count);
}
*/
