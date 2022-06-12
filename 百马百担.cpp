//百马百担问题。有100匹马，驼100担货物，大马驼3担，中马驼2担，2匹小马驼1担。问大、中、小马各几匹？
#include<stdio.h>
int main()
{
	int a, b, c, d = 1;
	printf("答案有如下可能:\n");
	for (a = 0;a < 100;a++)
		for (b = 0;b < 100;b++)
			for (c = 0;c < 100;c++)
			{
				if (a + b + c == 100 && 6 * a + 4 * b + c == 200)
					printf("(%d)大马%2d匹,中马%2d匹,小马%2d匹\n", d++, a, b, c);
			}
	return 0;
}
