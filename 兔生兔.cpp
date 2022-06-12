//古典问题：有一对兔子，从出生后第3个月起每个月都生一对兔子，小兔子长到第三个月后每个月又生一对兔子，假如兔子都不死，问每个月的兔子总数是多少？
#include<stdio.h>
int main()
{
	long f1,f2;
	int i;
	f1=f2=1;
	for(i=1;i<=20;i++)
	{
		printf("%12ld %12ld",f1,f2);
		if(i%2==0)printf("\n");//控制输出，每行四个
		f1=f1+f2;
		f2=f1+f2;
	}
	return 0;
}