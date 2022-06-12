#include<stdio.h>
int main()
{
	int i, j;
	char a='A';
	for (i = 1;i <= 26;i++)
	{
		for (j = 1;j <= i*2-1;j++)
		{
			printf("%c", a);
		}
		a++;
		printf("\n");
	}
	return 0;
}