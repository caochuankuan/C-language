#include<stdio.h>
int main()
{
	int m,n,i;
	printf("����������������:");
	scanf("%d%d",&m,&n);
	if(m>n)i=m;
	else i=n;
	while((i%m!=0)||(i%n!=0))
		i++;
	printf("%d��%d����С������:%d,���Լ����:%d\n",m,n,i,m*n/i);
	return 0;
}