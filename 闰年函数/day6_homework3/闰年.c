#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int leap(int n)
{
	int ret = 0;
	if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
		return 1;
	else
		return 0;
}
int main()
{
	int ret = 0;
	int n = 0;
	printf("输入一个年份n>:");
	scanf("%d", &n);
	leap(n);
	ret = leap(n);
	if (ret == 1)
	{
		printf("%d是闰年", n);
	}
	else
		printf("%d不是闰年", n);
	system("pause");
	return 0;

}