#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 0;
	int b = 0;
	//int temp = 0;
	scanf("%d %d", &a, &b);
	/*a = a + b;
	b = a - b;
	a = a - b;*///方法1：不用第三个变量
	/*temp = a;
	a = b;
	b = temp;*///方法2：借助第三个变量
	a = a^b;
	b = b^a;
	a = a^b;//方法3：利用异或操作符
	printf("交换后a=%d b=%d\n", a, b);
	system("pause");
	return 0;

}