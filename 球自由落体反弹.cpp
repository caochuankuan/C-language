//以最高点为参考
#include<stdio.h>
int main()
{
	float h=100,sh=0;
	int count=0;
	while(count<10)
	{
		sh=sh+h;
		h=h/2;
		sh=sh+h;
		count++;
	}
	printf("第十次落地经过:%.2f米\n",sh-h);
	printf("第十次反弹:%.2f米\n",h);
	return 0;
}