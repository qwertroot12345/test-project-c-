#include<stdio.h>
int main1()
{
	int i, j;
	int a[5] = { 1,2,3,4,5 };
	for ( i = 0; i < 5; i++)
	{
		for ( j = 0; j < 5; j++)
		{
			printf("%d ", a[j]);
		}
		for ( j = 0; j < 5; j++)
		{
			if (a[j] > 1)
				a[j] --;
			else
				a[j]=5;
		}
		printf("\n");
	}
	return 0;
}