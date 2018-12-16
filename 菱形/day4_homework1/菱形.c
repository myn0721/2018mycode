#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i = 0;
	int j = 0;
	int line = 0;
	printf("请输入要打印的正三角的行数:>\n");
	scanf("%d",&line);
	for (i = 1; i<= line; i++)
	{
		//首先打印空格
		for (j = 1;j <= (line-i);j++)
		{
			printf(" ");
		}
		//开始打印*
		for (j = 1; j <= 2 *i - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	//开始打印倒三角
	for (i = 1; i < line; i++)
	{
		for (j = 1; j <= i; j ++)
		{
			printf(" ");
		}
		for (j = 1; j <= 2 * (line - i) - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}