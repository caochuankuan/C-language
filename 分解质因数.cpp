//�ֽ�������
#include<stdio.h>
int main()
{
	int a,b;
	printf("������һ��������:");
	scanf("%d",&a);
	printf("%d=",a);
	for(b=2;b<=a;b++)
	{
		while(b!=a)//1.�����ȣ�ֱ�������2.�˲�ѭ��ȷ����90=2*3*3*5����������3�������
		{
			if(a%b==0)
			{
				printf("%d*",b);
				a=a/b;
			}
			else
				break;
		}
	}
	printf("%d",b-1);//��Ϊ����whileѭ��������b����a���������һ��������ˣ�������ϡ�
	printf("\n");
	return 0;
}

