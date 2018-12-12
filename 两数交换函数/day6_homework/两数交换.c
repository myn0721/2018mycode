#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
void swap(int*i, int*j)
{
	int temp = 0;
	temp = *i;
	*i = *j;
	*j = temp;

}
int main()
{
	int i = 0;
	int j = 0;
	printf("i=:");
	scanf("%d", &i);
	printf("j=:");
	scanf("%d",&j);
	printf("\n");
	swap(&i, &j);
	printf("i=%d,j=%d", i, j);
	system("pause");
	return 0;

}