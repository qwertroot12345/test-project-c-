#include<stdio.h>
#define PI 3.1415926535
//ȫ�����ú���

//�����ۼ�
int add(int n)
{
	int s, i;
	s = 0;
	if (n == 0) s = 0;
	for (i = 1; i < n + 1; i++)  s += i;
	return s;
}

//A=1+1/(1+2)+1/(1+2+3)+1/(1+2+3+4)+����.+1/(1+2+3+��+n)ʽ����
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

//�ж�����
void is_sushu(int n)
{
	int i, r;
	if (n <= 0)
		printf("�ڲ�����");
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
			printf("��������");
		if (r == 1)
			printf("������");
	}
}

//�׳�����
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

//�ݴ�����
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

//��Բ���
float sc(float r)
{
	float s;
	s = PI*r*r;
	return s;
}

//S��1��x��x2/2����x3/3��������xn/n!ʽ����
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

//�������ȴ�С
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

//�����ַ���
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


//�������뱣����nλ
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

//��λ��������
/*int trans(int a, int b)
{

}*/