#include<stdio.h>

//二维数组定义闰（非）月份天数
int sum[2][13] = {
	{ 0,31,28,31,30,31,30,31,31,30,31,30,31 },
	{ 0,31,29,31,30,31,30,31,31,30,31,30,31 }
};
//判断闰年（是1否0）
int rn(int a)
{
	if (a % 4 == 0 && a % 100 != 0)
		return 1;
	else
		return 0;
}
//计算一年指定日期过了多少天
int yp(int y, int m, int d)
{
	int n = rn(y), s, i;
	s = d;
	for (i = 1; i < m + 1; i++)
	{
		s += sum[rn(y)][i];
	}
	return s;
}
//计算一年指定日期剩余多少天
int yr(int y, int m, int d)
{
	if (rn(y) == 0)
		return 365 - yp(y, m, d);
	else
		return 366 - yp(y, m, d);
}

//