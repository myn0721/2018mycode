#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i = 0;
	scanf("%d", &i);
	if (i % 4 == 0 && i % 100 != 0)
	{
		printf("%d������\n", i);
	}
	if (i % 400 == 0)
	{
		printf("%d����������\n", i);
	}
	
		printf("%d��������\n",i);
	system("pause");
	return 0;
}