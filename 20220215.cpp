#include<stdio.h>
int main()
{
	int i, j;
	printf("             ***                  ***\n");
	printf("          *********            *********\n");
	printf("      *****************    *****************\n");
	printf("  **********逸**********  ***********风*********\n");
	for (i = 1;i <= 2;i++)
	{
		for (j = 1;j <= 50;j++)
			printf("*");
		printf("\n");
	}
	for (i = 1;i <= 12;i++)
	{
		for (j = 1;j <= 2 * (i - 1) + 1;j++)
			printf(" ");
		for (j = 1;j <= 50 - 4 * i;j++)
			printf("*");
		printf("\n");
	}
	return 0;
}
