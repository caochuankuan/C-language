//����ص�Ϊ�ο�
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
	printf("��ʮ����ع�����%.2f��\n,��ʮ�η���%.2f��\n",sn,hn);
	return 0;
}

