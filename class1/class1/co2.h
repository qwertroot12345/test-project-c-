#include"stdio.h"
int mainb()
{
	char a;
	int i = 0, j = 0, k = 0, l = 0, w = 0;
	char c = getchar();
	while (c != '\n')
	{		
		if (c >= 65 && c <= 90 || c >= 97 && c <= 122)
			i++;
		else if (c >= 48 && c <= 57)
			j++ ;
		else if (c == 32)
			w++;
		else
			l++;
	}
	printf("i=%d,j=%d,k=%d,l=%d\n", i, j, k, w);
	return 0;
}
