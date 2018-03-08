#include<stdio.h>
int maing()
{
	int m, i, l, s,j; 
	for (m = 6;m<1000;m++) 
	{
	s = 1; 
	for (i = 2;i < m;i++)
		if (m%i == 0)
			s = s + i; 
	    if (m - s == 0)
		{
			printf("%5d its fastors are 1 ", m);
			for (j = l;j < m;j++) if (m%j == 0)
				printf("%d ", j);
			printf("\n");

		}

		
	}