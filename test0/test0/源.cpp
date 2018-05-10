#include<stdio.h>
int jc(int n)
{
	int i, s = 1;
	for ( i = 1; i < n; i++)
	{
		s = s*i;
	}
	return s;
}
int main()
{
	int n,i=1,s=0,sum;
	printf("输入n求1!+2!+...+n!");
	scanf("%d", &n);
	while (i <= n)
	{
		s = s+ jc(i);
		i++;
	}
	printf("结果是sum=%ld\n", sum);
	return 0;
}



