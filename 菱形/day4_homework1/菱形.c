#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i = 0;
	int j = 0;
	int line = 0;
	printf("������Ҫ��ӡ�������ǵ�����:>\n");
	scanf("%d",&line);
	for (i = 1; i<= line; i++)
	{
		//���ȴ�ӡ�ո�
		for (j = 1;j <= (line-i);j++)
		{
			printf(" ");
		}
		//��ʼ��ӡ*
		for (j = 1; j <= 2 *i - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	//��ʼ��ӡ������
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