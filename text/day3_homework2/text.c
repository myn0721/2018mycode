#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i = 0;
	double sum = 0;
	int flag = 1;
	for (i = 1; i <= 100; i++)
	{
		sum =sum+ flag * 1.0 / i;
		printf("%d*1/%d+", flag, i);
		flag = -flag;
	}
	printf("\n");
	printf("%f\n", sum);
	system("pause");
	return 0;
}

