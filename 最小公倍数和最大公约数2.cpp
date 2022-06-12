//辗转相除法求最大公约数。
//两个正整数的最大公约数与最小公倍数的乘积等于这两个整数的乘积。
#include<stdio.h>
int main()
{
	int m,n,i,j;
	printf("请输入两个正整数:");
	scanf("%d%d",&m,&n);
	j=m*n;//后面mn的值会变，所以提前计算两个数的乘积。
	i=m%n;
	while(i!=0)
	{
		m=n;
		n=i;
		i=m%n;
	}
	printf("最大公约数:%d\n最小公倍数:%d\n",n,j/n);
	return 0;
}