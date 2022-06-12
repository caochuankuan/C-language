//古典问题：有一对兔子，从出生后第3个月起每个月都生一对兔子，小兔子长到第三个月后每个月又生一对兔子，假如兔子都不死，问每个月的兔子总数是多少？
#include<stdio.h>
int main()
{
	int m[23];
	int a;
	m[0]=m[1]=1;
	for(a=0;a<24;a++)
	{
		if(a<2)
			printf("第%d个月的兔子共%d对，即%d只\n",a+1,m[a],2*m[a]);
		else
		{
			m[a]=m[a-1]+m[a-2];
			printf("第%d个月的兔子共%d对，即%d只\n",a+1,m[a],2*m[a]);
		}
	}
	return 0;
}
