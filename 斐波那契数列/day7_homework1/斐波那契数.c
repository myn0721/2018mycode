#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//·ÇµÝ¹é
int fib1(int n)
{
	int fn1 = 1;
	int fn2 = 1;
	int fn = 0;
	
	while (n>2)
	{
		fn = fn1 + fn2;
		fn1 = fn2;
		fn2 = fn;
		n--;
	}
	return fn2;
}
int fib2(int n)
{
	if (n <= 2)
	{
		return 1;
	}
	else
	{
		return fib2(n - 1) + fib2(n - 2);
	}

}
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d",&n);
	printf("·ÇµÝ¹éÊä³ö%d\n",fib1(n));
	printf("µÝ¹éÊä³ö%d\n", fib2(n));
	system("pause");
	return 0;
}