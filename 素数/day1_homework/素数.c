#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{   
	int i = 0;
	int j = 0;
	int r = 0;
	for (i = 100; i<= 200; i++)
	{
		for (j = 2; j <= i / 2; j++)
		{
			r = i%j;
			if (r != 0 && j == i / 2)
			{
				printf("%d ", i);
				break;
			}
			if (r == 0)
				break;
		}
	}

	system("pause");
	return 0;
}