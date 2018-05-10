#include<stdio.h>

int main()
{
	int num[5];
	scanf("%d%d%d%d%d", &num[0], &num[1], &num[2], &num[3], &num[4]);
	int i,j,t;
	for ( j = 0; j < 5; j++)
	{
		for (i = 0; i < 5; i++)
		{
			if (num[i] <= num[i + 1])
			{
				t = num[i + 1];
				num[i + 1] = num[i];
				num[i] = t;
			}
		}
	}
	/*i = 0;
	for (i = 0; i < 5; i++)
	{
		printf("%d ", num[i]);
	}*/
	for ( i = 4; i >= 0; i--)
	{
		printf("%d ", num[i]);
	}
	return 0;  
}