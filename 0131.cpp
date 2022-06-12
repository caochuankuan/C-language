#include<stdio.h>//3,8
#include<string.h>
#include<math.h>//为了引用pow函数(44)
int _1()
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
int _2()
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
int _3()
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
int _4()
{
	char c;
	printf("请输入字符串\n");
	while ((c=getchar()) != 13)
	{
		if (c == 0x1B)//c中规定16进制数必须0x开头。
			break;
		printf("%c\n", c);
	}
	return 0;
}
int _5()
{
	int i;
	for (i = 1;i <= 3000;i++)
		printf("爱你%d遍\n", i);
	return 0;
}
int _6()
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
int _7()
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
int _8()
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
int _9()
{
	int i = 1;
	while (i <= 3000)
	{
		printf("爱你%d遍\n", i);
		i++;
	}
	return 0;
}
int _10()
{

	//百马百担问题。有100匹马，驼100担货物，大马驼3担，中马驼2担，2匹小马驼1担。问大、中、小马各几匹？
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
int _11()
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
int _12()
{
	char a;
	printf("请问谁最帅？\n");
	printf("A.宽\nB.风\n");
	scanf_s("%c", &a);
	if (a == 65 || a == 97)
		printf("选择正确\n");
	else
		printf("选择错误，请重新选择\n");
	return 0;
}
int _13()
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
int _14()
{
	double sum = 0;
	int a;
	for (a = 1;a <= 100;a++)
		sum += 1.0 / a;
	printf("调和级数前100项之和为%f\n", sum);
	return 0;
}
int _15()
{
	double sum;
	int a = 0;
	for (sum = 0;sum <= 13.14;sum += 1.0 / a)
		a++;
	printf("%d\n", a);
	return 0;
}
int _16()
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
int _17()
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
int _18()
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
int _19()
{
	int a, b;
	int sum = 0;
	for (a = 1;a <= 4;a++)
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
int _20()
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
int _21()
{
	int i, temp, a[10];
	printf("请输入10个整数\n");
	for (i = 0;i <= 9;i++)
		scanf_s("%d", &a[i]);
	for (int k = 0;k <= 9;k++) {
		for (int j = 0;j <= 9;j++)
		{
			if ((a[j] > a[j + 1])&&j<=8) 
			{
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
int _22()
{
	int i, j;
	char a[30];
	char b[30] = "caochuankuan";
	printf("请输入密码\n");
	for (j = 1;j <= 3;j++)
	{
		gets_s(a);
		i = strcmp(a, b);
		if (i == 0) { printf("密码正确!\n");break; }
		else printf("密码错误，请重新输入!（第%d次）\n", j);
	}
	return 0;
}
int _23()
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
int _24()
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
int _25()
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
int _26()
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
int _27()
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
int _28()
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
int _29()
{
	int a[] = { 1,2,3,4,5 }, i;
	for (i = 1;i < 5;i++)
		printf("% 1d", a[i] - a[i - 1]);
	return 0;
}
int _30()
{
	int i, a[10];
	for (i = 0;i <= 9;i++)
		a[i] = i;
	for (i = 9;i >= 0;i--)
		printf("%d", a[i]);
	return 0;
}
int _31()
{
	int i, a[10];
	for (i = 0;i < 10;)
		a[i++] = i * 2 + 1;
	for (i = 0;i < 10;i++)
		printf("%d ", a[i]);
	return 0;
}
int _32()
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
int _33()
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
int _34()
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
int _35()
{
	int a, max, min;
	printf("请输入若干个整数\n");
	scanf_s("%d", &a);
	max = min = a;
	while (a != 0) {
		if (a < min) min = a;
		if (a > max) max = a;
		scanf_s("%d", &a);
	}
	printf("最大值：%d,最小值：%d\n", max, min);
	return 0;
}
int _36()
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
int _37()
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
int _38()
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
int _39()
{
	int i, a[10] = { 1,3,5,7,9,11,13,15,17,19 };
	for (i = 0;i < 9;i++)
		printf("%d\n", a[i]);
	return 0;
}
int _40()
{
	int num, x, y, n;
	printf("请输入您的编号\n");
	scanf_s("%d", &num);
	printf("请输入您要选修多少学分\n");
	scanf_s("%d", &x);
	printf("请输入您的学生类型:(1)全日制研究生;(2)在职研究生;(3)外校学生;\n");
	scanf_s("%d", &n);
	switch (n) {
	case 1:y = 0;
		break;
	case 2: {
		if (x <= 12) y = 300;
		else y = 300 + 50 * (x - 12);
	}
		  ;
		  break;
	case 3: {
		if (x <= 12) y = 800;
		else y = 800 + 100 * (x - 12);
	}
		  ;
		  break;
	default:printf("输入错误，请重新输入正确的学生类型代码\n");
		break;
	}
	return n;
	printf("编号%d(学生类型%d)的应付费用为%d\n", num, n, y);
	return 0;
}
int _41()
{
	int s, c;
	float w;
	double d, p = 100.0, f;
	printf("请输入路程(km)\n");
	scanf_s("%d", &s);
	printf("请输入货物重量(kg)\n");
	scanf_s("%f", &w);
	if (s > 0 && s < 250) d = 0;
	else if (250 <= s && s < 500) d = 2;
	else if (500 <= s && s < 1000) d = 5;
	else if (1000 <= s && s < 2000) d = 8;
	else if (2000 <= s && s < 3000) d = 10;
	else d = 15;
	c = s / 250;
	f = w * p * s * (1 - d * 0.01);
	printf("c的值为%d，费用为%3.2f\n", c, f);
	return 0;
}
int _42()
{
	int num, x, y, n;
	printf("请输入您的编号\n");
	scanf_s("%d", &num);
	printf("请输入您要选修多少学分\n");
	scanf_s("%d", &x);
	printf("请输入您的学生类型:(1)全日制研究生;(2)在职研究生;(3)外校学生;\n");
	scanf_s("%d", &n);
	if (n == 1) y = 0;
	else if (n == 2) {
		if (x <= 12) y = 300;
		else y = 300 + 50 * (x - 12);
	}
	else {
		if (x <= 12) y = 800;
		else y = 800 + 100 * (x - 12);
	}
	printf("编号%d(学生类型%d)的应付费用为%d\n", num, n, y);
	return 0;
}
int _43()
{
	int i, j;
	for (i = 0;i < 11;i++)
		//控制打印行数(一行为一个循环)
	{
		j = 0;
		while (j <= i)
			//控制打印列数
		{
			printf("靓仔");
			j++;
		}
		printf("\n");
		//每一次列循环后另起行
	}
	return 0;
}
int _44()
{
	printf("独时想起你\n");//提示语句
	printf("落泪时想搂住你\n");//提示语句
	printf("开心时想扑向你\n");//提示语句
	printf("兴奋时想吻你\n");//提示语句
	printf("一切尽在这三个字签名没有签上\n");//提示语句
	printf("\n");//换行
	for (double y = 2.5; y >= -1.6; y = y - 0.2)
	{
		for (double x = -3; x <= 4.8; x = x + 0.1)
		{
			//下面是个三目运算，读者请仔细看下，||这个是或
			(pow((x * x + y * y - 1), 3) <= 3.6 * x * x * y * y * y
				|| (x > -2.4 && x < -2.1 && y<1.5 && y>-1)
				|| (((x < 2.5 && x>2.2) || (x > 3.4 && x < 3.7)) && y > -1 && y < 1.5)
				|| (y > -1 && y < -0.6 && x < 3.7 && x>2.2)) ? printf("*") : printf(" ");
		}
		printf("\n");//换行
	}
	getchar();
	return 0;//函数返回值为0
}
int _45()
{
	int i, j;
	int score[5][3];
	printf("请输入五个同学三门课的成绩:");
		for (i = 0;i < 5;i++)
			for (j = 0;j < 3;j++)
			{
				scanf_s("%d", &score[i][j]);
			}
	printf("输出五个同学三门课的成绩:");
		for (i = 0;i < 5;i++)
		{
			printf("输出第%d位同学:", i + 1);
			for (j = 0;j < 3;j++)
				printf("%d", score[i][j]);
			printf("'\n'");
		}
	return 0;
}
int _46()
{
	char a;
	printf("请输入一个英文字母\n");
	scanf_s("%c", &a);
	if (a >= 97 && a < 97 + 26) {
		a = a - 32;
		printf("%c\n", a);
	}
	else if (a >= 65 && a < 65 + 26) {
		a = a + 32;
		printf("%c\n", a);
	}
	else
		printf("您输入的不是英文字母，请重新输入\n");
	return 0;
}
int _47()
{
	double a = 1234.5678, b = 1;
	printf("%f\t%f\n\n", a, b);
	printf("%-8.1f\t%8.2f\n\n", a, b);
	return 0;
}
int _48()
{
	char c = 'k';
	float a=1,b = 2.25;
	printf("%f\n", a);
	printf("%d\n", !a);
	printf("%d\n", !!a);
	printf("%d\n", !a && b);
	printf("%d\n", !a || b);
	printf("%d\n", a && a + b + c);
	return 0;
}
int _49()
{
	int a, b, c, max;
	printf("请输入三位整数\n");
	scanf_s("%d%d%d", &a, &b, &c);
	max = (a > b ? a : b) > c ? (a > b ? a : b) : c;
	printf("最大值为%d\n", max);
	printf("前两个较大值为%d\n", a > b ? a : b);
	printf("后两个较大值为%d\n", c > b ? c : b);
	return 0;
}
int _50()
{
	int a, b, c, max, mid, min;
	printf("请输入三个整数:");
	scanf_s("%d%d%d", &a, &b, &c);
	max = (a > b ? a : b) > c ? (a > b ? a : b) : c;
	min = (a < b ? a : b) < c ? (a < b ? a : b) : c;
	mid = (a > b ? b : a) > c ? (a > b ? b : a) : (a > b ? a : b);
	printf("max=%d,mid=%d,min=%d\n", max, mid, min);
	return 0;
}//***
int main()
{
	int a;
	do
	{
		printf("=============================================================================================================================================\n");
		printf("1.1+12+123+...+123456789\t2.1-10 阶乘\t\t3.100以内能被8整除的数\t\t4.continue语句\t\t5.for\n6.for嵌套\t\t\t7.goto\t\t\t8.switch嵌套IF\t\t\t9.while\t\t\t10.百马百担问题\n");
		printf("11.被3或7整除\t\t\t12.大小写转换判断\t13.倒序输出\t\t\t14.调和级数\t\t15.调和级数不大于一个值\n16.规律分式求和\t\t\t17.计算银行存款利息\t18.阶乘求和\t\t\t19.阶乘练习\t\t20.落地反弹问题\n");
		printf("21.冒泡算法排序\t\t\t22.模拟银行密码系统\t23.三角形\t\t\t24.三数排序\t\t25.输入10个数并从小到大排序\n26.输入密码显示星号\t\t27.数组\t\t\t28.数组5x5,并输出最小值\t\t29.数组练习\t\t30.数组逆序输出0-9\n");
		printf("31.数组输出奇数\t\t\t32.数组之最值及其下标\t33.数组之十进制转二进制\t\t34.水仙花数\t\t35.条件语句判断大小\n36.统计字符数\t\t\t37.星期\t\t\t38.杨辉三角\t\t\t39.一维数组\t\t40.费用计算（switch版)\n");
		printf("41.费用折扣计算\t\t\t42.费用计算（if版）\t43.while-for\t\t\t44.心形(存)\t\t45.二维数组的输入与输出\n46.大小写字母转换\t\t47.float练习\t\t48.逻辑表达式\t\t\t49.条件运算(?:)判大小1\t50.条件运算符(?:)判断大小2\n");
		printf("=============================================================================================================================================\n");
		printf("please choice:");
		scanf_s("%d", &a);
		switch (a)
		{
		case 1:_1();printf("\n\n\n");break;
		case 2:_2();printf("\n\n\n");break;
		case 3:_3();printf("\n\n\n");break;
		case 4:_4();printf("\n\n\n");break;
		case 5:_5();printf("\n\n\n");break;
		case 6:_6();printf("\n\n\n");break;
		case 7:_7();printf("\n\n\n");break;
		case 8:_8();printf("\n\n\n");break;
		case 9:_9();printf("\n\n\n");break;
		case 10:_10();printf("\n\n\n");break;
		case 11:_11();printf("\n\n\n");break;
		case 12:_12();printf("\n\n\n");break;
		case 13:_13();printf("\n\n\n");break;
		case 14:_14();printf("\n\n\n");break;
		case 15:_15();printf("\n\n\n");break;
		case 16:_16();printf("\n\n\n");break;
		case 17:_17();printf("\n\n\n");break;
		case 18:_18();printf("\n\n\n");break;
		case 19:_19();printf("\n\n\n");break;
		case 20:_20();printf("\n\n\n");break;
		case 21:_21();printf("\n\n\n");break;
		case 22:_22();printf("\n\n\n");break;
		case 23:_23();printf("\n\n\n");break;
		case 24:_24();printf("\n\n\n");break;
		case 25:_25();printf("\n\n\n");break;
		case 26:_26();printf("\n\n\n");break;
		case 27:_27();printf("\n\n\n");break;
		case 28:_28();printf("\n\n\n");break;
		case 29:_29();printf("\n\n\n");break;
		case 30:_30();printf("\n\n\n");break;
		case 31:_31();printf("\n\n\n");break;
		case 32:_32();printf("\n\n\n");break;
		case 33:_33();printf("\n\n\n");break;
		case 34:_34();printf("\n\n\n");break;
		case 35:_35();printf("\n\n\n");break;
		case 36:_36();printf("\n\n\n");break;
		case 37:_37();printf("\n\n\n");break;
		case 38:_38();printf("\n\n\n");break;
		case 39:_39();printf("\n\n\n");break;
		case 40:_40();printf("\n\n\n");break;
		case 41:_41();printf("\n\n\n");break;
		case 42:_42();printf("\n\n\n");break;
		case 43:_43();printf("\n\n\n");break;
		case 44:_44();printf("\n\n\n");break;
		case 45:_45();printf("\n\n\n");break;
		case 46:_46();printf("\n\n\n");break;
		case 47:_47();printf("\n\n\n");break;
		case 48:_48();printf("\n\n\n");break;
		case 49:_49();printf("\n\n\n");break;
		case 50:_50();printf("\n\n\n");break;
		}
	} while (a != 0);
	return 0;
}
