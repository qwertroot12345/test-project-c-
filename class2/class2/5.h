#include<stdio.h>
int main()
{
	int i, j,t;
	int a[10] = {2,4,6,1,7,3,5,8,9,4,};
	for ( i = 0; i < 9; i++)
	{
		for ( j = 0; j < 9; j++)
		{
			if (a[j]>=a[j+1])
			{
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}
	/*for ( i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}*/
	return 0;
}