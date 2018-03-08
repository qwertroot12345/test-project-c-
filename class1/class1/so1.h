#include<stdio.h>
#define pi 3.14
#define h 3
#define r 1.5
int main1()
{
	//这是一个求圆，圆柱，球的程序
	
	float cc, cs, csf,cvf, bs, bv;
	cc = 2 * pi * r;
	cs = pi * r * r;
	csf = cc * h + 2 * cs;
	cvf = cs * h;
	bs = 4 * pi * r * r;
	bv = (4 / 3) * pi * r * r * r;
	printf("圆周长是%.2f,圆面积是%.2f\n", cc, cs);
	printf("圆柱表面积是%.2f,圆柱体积是%.2f\n", csf, cvf);
	printf("球表面积是%.2f,球体积%.2f\n", bs, bv);
	
	return 0;
}