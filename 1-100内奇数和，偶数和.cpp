#include<stdio.h>
int main()
{
	int s1 = 0, s2 = 0;
	for (int i = 1;i <= 100;i++)
	{
		if (i % 2 == 0)
			s2 += i;
		else
			s1 += i;
	}
	printf("奇数和:%d,偶数和:%d\n", s1, s2);
	return 0;
}