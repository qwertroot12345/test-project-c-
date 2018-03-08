#include<stdio.h>
int maine() 
{ 
	double i = 1, j = 1, k = 1, s1 = 0, s2 = 0, s3 = 0, sum;
	for (;i <= 100;i++) 
		s1 = s1 + i; 
	for (;j <= 50;j++) 
		s2 = s2 + j*j;
	for (;k <= 10;k++)
		s3 = s3 + 1 / k; 
	sum = s1 + s2 + s3; 
	printf("sum=%f\n", sum); 
	return 0;
}