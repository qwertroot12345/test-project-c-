#include<stdio.h>
#define PI 3.1415926535
//全局引用函数

//定义累加
int add(int n)
{
	int s, i;
	s = 0;
	if (n == 0) s = 0;
	for (i = 1; i < n + 1; i++)  s += i;
	return s;
}

//A=1+1/(1+2)+1/(1+2+3)+1/(1+2+3+4)+…….+1/(1+2+3+…+n)式函数
float addfun(int n)
{
	float s, t;
	int i;
	s = 1;
	for (i = 1; i < n + 1; i++)
	{
		t = 1 / add(i);
		s += t;
	}
	return s;
}

//判断质数
void is_sushu(int n)
{
	int i, r;
	if (n <= 0)
		printf("内部错误");
	else if (n == 1)
		r = 0;
	else
	{
		for (i = 2; i < n + 1; i++)
		{
			if (n%i == 0)
			{
				r = 0;
				break;
			}
		}
		if (i == n)
			r = 1;
		if (r == 0)
			printf("不是素数");
		if (r == 1)
			printf("是素数");
	}
}

//阶乘运算
int jiechen(int n)
{
	int i, s;
	if (n == 0)
		s = 1;
	else
	{
		s = 1;
		for (i = 1; i < n + 1; i++)
			s *= i;
	}
	return s;
}

//幂次运算
float mi(float a, int n)
{
	int s, i;
	s = 1;
	for (i = 0; i < n; i++)
	{
		s *= a;
	}
	return s;
}

//求圆面积
float sc(float r)
{
	float s;
	s = PI*r*r;
	return s;
}

//S＝1＋x＋x2/2！＋x3/3！＋…＋xn/n!式函数
double fun(double x, int n)
{
	int i;
	double t, s;
	s = 1;
	for (i = 1; i < n + 1; i++)
	{
		t = mi(x, i) / jiechen(i);
		s += t;
	}
	return s;
}

//三个数比大小
int mint(int a, int b, int c)
{
	int s;
	if (a >= b)
	{
		s = b;
		if (b >= c) s = c;
		else s = b;
	}
	else if (a <= b)
	{
		if (b <= c) s = a;
		else if (a <= c)
			s = a;
		else
			s = c;
	}
	return s;
}

//复制字符串
void strcopy(char str0[100], char str1[100])
{
	char s;
	int i;
	for ( i = 0; i < 100; i++)
	{
		if (str0[i] != '\0') str1[i] = str0[i];
		else 
		{
			str1[i] = '\0';
			break;
		};
	}
}


//四舍五入保留到n位
/*long long remind(int n, long long a)
{
int x[100], lim = 100, i;
if (i < lim)
{
x[0] = ;
for (i = 1; i < n; i++)
{
x[i] = a % (10 * i);
}
}
else
{
printf("error");
return 0;
}
}*/

//调位（整数）
/*int trans(int a, int b)
{

}*/