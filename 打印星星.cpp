#include<stdio.h>
int main()
{
	int i, j,k;
	for (i = 0;i <=3;i++)/*控制打印前4行*/
	{
		for (j = 0;j <= 2-i;j++)/*空格递减*/
			printf(" ");
		for (k = 0;k <= 2 * i;k++)/*星星递增*/
			printf("*");
		printf("\n");
	}
	for (i = 0;i <= 2;i++)/*控制打印后三行*/
	{
		for (j = 0;j <= i;j++)/*空格递减*/
			printf(" ");
		for (k = 0;k <= 4 - 2 * i;k++)/*星星递增*/
			printf("*");
		printf("\n");
	}
	return 0;
}