#include<stdio.h>
int main()
{
	int a[10],i,max,j;
	printf("请输入10个整数:");
	for (i = 0;i < 10;i++)
	{
		scanf_s("%d", &a[i]);
	}
	max = a[0] * a[0];
	for (i = 1;i < 10;i++)
	{
	
		if (a[i] * a[i] > max)
		{
			max = a[i] * a[i];
			j = a[i];
		}
	}
	printf("其中平方最大的是:%d\n", j);
	return 0;
}