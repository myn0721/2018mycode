#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

void mul(int n)
{
	int i = 0;
	int j = 0;
	for (i = 1; i <=n; i++)
	{
		for (j = 1; j <=i; j++)
		{
			printf("%d*%d=%2d", i, j,i*j);
		}
		printf("\n");
	}
}
int main()
{
	int n = 0;
	printf("输入乘法口诀表的行n=>:");
	scanf("%d", &n);
	mul(n);
	system("pause");
	return 0;
}