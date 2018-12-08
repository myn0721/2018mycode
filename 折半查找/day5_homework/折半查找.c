#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 0;
	printf("请输入要查找的数字>:");
	scanf("%d", &k);
	
	int mid = 0;
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	while (left <= right)
	{
		mid = left + (right - left) / 2;
	
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
			break;
	}
	if (left <= right)
		printf("找到了，下标是：%d\n", mid);
	else
		printf("找不到\n");
		
	system("pause");
	return 0;
}