#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int prime(int n)
{
	int i = 0;
	int k = 0;
	k = sqrt(n);
	for (i = 2; i <= k; i++)
	{
		if (n%i == 0)
			return 0;
	}
	return 1;
}
int main()
{
	int n= 0;
	int ret = 0;
	printf("请输入一个数:");
	scanf("%d",&n);
	ret=prime(n);
	if (ret == 1)
		printf("%d是素数\n", n);
	else
		printf("%d不是素数\n",n);
	
	system("pause");
	return 0;
}