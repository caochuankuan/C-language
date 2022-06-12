//分解质因数
#include<stdio.h>
int main()
{
	int a,b;
	printf("请输入一个正整数:");
	scanf("%d",&a);
	printf("因数有:");
	for(b=1;b<=a;b++)
		if(a%b==0)
			printf("%4d",b);
	printf("\n");
	return 0;
}

