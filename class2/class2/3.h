#include<stdio.h>
int main()
{
	int i,t,j;
	int a[10] = { 1,7,8,17,23,24,59,62,101 };
	scanf("%d", &a[9]);
	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			if (a[j] >= a[j + 1])
			{
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}
	/*for (i = 0; i < 10; i++)
	printf("%d ", a[i]);*/
	return 0;
}