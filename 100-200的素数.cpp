//100-200���������������ܺ͡�
#include<stdio.h>
int main()
{
	int a,b,count=0,sum=0;
	for(a=100;a<=200;a++)
	{
		for(b=2;b<a;b++)
			if(a%b==0)break;//���������������������ѭ����
		if(a==b)
		{
			printf("%4d",a);
			count++;
			sum+=a;
		}
	}
	printf("\n ��%d��\n",count);
	printf(" �ܺͣ�%d\n",sum);
	return 0;
}