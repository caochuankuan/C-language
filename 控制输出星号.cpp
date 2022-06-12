#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=10;j>=i*2;j--)
		{
			printf("*");
		}
		printf("\n");
	}
	for(i=1;i<=4;i++)
	{
		for(j=0;j<=i*2;j++)
		{
			printf("*");
		}
		printf("\n");
	}
		return 0;
}