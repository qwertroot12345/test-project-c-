#include<stdio.h>
#include"unit.h"

int minjz(int a[3][3])
{
	int min;
	int m, n, t;
	m = mint(a[0][0], a[0][1], a[0][2]);
	n = mint(a[1][0], a[1][1], a[1][2]);
	t = mint(a[2][0], a[2][1], a[2][2]);
	min = mint(m,n,t);
	return min;
}
	
int main4()
{
	int a[3][3],i4,j4;
	for (i4 = 0; i4 < 3; i4++)
	{
		for (j4 = 0; j4 < 3; j4++)
		{
			printf("ÊäÈëa[%d][%d]   ", i4, j4);
			scanf("%d", &a[i4][j4]);
			printf("\n");
		}
	}
	printf("%d",minjz(a));
	return 0;
}
	

	
