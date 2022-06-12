#include<stdio.h>
int main()
{
	float h=100,s=100;
	int count=1;
	while(count<=10)
	{
		h=h/2;
		printf("第%d次反弹%.2f米，第%d次落地共经过%.2f米\n",count,h,count,s);
		s=s+2*h;
		count++;
	}
	return 0;
}