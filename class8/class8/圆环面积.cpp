#include<stdio.h>
#include"unit.h"

int main1()
{
	float r1, r2,s1;
	scanf("%f%f", &r1,&r2);
	s1 = sc(r1) - sc(r2);
	if (s1 <= 0) s1 = 0 - s1;
	printf("%.3f\n", s1);
	return 0;
}