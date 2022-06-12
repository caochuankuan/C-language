#include<stdio.h>
int one()
{
	int a, b;
	printf("请输入一个正整数\n");
	scanf_s("%d", &a);
	do {
		b = a % 10;
		printf("%d", b);
		a = a / 10;
	} while (a != 0);
	printf("\n");
	return 0;
}
int two()
{
	int a, max, min, count = 1;
	printf("请输入5个整数\n");
	scanf_s("%d", &a);
	max = min = a;
	while (count < 5)
	{
		count++;
		scanf_s("%d", &a);
		if (a < min) min = a;
		if (a > max) max = a;
	}
	printf("最大值：%d,最小值：%d\n", max, min);
	return 0;
}
int three()
{
	int i, a[10];
	for (i = 0;i <= 9;i++)
		a[i] = i;
	for (i = 9;i >= 0;i--)
		printf("%d", a[i]);
	return 0;
}
int four()
{
	int i = 1;
loop:
	if (i <= 3000)
	{
		printf("爱你的第%d遍\n", i);
		i++;
		goto loop;
	}
	return 0;
}
int five()
{
	int i = 1;
	while (i <= 3000)
	{
		printf("爱你%d遍\n", i);
		i++;
	}
	return 0;
}
int six()
{
	int i;
	for (i = 1;i <= 3000;i++)
		printf("爱你%d遍\n", i);
	return 0;
}
int seven()
{
	int i, j, k, l;
	printf("i j k l\n");
	for (i = 0;i <= 9;i++)
		for (j = 0;j <= 9;j++)
			for (k = 0;k <= 9;k++)
				for (l = 0;l <= 9;l++)
					printf("爱你%d %d %d %d遍\n", i, j, k, l);
	return 0;
}
int eight()
{
	int i, a[10] = { 1,3,5,7,9,11,13,15,17,19 };
	for (i = 0;i < 9;i++)
		printf("%d\n", a[i]);
	return 0;
}
int nine()
{
	double sum = 0;
	int a;
	for (a = 1;a <= 100;a++)
		sum += 1.0 / a;
	printf("调和级数前100项之和为%f\n", sum);
	return 0;
}
int ten()
{
	int i, j;
	for (i = 1;i <= 6;i++)
	{
		for (j = 1;j <= 2 * i - 1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
int eleven()
{
	double sum;
	int a = 0;
	for (sum = 0;sum <= 13.14;sum += 1.0 / a)
		a++;
	printf("%d\n", a);
	return 0;
}
int twelve()
{
	char c;
	printf("请输入字符串\n");
	while ((c = getchar()) != 13)
	{
		if (c == 0x1B)//c中规定16进制数必须0x开头。
			continue;
		printf("%c\n", c);
	}
	return 0;
}
int thirteen()
{
	int i, max, min, maxxiabiao, minxiabiao, a[10];
	printf("请输入10个整数\n");
	for (i = 0;i <= 9;i++)
	{
		scanf_s("%d", &a[i]);
	}
	max = min = a[0];
	maxxiabiao = minxiabiao = 0;
	for (i = 0;i <= 9;i++)
	{
		if (max < a[i]) { max = a[i];maxxiabiao = i; }
		else if (min > a[i]) { min = a[i];minxiabiao = i; }
	}
	printf("max=%d,xiabiao=%d\n", max, maxxiabiao);
	printf("min=%d,xiabiao=%d\n", min, minxiabiao);
	return 0;
}
int fourteen()
{
	int i = 0, b, a[30];
	printf("请输入一个十进制的数:");
	scanf_s("%d", &b);
	if (b == 0)
	{
		printf("0\n");
		return 0;
	}
	while (b != 0)
	{
		a[i] = b % 2;
		b = b / 2;
		i++;
	}
	printf("其二进制为");
	for (i--;i >= 0;i--)
		printf("%d", a[i]);
	printf("\n");
	return 0;
}
int fifteen()
{
	int i, a[10];
	for (i = 0;i <= 9;i++)
		a[i] = i;
	for (i = 0;i <= 9;i++)
	{
		printf("%d", a[i]);
	}
	printf("\n");
	return 0;
}
int sixteen()
{
	int i, a[10];
	for (i = 0;i < 10;)
		a[i++] = i * 2 + 1;
	for (i = 0;i < 10;i++)
		printf("%d ", a[i]);
	return 0;
}
int seventeen()
{
	int i, temp, a[10];
	printf("请输入10个整数\n");
	for (i = 0;i <= 9;i++)
		scanf_s("%d", &a[i]);
	for (int k = 0;k <= 9;k++) {
		for (int j = 0;j <= 9;j++)
		{
			if (a[j] > a[j + 1]) {
				temp = a[j + 1];
				a[j + 1] = a[j];
				a[j] = temp;
			}
			printf("%d ", a[j]);
		}
		printf("\n");
	}
	return 0;
}
int eighteen()
{
	int x = 0;
	char c;
	char password[6];
	printf("请输入银行卡密码：");
	while (x <= 6 && (c=getchar() )!= 13)
	{
		password[x++] = c;
		if (c != 13)
			putchar('*');
	}
	password[x] = '\0';
	printf("\n%s\n", password);
	return 0;
}
int nineteen()
{
	printf(" ");
	return 0;
}
int twenty()
{
	int x, f = 0;
	scanf_s("%d", &x);
	if (x % 3 == 0 || x % 7 == 0)
		f++;
	if (f == 1)
		printf("yes\n");
	else
		printf("no\n");
	return 0;
}
int _21()
{
	int a, b;
	int sum = 0;
	for (a = 1;a <= 50;a++)
	{
		int x = 1;//每执行完一次阶乘回到初始值1.
		for (b = 1;b <= a;b++)
		{
			x = x * b;
		}
		if (a % 2 == 0) sum = sum - x;
		else sum = sum + x;
	}
	printf("结果为%d\n", sum);
	return 0;
}
int _22()
{
	char i;
	int a = 0, b = 0, c = 0, d = 0, e = 0;
	printf("请输入10个字符:");
	for (int j = 1;j <= 10;j++)
	{
		i = getchar();
		if (i >= '0' && i <= '9') a++;
		else if (i >= 'a' && i <= 'z') b++;
		else if (i >= 'A' && i <= 'Z') c++;
		else if (i == ' ') d++;
		else if (i == '\n') e++;
	}
	printf("数字共%d个,小写字母共%d个,大写字母共%d个，空格共%d个，回车共%d个\n", a, b, c, d, e);
	return 0;
}
int _23()
{
	int a, b, c, max, mid, min;
	printf("请输入三个整数:");
	scanf_s("%d%d%d", &a, &b, &c);
	max = a >= b ? a : b;
	max = max >= c ? max : c;
	min = a >= b ? b : a;
	min = min >= c ? c : min;
	mid = (mid = a >= b ? b : a) > c ? (mid = a >= b ? b : a) : (mid = a >= b ? a : b);
	printf("这三个数按小到大依次为:%d %d %d\n", min, mid, max);
	return 0;
}
int _24()
{
	int a;
	printf("请输入星期几:");
	scanf_s("%d", &a);
	switch (a)
	{
	case 1:printf("Moday\n");break;
	case 2:printf("Tuseday\n");break;
	case 3:printf("Wednesday\n");break;
	case 4:printf("Thursday\n");break;
	case 5:printf("Friday\n");break;
	case 6:printf("Saturday\n");break;
	case 7:printf("Sunday\n");break;
	default:printf("你在玩我?\n");
	}
	return 0;
}
int _25()
{
	int a;
	float b;
	double c, d;
	printf("请输入本金和期限:");
	scanf_s("%f%d", &b, &a);
	switch (a)
	{
	case 1:c = 0.21 * 0.01;break;
	case 2:c = 0.26 * 0.01;break;
	case 3:c = 0.28 * 0.01;break;
	case 4:c = 0.29 * 0.01;break;
	case 5:c = 0.30 * 0.01;break;
	case 8:c = 0.33 * 0.01;break;
	default:printf("抱歉，本银行不提供此年限服务。");
		return 0;//default后不用break，这里加上return才不会在输入错误期限的时候输出总和。
	}
	d = b + b * c * a;
	printf("到期后得到的利息和本金的总和为%.2f\n", d);//人民币两位小数。
	return 0;
}
int _26()
{
	char sex;
	int tall;
	printf("请输入sex(F or other):");
	sex = getchar();
	printf("请输入tall:");
	scanf_s("%d", &tall);
	switch (sex)
	{
	case 'F':
	{
		if (tall >= 150) printf("A(合格)\n");
		else printf("B(不合格)\n");
	}break;
	default:
	{
		if (tall >= 170) printf("A(合格)\n");
		else printf("B(不合格)\n");
	}break;
	return 0;
	}
	return 0;
}
int _27()
{
	int i, j, sum = 0;
	for (i = 1;i <= 10;i++) {
		int temp = 1;
		for (j = 1;j <= i;j++)
			temp *= j;
		sum += temp;
	}
	printf("1!+2!=3!+....+9!+10!=%d\n", sum);
	return 0;
}
int _28()
{
	int a, b, c, s = 0;
	for (a = 2;a <= 22;a++)
	{
		b = a - 1;
		c = a / b;
		s += c;
	}
	printf("s=2/1+3/2+4/3+5/4+...+22/21=%d\n", s);
	return 0;
}
int _29()
{
	int a, sum = 0;
	printf("100以内能被8整除的数有:");
	for (a = 1;a <= 100;a++)
	{
		if (a % 8 == 0)
		{
			printf("%d ", a);
			sum += a;
		}
	}
	printf("\n");
	printf("它们的和为:%d\n", sum);
	return 0;
}
int _30()
{
	int a, b, s, g;
	printf("所有水仙花数:");
	for (a = 100;a <= 999;a++)
	{
		b = a / 100;
		s = a % 100 / 10;
		g = a % 10;
		if (a == b * b * b + s * s * s + g * g * g) printf("%d ", a);
	}
	printf("\n");
	return 0;
}
int _31()
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
int _32()
{
	//一球从100米高度自由落下，每次落地后反弹跳回原高度的一半，再落下。
//求它在第10次落地时，共经过多少米？第10次反弹的高度是多少米？
	float s = 0, h = 100;
	for (int i = 1;i <= 10;i++)
	{
		s = s + 2 * h;
		h = h / 2;
	}
	printf("它在第10次落地时，共经过%f米,第10次反弹的高度是%f米\n", s - 100, h);
	/*输出s-10是因为第一次循环时默认小球从原地升到100，比题意多了100米。*/
	return 0;
}
int _33()
{
	int s = 0, sum = 0;
	for (int i = 1;i <= 9;i++)
	{
		s = s * 10 + i;
		sum += s;
	}
	printf("1+12+123+...+123456789=%d\n", sum);
	return 0;
}
int _34()
{
	int a[5][5];
	int i, j, min, mini, minj;
	printf("请输入25个整数\n");
	for (i = 1;i <= 5;i++)
	{
		for (j = 1;j <= 5;j++)
		{
			scanf_s("%d", &a[i][j]);
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	min = a[1][1];
	for (i = 1;i <= 5;i++)
		for (j = 1;j <= 5;j++)
			if (min > a[i][j]) { min = a[i][j];mini = i;minj = j; }
	printf("最小值min=a[%d][%d]=%d\n", mini, minj, min);
	return 0;
}
int _35()
{
	int i, j, a[10][10];
	for (i = 0;i < 10;i++)
	{
		a[i][i] = 1;
		a[i][0] = 1;
	}
	for (i = 2;i < 10;i++)
	{
		for (j = 1;j <= i - 1;j++)
		{
			a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
		}
	}//第一个for循环记录每行第一个和最后一个，所以第二三个for循环要排除这些。
	for (i = 0;i < 10;i++)
	{
		for (j = 0;j <= i;j++)
		{
			printf("%4d", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
int _36()
{
	int i, j, temp;
	int a[10];
	printf("请输入10个整数:");
	for (j = 0;j < 10;j++) scanf_s("%d", &a[j]);
	for (i = 0;i < 9;i++)
	{
		for (j = 0;j < 9;j++)
		{
			if (a[j] > a[j + 1])
			{
				temp = a[j + 1];
				a[j + 1] = a[j];
				a[j] = temp;
			}
		}
	}
	printf("按小到大排序:");
	for (i = 0;i < 10;i++)
		printf("%d ", a[i]);
	printf("\n");
	return 0;
}
int main()
{
	int a;
	printf("1.倒叙输出\t2.条件语句判断大小\t3.数组逆序输出0-9\t\t4.goto\t\t\t5.while\n6.for\t\t7.for嵌套\t\t8.一维数组\t\t\t9.调和级数\t\t10.三角形\n");
	printf("11.调和级数值\t12.continue语句\t\t13.数组之判断最值及其下标\t14.数组之十进制转二进制\t15.数组\n16.数组输出奇数\t17.冒泡算法排序\t\t18.输入密码显示星号\t\t19.模拟银行密码系统\t20.被3或7整除\n");
	printf("21.阶乘求和\t22.统计字符数\t\t23.三数排序\t\t\t24.星期\t\t\t25.计算银行存款利息\n26.switch嵌套IF\t27.1-10 阶乘\t\t28.规律分式求和\t\t\t29.100以内能被8整除的数\t30.水仙花数\n");
	printf("31.百马百担问题\t32.落地反弹问题\t\t33.1+12+123+...+123456789\t34.数组5x5,并输出最小值\t35.杨辉三角\n36.输入10个数并从小到大排序");
	printf("\n请选择:");
	scanf_s("%d", &a);
	switch (a)
	{
	case 1:one();break;
	case 2:two();break;
	case 3:three();break;
	case 4:four();break;
	case 5:five();break;
	case 6:six();break;
	case 7:seven();break;
	case 8:eight();break;
	case 9:nine();break;
	case 10:ten();break;
	case 11:eleven();break;
	case 12:twelve();break;
	case 13:thirteen();break;
	case 14:fourteen();break;
	case 15:fifteen();break;
	case 16:sixteen();break;
	case 17:seventeen();break;
	case 18:eighteen();break;
	case 19:nineteen();break;
	case 20:twenty();break;
	case 21:_21();break;
	case 22:_22();break;
	case 23:_23();break;
	case 24:_24();break;
	case 25:_25();break;
	case 26:_26();break;
	case 27:_27();break;
	case 28:_28();break;
	case 29:_29();break;
	case 30:_30();break;
	case 31:_31();break;
	case 32:_32();break;
	case 33:_33();break;
	case 34:_34();break;
	case 35:_35();break;
	case 36:_36();break;
	}
	return 0;
}