//���������Ƕ�׳ɼ��ֲ�
#include<stdio.h>
int main()
{
	int score;
	char grade;
	printf("������ɼ�:");
	scanf("%d",&score);
	grade=score>=90?'A':(score>=80?'B':(score>=70?'C':(score>=60?'D':'E')));
	printf("�˳ɼ��ĵȼ�:%c\n",grade);
	return 0;
}