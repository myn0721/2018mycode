#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int arrA[10] = {0};
	int arrB[10] = {0};
	int i = 0;
	int temp = 0;
	
	for (i = 0; i <10; i++)
	{
		scanf("%d", &arrA[i]);
	}
	printf("\n");
	for (i = 0; i < 10; i++)
	{
		scanf("%d",&arrB[i]);
	}
    printf("交换之前的数组:\n");
	for (i = 0; i <10; i++)
	{
		printf("%d ", arrA[i]);
	}
	printf("\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arrB[i]);
	}
	//开始交换数组内容
	
	for (i = 0; i < 10; i++)
	{
		temp = arrA[i];
		arrA[i] = arrB[i];
		arrB[i] = temp;
	}
	
	printf("交换之后的数组: \n");
	
	//打印交换完
	for (i = 0; i <10; i++)
	{
		printf("%d ", arrA[i]);
	}
	printf("\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arrB[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}
