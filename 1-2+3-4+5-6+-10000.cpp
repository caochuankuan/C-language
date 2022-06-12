#include<stdio.h>
int main()
{
	int i, sum = 0;
	for (i = 1;i <= 10000;i++)
	{
		if (i % 2 != 0)
			sum += i;
		else
			sum -= i;
	}
	printf("sum=%d\n", sum);
	return 0;
}
//for(int i=1,p=1;i<=10000;i++){sum+=i;p=-p;}也行。