#include<stdio.h>
int main()
{
	int i, j=0;
	for ( i = 1;i <= 500;i++)
		if (i % 3 == 2 && i % 5 == 3 && i % 7 == 2)
		{
			printf("%d\t", i);
			j++;
		}
	printf("\n共%d个\n", j);
	return 0;
}