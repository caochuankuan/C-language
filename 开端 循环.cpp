#include<stdio.h>
#include<windows.h>
int main()
{
	int i, j;
	for (i = 12;i <= 16;i++) 
	{
		for (j = 0;j <= 59;j++)
		{
			printf("当前时间:\t%2d时%2d分\n", i, j);
			Sleep(80);
			if (i == 13 && j == 45)break;
		}
		if (i == 13 && j == 45)break;
	}
	return 0;
}
