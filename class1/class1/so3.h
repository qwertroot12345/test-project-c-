#include<stdio.h>
int maind()
{
	int a;
	scanf("%d", &a);
	if (1)
		if (a > 90) printf("A");
	    if (a >= 80 && a <= 89) printf("B");
	    if (a >= 70 && a <= 79) printf("C");
	    if (a >= 60 && a <= 69) printf("D");
	    if (a <= 69) printf("E");

	return 0;
}
