#include<stdio.h>
int main()
{
	int a,n,count=1;
	long tn=0,sn=0;
	printf("�������һ������������λ��:");
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