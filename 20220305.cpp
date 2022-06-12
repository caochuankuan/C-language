//回文数
#include<stdio.h>
#define N 10000
int main()
{
	printf("1--10000中回文数有：");
	int i,oldi, newi,temp,count=0;
	for (i = 0;i <= N;i++)
	{
		newi = 0;
		oldi = i;
		do
		{
			temp = oldi % 10;
			oldi = oldi / 10;
			newi = newi * 10 + temp;
		} while (oldi != 0);
		if (newi == i)
		{
			if (count % 10 == 0)
				printf("\n");
			printf("%d\t", i);
			count++;
		}

	}
	printf("\n\n共%d个\t\n", count);
	return 0;
}