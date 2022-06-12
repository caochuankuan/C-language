#include<stdio.h>
int main()
{
	int i,temp;
	double a=2,b=1,d=a/b,sum = 0.0;
	for (i = 1;i <= 20;i++)
	{
		sum=sum+d;
		temp = a;
		a = a + b;
		b = temp;
		d = a / b;
	}
	printf("2/1+3/2+5/3+8/5+++的前20项之和:%.2lf\n", sum);
	return 0;
}