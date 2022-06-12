#include<stdio.h>
int main()
{
	int a,n,count=1;
	long tn=0,sn=0;
	printf("请输入第一个整数和整数位数:");
	scanf("%d%d",&a,&n);
	while(count<=n)
	{
		tn+=a;
		sn+=tn;
		tn*=10;
		++count;
	}
	printf("a+aa+...=%d\n",sn);
	return 0;
}