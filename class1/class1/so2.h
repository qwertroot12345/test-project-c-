#include<stdio.h>
int main2()
{
	//�����������̽��char������ASCII�Ĵ洢���
	
	printf("���������������ַ��������ո�");
	char c1, c2;
	c1 = getchar();
	c2 = getchar();
	printf("c1��ASCII�洢�����%d\n", c1);
	printf("c2��ASCII�洢�����%d\n", c2);

	int a1, a2;
	printf("����������ASCII��Χ�������������ո�\n");
	scanf("%d%d", &a1, &a2);
	(char)a1;
	(char)a2;
	printf("a1�����ַ���%c\n",a1);
	printf("a2�����ַ���%c\n",a2);
	
	return 0;
}