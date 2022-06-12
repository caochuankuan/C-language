#include<stdio.h>
int main()
{
	int a,b,c,d=0;
	for(a=1;a<=4;a++)
		for(b=1;b<=4;b++)
			for(c=1;c<=4;c++)
				if((a!=b)&&(a!=c)&&(b!=c))
				{
					d++;
					printf("%d%d%d\t",a,b,c);
					if(d%4==0)printf("\n");//控制输出。每四个换行。
				}
	return 0;
}
