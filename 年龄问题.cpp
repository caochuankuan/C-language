//今年父亲30岁，儿子6岁，问多少年后父亲的年龄是儿子年龄的2倍。
#include<stdio.h>
int main()
{
	int i, j,count=0;
	for (i = 30, j = 6;i > 2 * j;i++, j++)
		count++;
	printf("%d年\n", count);
	return 0;
}