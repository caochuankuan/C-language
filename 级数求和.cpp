#include<stdio.h>
int main()
{
	double s = 1, sum = 1,a=1,b=2;
	int n,count = 2;
	printf("请输入要计算的项数:");
	scanf_s("%d", &n);
	while (count <= n)
	{
		s = a / b;
		if (count % 2 == 0)
			sum += s;
		else
			sum -= s;
		a++;
		b++;
		count++;
	}
	printf("sum=%.2f", sum);
	return 0;
}