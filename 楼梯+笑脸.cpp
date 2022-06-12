#include<stdio.h>
int main()
{
	int i,j;
	printf("\1\1\n");//\1是转义字符。
	for (i = 1;i < 11;i++)
	{
		for (j = 1;j <= i;j++)
		{
			printf("%c%c", '\xA1', '\xF6');
		}
		printf("\n");
	}
	return 0;
}