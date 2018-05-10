#include<stdio.h>
int main2()
{
	int a[3];
	int i,j,t;
	for (i = 0; i < 3; i++)
		scanf("%d", &a[i]);
	for ( i = 0; i < 3; i++)
	{
		for ( j = 0; j < 3; j++)
		{
			if (a[j] >= a[j + 1])
			{
				t = a[j + 1];
				a[j + 1] = a[j];
				a[j] = t;
			}
			if (j == 2) break;
		}
	}
	printf("max %d,min %d.", a[0], a[2]);
	return 0;
}