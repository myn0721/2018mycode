#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int fun(int n, int k)
{
	if (k == 0)
	{
		return 1;
	}
	return n*fun(n, k - 1);
}
int main()
{
	int n = 0;
	int k = 0;
	scanf("%d %d",&n,&k);
	printf("n^k=%d\n",fun(n,k));
	system("pause");
    return 0;
}