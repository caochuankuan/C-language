#include<stdio.h>
int main()
{
	int s, sum = 0;
	for (s = 1;s <= 100;s++)
		sum = sum + s * s;
	printf("sum=%d\n", sum);
	return 0;
}