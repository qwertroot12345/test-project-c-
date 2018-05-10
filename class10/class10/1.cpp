#include<stdio.h>
#include"function.h"

int main1()
{
	int s1,i1;
	struct date1 {
		int y,m,d;
	}a1;
	struct date2 {
		int y,m,d;
	}b1;
	//设date2在date1之后
	scanf("%d%d%d", &a1.y, &a1.m, &a1.d);
	scanf("%d%d%d", &b1.y, &b1.m, &b1.d);
	if (b1.y - a1.y >= 1)
	{
		s1 = yp(b1.y, b1.m, b1.d) + yr(a1.y, a1.m, a1.d);
		for ( i1 = a1.y+1; i1 < b1.y; i1++)
		{
			if (rn(i1) == 0) s1 += 365;
			else s1 += 366;
		}
	}
	else if (b1.y - a1.y == 0) s1 = yp(b1.y, b1.m, b1.d) + yr(a1.y, a1.m, a1.d);
	printf("%d\n", s1);
	return 0;
}