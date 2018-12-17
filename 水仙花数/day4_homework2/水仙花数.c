#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	for (i = 1; i < 1000; i++)
	{
		a = i % 10;
		b = 1 / 10 % 10;
		c = 1 / 100;
		if (a*a*a + b*b*b + c*c*c == i)
			printf("%d\n",i);
	}
	system("pause");
	return 0;
}