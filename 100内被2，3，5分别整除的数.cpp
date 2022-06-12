#include<stdio.h>
int main()
{
	int s2 = 0, s3 = 0, s5 = 0, i;
	for (i = 1;i <= 100;i++)
	{
		if (i % 2 == 0)
		{
			printf("(2)%d\t", i);
			s2 += i;
			/*此处也可以用continue*/
		}
		else if (i % 3 == 0)
		{
			printf("(3)%d\t", i);
			s3 += i;
			/*此处也可以用continue*/
		}
		else if (i % 5 == 0)
		{
			printf("(5)%d\t", i);
			s5 += i;
			/*此处也可以用continue*/
		}
	}
	printf("1-100中，能被2整除的数的和:%d,能被3整除的数的和:%d,能被5整除的数的和:%d", s2, s3, s5);
	return 0;
}