#include<stdio.h>
#include "unit.h"

int main5()
{
	int m5, n5, s5;
	scanf("%d%d", &m5, &n5);
	s5 = jiechen(m5) / (jiechen(n5)*jiechen(m5 - n5));
	printf("%d", s5);
	return 0;
}
