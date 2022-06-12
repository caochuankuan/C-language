#include<stdio.h>
int main()
{
	char a;
	printf("请输入C到X之间的一个大写字母:");
	scanf_s("%c", &a);
	if (a < 'C' || a > 'X')
		printf("输入错误\n");
	else
		printf("%c%c%c%c%c\n", a - 2, a - 1, a, a + 1, a + 2);//用for(a=a-2;a<=a+2;a++)printf("%c",a);也行。
	return 0;
}