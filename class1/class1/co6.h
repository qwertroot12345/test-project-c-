#include"math.h"
#include"stdio.h"
int mainef()
{
	int x = 100, a, b, c;
	while (x >= 100 && x < 1000)
	{
		a = 0.01*x;b = 10 * (0.01*x - a);
		c = x - 100 * a - 10 * b;
		if (x == (pow(a, 3) + pow(b, 3) + pow(c, 3)))
			printf("%5d", x);
		x++;
	}
	return 0;
}
