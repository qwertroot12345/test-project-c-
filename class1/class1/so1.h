#include<stdio.h>
#define pi 3.14
#define h 3
#define r 1.5
int main1()
{
	//����һ����Բ��Բ������ĳ���
	
	float cc, cs, csf,cvf, bs, bv;
	cc = 2 * pi * r;
	cs = pi * r * r;
	csf = cc * h + 2 * cs;
	cvf = cs * h;
	bs = 4 * pi * r * r;
	bv = (4 / 3) * pi * r * r * r;
	printf("Բ�ܳ���%.2f,Բ�����%.2f\n", cc, cs);
	printf("Բ���������%.2f,Բ�������%.2f\n", csf, cvf);
	printf("��������%.2f,�����%.2f\n", bs, bv);
	
	return 0;
}