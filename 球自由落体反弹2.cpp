#include<stdio.h>
int main()
{
	float h=100,s=100;
	int count=1;
	while(count<=10)
	{
		h=h/2;
		printf("��%d�η���%.2f�ף���%d����ع�����%.2f��\n",count,h,count,s);
		s=s+2*h;
		count++;
	}
	return 0;
}