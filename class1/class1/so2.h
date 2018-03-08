#include<stdio.h>
int main2()
{
	//这个程序用来探究char类型在ASCII的存储情况
	
	printf("请连续输入两个字符（不带空格）");
	char c1, c2;
	c1 = getchar();
	c2 = getchar();
	printf("c1的ASCII存储情况：%d\n", c1);
	printf("c2的ASCII存储情况：%d\n", c2);

	int a1, a2;
	printf("请输入两个ASCII范围内正整数（带空格）\n");
	scanf("%d%d", &a1, &a2);
	(char)a1;
	(char)a2;
	printf("a1代表字符：%c\n",a1);
	printf("a2代表字符：%c\n",a2);
	
	return 0;
}