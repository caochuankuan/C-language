﻿#include<stdio.h>
int main()
{
	int i, j, k;
	for (i = 0;i < 5;i++)
	{
		for (j = 0;j < 10;j++)
			printf(" ");
		for (k = 0;k <= 2 * i;k++)
			printf("*");
		printf("\n");
	}
	return 0;
}