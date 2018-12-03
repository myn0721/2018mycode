#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[10] = { 0 };
	int i = 0;
	int max = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	max = a[0];
	for (i = 1; i < 10; i++)
	{
		if (max < a[i])
		{
			max = a[i];

		}
	}
	printf("max: %d\n",max);
	system("pause");
	return 0;
}