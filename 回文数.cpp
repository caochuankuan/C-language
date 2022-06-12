#include<stdio.h>
int main()
{
	int a, b, c, d, e, f;
	printf("请输入一个五位正整数:");
	scanf_s("%d", &f);
	a = f / 10000;
	b = f % 10000 / 1000;
	c = f % 1000 / 100;
	d = f % 100 / 10;
	e = f % 10;
	if (a == e && b == d)
		printf("%d是回文数\n", f);
	else
		printf("%d不是回文数\n", f);
	return 0;
}