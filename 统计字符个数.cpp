#include<stdio.h>
int main()
{
	int a=0,b=0,c=0,d=0;
	char ch;
	while((ch=getchar())!='\n')//重点
	{
		if(ch>='0'&&ch<='9')a++;
		else if(ch>='a'&&ch<='z')b++;
		else if(ch>='A'&&ch<='Z')c++;
		else d++;
	}
	printf("数字:%d个\n",a);
	printf("小写字母:%d个\n",b);
	printf("大写字母:%d个\n",c);
	printf("其它:%d个\n",d);
	return 0;
}