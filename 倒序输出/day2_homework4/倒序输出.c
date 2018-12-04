#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, b, c;
	scanf("%d %d %d",&a, &b, &c);
	if (a < b)
	{
		a = a + b;
		b = a - b;
		a = a - b;
	}
	if (a < c)
	{
		a = a^c;
		c = a^c;
		a = a^c;
	}
	if (b < c)
	{
		b = b^c;
		c = b^c;
		b = b^c;
	}
	printf("a: %d, b;%d,c:%d\n", a, b, c);
	system("pause");
	return 0;
}