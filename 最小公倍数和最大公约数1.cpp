#include<stdio.h>
int main()
{
	int m,n,i;
	printf("请输入两个正整数:");
	scanf("%d%d",&m,&n);
	if(m>n)i=m;
	else i=n;
	while((i%m!=0)||(i%n!=0))
		i++;
	printf("%d和%d的最小公倍数:%d,最大公约数是:%d\n",m,n,i,m*n/i);
	return 0;
}