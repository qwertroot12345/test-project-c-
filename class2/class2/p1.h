#include<stdio.h>
int main()
{
	int a[10] = { 1,7,8,18,23,24,59,62,99 };
	int i;
	for ( i = 0; i < 10; i++)
	{
		if (a[i] % 3 == 0)
			a[i] = 0;
	}
	/*for (i = 0; i < 10; i++)
		printf("%d ", a[i]);*/
	return 0;
}