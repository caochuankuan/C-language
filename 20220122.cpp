#include<stdio.h>
int main()
{
	double s = 1, sum = 1;
	int n,a = 1,b=2,count = 2;
	printf("������Ҫ���������:");
	scanf("%d", &n);
	while (count <= n)
	{
		s = a / b;
		a++;
		b++;
		count++;
		if (count % 2 == 0)
			sum += s;
		else
			sum -= s;
	}
	printf("sum=%.2f", sum);
	return 0;
}