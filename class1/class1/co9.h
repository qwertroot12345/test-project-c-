#include<stdio.h>
int maini()
 {
	 int j, i, n;
	 double h = 100, s = 100;
	 scanf("%d", n);
	 for (i = 1;i <= n;i++)
	 {
		 h *= 0.5;
		 if (i == 1)
			 continue;
		 s = 2 * h + s;
		 printf("h=%f,s=%f\n", h, s);
	 }
  }
