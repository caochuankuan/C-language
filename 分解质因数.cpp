//分解质因数
#include<stdio.h>
int main()
{
	int a,b;
	printf("请输入一个正整数:");
	scanf("%d",&a);
	printf("%d=",a);
	for(b=2;b<=a;b++)
	{
		while(b!=a)//1.如果相等，直接输出。2.此层循环确保像90=2*3*3*5这种有两个3都输出。
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
	printf("%d",b-1);//因为上面while循环条件是b不等a，所以最后一个输出不了，这里加上。
	printf("\n");
	return 0;
}

