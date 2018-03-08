#include<stdio.h>
void mainj()
{
	int day, x1, x2; // (设:x1为前一天的桃子数, x2为第二天的桃子数)
	day = 9;
	x2 = 1; /*第十天剩一个*/	
	while (day>0)
	{
		x1 = (x2 + 1) * 2; /*前一天的桃子数是第二天的桃子数加1后的两倍*/
	    x2 == x1;
		day--;
	}
	printf("total=%d\n", x1);

}
