#include<stdio.h>
#define MAX 3
int main()
{
	int i, j;
	float code[MAX], r = 0, a = 0, t;
	for ( i = 0; i < MAX; i++)
	{
		scanf("%f", &code[i]);
		r += code[i];
	}
	a = a / MAX;
	t = code[0];
	for ( j = 0; j < MAX; j++)
	{
		if (code[j] < code[j + 1])
			t = code[j + 1];
		else
			continue;
	}
	printf("%f\n%f\n", t, a);
	return 0;
}