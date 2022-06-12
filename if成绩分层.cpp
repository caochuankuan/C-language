#include<stdio.h>
int main()
{
	int score;
	char grade;
	printf("请输入成绩:");
	scanf("%d",&score);
	if(score>=90)grade='A';
	else if(score>=80)grade='B';
	else if(score>=70)grade='C';
	else if(score>=60)grade='D';
	else grade='E';
	printf("此成绩的等级:%c\n",grade);
	return 0;
}
