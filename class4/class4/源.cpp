#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d", &a);
	scanf("%d", &b);
	char type;
	type = getchar();
	switch (type)
	{
	case '+' :
		printf("%d", a + b);
		break;
	case '-':
		printf("%d", a - b);
		break;
	case '*':
		printf("%d", a * b);
		break;
	case '/':
		printf("%d", a / b);
		break;
	}
	getchar();
	return 0;
}