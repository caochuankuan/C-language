#include<stdio.h>
int main()
{
	int a=0,b=0,c=0,d=0;
	char ch;
	while((ch=getchar())!='\n')//�ص�
	{
		if(ch>='0'&&ch<='9')a++;
		else if(ch>='a'&&ch<='z')b++;
		else if(ch>='A'&&ch<='Z')c++;
		else d++;
	}
	printf("����:%d��\n",a);
	printf("Сд��ĸ:%d��\n",b);
	printf("��д��ĸ:%d��\n",c);
	printf("����:%d��\n",d);
	return 0;
}