//用100元买100只鸡，大公鸡5元/只，母鸡3元/只，小鸡1元3只。问各能买多少。
#include<stdio.h>
int main()
{
	int x, y, z;
	for (x = 1;x < 100;x++)
		for (y = 1;y < 100;y++)
			for (z = 1;z < 100;z++)
				if (x + y + z == 100 && 15 * x + 9 * y + z == 300)
					printf("大公鸡:%d只，母鸡:%d只，小鸡:%d只\n", x, y, z);
	return 0;
}