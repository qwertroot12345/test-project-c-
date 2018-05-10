#include<stdio.h>
void ss(int a)
{
	int i ;
	for (i = 2; i <= a - 1; i++)
	{
		if (i == a - 1)
			printf("%d\n", a);
		if (a%i == 0)
			break;
		else if (a%i != 0)
			continue;
	}
}
int main()
{
	int j;
	printf("2\n");
	for (j = 1; j < 100; j++)
		ss(j);
	return 0;
}