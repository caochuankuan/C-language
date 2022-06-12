#include<stdio.h>
#include<windows.h>
int main()
{
	int i, j, k;
	for (i = 0;i < 6;i++)
	{
		Sleep(400);
		for (j = 0;j < 50-2*i;j++)
			printf(" ");
		for (k = 0;k <= 4 * i;k++)
			printf("*");
		printf("\n");
	}
	for (i = 0;i < 8;i++)
	{
		Sleep(400);
		for (j = 0;j < 50 - 2 * i;j++)
			printf(" ");
		for (k = 0;k <= 4 * i;k++)
			printf("*");
		printf("\n");
	}
	for (i = 0;i < 6;i++)
	{
		Sleep(400);
		for (j = 0;j < 47;j++)
			printf(" ");
		for (k = 0;k < 7;k++)
			printf("*");
		printf("\n");
	}
	return 0;
}