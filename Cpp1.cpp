#include<stdio.h>
typedef struct kuan{
	int num;
	char name[10];
	char adress[10];
}list1;
typedef struct{
	list1 people[50];
	int len;
}list2;

int main(){
	int i;
	list2 a;
	printf("请输入表的长度:");
	scanf("%d",&a.len);
	
	printf("请输入数据：\n");
	printf("序号	姓名	地址\n");
	for(i=0;i<a.len;i++)
	scanf("%d	%s	%s",&a.people[i].num,&a.people[i].name[i],&a.people[i].adress[i]);
	
	printf("\n\n您输入的数据信息如下：\n序号	姓名	地址\n");
	for(i=0;i<a.len;i++)
	printf("%d	%s	%s\n",a.people[i].num,a.people[i].name[i],a.people[i].adress[i]);
	return 0;
}
 