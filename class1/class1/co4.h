#include<stdio.h>
int maind() 
{ 
	int m,i, n, sum = 0, s = 1;
	scanf("%d", &n);
	while (i <= n) 
	{
		s = s*i;
		sum = sum + 1;
		i++; 
	} 
	printf("sum=%ld\n", sum); 
	return 0;
}