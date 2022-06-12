//Ë®ÏÉ»¨Êý
#include<stdio.h>
int main()
{
	int s,a,b,c;
	a=s/100,b=s%100/10,c=s%10;
	for(s=100;s<=999;s++)
	{
		a=s/100;
		b=s%100/10;
		c=s%10;
		if(s==a*a*a+b*b*b+c*c*c)
			printf("%4d",s);
	}
	putchar('\n');
		return 0;
}