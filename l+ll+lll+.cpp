#include<stdio.h>
int main()
{
	int l,i,j,k,sum=0;
	printf("����������λ��:");
	scanf("%d",&j);
	printf("�������һ������:");
	scanf("%d",&l);
	k=l;
	for(i=1;i<=j;i++)
	{
		if(i==1)
		{
			sum=l;
			continue;
		}
		l=l*10+k;
		sum+=l;
	}
	printf("%d+%d+...=%d\n",k,k*10+k,sum);
	return 0;
}