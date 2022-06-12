#include<stdio.h>
#include<math.h>
int main()
{
	int x,y;
	for(int i=1;;i++)
	{
		x=sqrt(i+100);
		y=sqrt(i+100+168);
		if((x*x==i+100)&&(y*y==i+100+168))
		{
			printf("%d\n",i);break;
		}
	}
	return 0;
}
