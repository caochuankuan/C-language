#include<stdio.h>
int main()
{
	int a, b, c, max, mid, min;
	printf("请输入三个不等的整数:");
	scanf_s("%d%d%d", &a, &b, &c);
	max = (a > b ? a : b) > c ? (a > b ? a : b) : c;
	min = (a < b ? a : b) < c ? (a < b ? a : b) : c;
	mid = (a > b ? b : a) > c ? (a > b ? b : a) : (a > b ? a : b);
	printf("max=%d,mid=%d,min=%d\n", max, mid, min);
	return 0;
}