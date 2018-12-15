#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
void init(int a[], int sz)
{
	//函数体
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		a[i] = i;
		printf("%d ", a[i]);
	}
}
void empty(int a[], int sz)
{
	//函数体
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		a[i] = 0;
		printf("%d ", a[i]);
	}
}
void reverse(int a[], int sz)
{
	//函数体
	int i = 0;
	int left = 0;
	int right = sz - 1;
	int temp = 0;
	for (i = 0; i < sz; i++)
	{
		while (left < right)
		{
			temp = a[left];
			a[left] = a[right];
			a[right] = temp;
			left++;
			right--;
		}
		printf("%d ", a[i]);
	}
}
int main()
{
	int a[10];
	int sz = sizeof(a) / sizeof(a[0]);
	printf("请对数组进行初始化: \n");
	init(a, sz);     //初始化数组
	printf("\n");
	printf("请对数组元素进行逆置:\n");
	reverse(a, sz);   //数组元素逆置
	printf("\n");
	printf("请对数组进行清空:\n");
	empty(a, sz);    //清空数组
	printf("\n");
	system("pause");
	return 0;
}