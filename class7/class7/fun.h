#pragma once
#include<stdio.h>
int jiechen(int n)
{
	int s,i;
	if (n == 0)
		s = 1;
	else
	{
		s = 1;
		for ( i = 1; i < n+1; i++)
			s *= i;
	}
	return s;
}
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
		if (i == n )
			r = 1;
		if (r == 0)
			printf("不是素数");
		if (r == 1)
			printf("是素数");
	}		
}
