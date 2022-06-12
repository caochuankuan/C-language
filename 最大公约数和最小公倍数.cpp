#include<stdio.h>
int main()
{
	int m,n,i;
	printf("请输入两个整数:");
	scanf("%d%d",&m,&n);
	if(m<n)
		i=m;
	else
		i=n;//确保i小于等于两个整数中的较小值。
	while((m%i!=0)||(n%i!=0))//此条件确保两个整数同时整除i的最大值，即最大公约数。
		i--;
	printf("%d和%d的最大公约数为:%d,最小公倍数为:%d\n",m,n,i,m*n/i);//两个整数的乘积等于最大公约数与最小公倍数的乘积。
	return 0;
}