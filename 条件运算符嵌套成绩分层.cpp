//条件运算符嵌套成绩分层
#include<stdio.h>
int main()
{
	int score;
	char grade;
	printf("请输入成绩:");
	scanf("%d",&score);
	grade=score>=90?'A':(score>=80?'B':(score>=70?'C':(score>=60?'D':'E')));
	printf("此成绩的等级:%c\n",grade);
	return 0;
}