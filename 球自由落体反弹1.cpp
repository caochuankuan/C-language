//以落地点为参考
#include<stdio.h>
int main()
{
	float sn=100,hn=sn/2;
	int count;
	for(count=2;count<=10;count++)
	{
		sn=sn+2*hn;
		hn=hn/2;
	}
	printf("第十次落地共经过%.2f米\n,第十次反弹%.2f米\n",sn,hn);
	return 0;
}

