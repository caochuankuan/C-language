//����ߵ�Ϊ�ο�
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
	printf("��ʮ����ؾ���:%.2f��\n",sh-h);
	printf("��ʮ�η���:%.2f��\n",h);
	return 0;
}