//�ֽ�������
#include<stdio.h>
int main()
{
	int a,b;
	printf("������һ��������:");
	scanf("%d",&a);
	printf("������:");
	for(b=1;b<=a;b++)
		if(a%b==0)
			printf("%4d",b);
	printf("\n");
	return 0;
}

