#include<stdio.h>
int main()
{
	int score;
	char grade;
	printf("������ɼ�:");
	scanf("%d",&score);
	if(score>=90)grade='A';
	else if(score>=80)grade='B';
	else if(score>=70)grade='C';
	else if(score>=60)grade='D';
	else grade='E';
	printf("�˳ɼ��ĵȼ�:%c\n",grade);
	return 0;
}
