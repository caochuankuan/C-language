//100-200的素数，个数，总和。
#include<stdio.h>
int main()
{
	int a,b,count=0,sum=0;
	for(a=100;a<=200;a++)
	{
		for(b=2;b<a;b++)
			if(a%b==0)break;//如果不是素数，结束本次循环。
		if(a==b)
		{
			printf("%4d",a);
			count++;
			sum+=a;
		}
	}
	printf("\n 共%d个\n",count);
	printf(" 总和：%d\n",sum);
	return 0;
}