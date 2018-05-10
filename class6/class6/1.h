#include<stdio.h>
int main1()
{
	int a, b, c, d, e, f, g, h, i;
	float avar1, avar2, avar3;
	scanf("%d%d%d", &a, &b, &c);
	scanf("%d%d%d", &d, &e, &f);
	scanf("%d%d%d", &g, &h, &i);
	avar1 = (a + b + c) / 3;
	avar2 = (d + e + f) / 3;
	avar3 = (g + h + i) / 3;
	printf("%.2f\n%.2f\n%.2f\n", avar1, avar2, avar3);
	return 0;
}